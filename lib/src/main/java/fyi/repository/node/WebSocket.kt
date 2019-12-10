package fyi.repository.node

import com.github.nkzawa.emitter.Emitter
import com.github.nkzawa.socketio.client.IO
import com.github.nkzawa.socketio.client.Socket
import fyi.repository.Repository
import fyi.repository.auth_requests.AuthRequestManager
import java.lang.Exception

actual internal class WebSocket actual constructor(
    private val nodeEventBuilder: NodeEvent.NodeEventBuilder,
    val mRepository: Repository) {

    private lateinit var mSocket: Socket

    private lateinit var mOnConnected: Emitter.Listener
    private lateinit var mOnDisconnected: Emitter.Listener
    private lateinit var mOnReconnected: Emitter.Listener

    init {
        createSocket()
        setListeners()
        applyListeners()
        connect()
    }

    private fun setListeners() {
        println("setlisteners")
        mOnConnected = Emitter.Listener {
            println("----------INFINITUM_CONNECTED----------")
            mRepository.setConnected(true)
            AuthRequestManager.sendStoredAuthenticationRequests(mRepository)
        }
        mOnDisconnected = Emitter.Listener {
            println("----------DISCONNECTED----------")
            mRepository.setConnected(false)
        }
        mOnReconnected = Emitter.Listener { println("----------RECONNECTED----------") }
    }

    private fun createSocket() {
        try {
            val opts = IO.Options()
            opts.secure = false
            opts.reconnection = true
            opts.timeout = -1
            opts.query = """appToken=${mRepository.getAppToken()}&appVersion=1&deviceType=android&identity=${mRepository.getDeviceId()}""".trimMargin()
            mSocket = IO.socket(mRepository.getNode(), opts)

        } catch (e: Exception) {
            println(e)
        }
    }

    private fun connect() {
        mSocket.connect()
    }

    internal actual fun disconnect() {
        mSocket.off()
        mSocket.disconnect()
    }

    private fun applyListeners() {
        mSocket
            .on(Socket.EVENT_CONNECT, mOnConnected)
            .on(Socket.EVENT_DISCONNECT, mOnDisconnected)
            .on(Socket.EVENT_RECONNECT, mOnReconnected)

        nodeEventBuilder.getEventList().forEach { nodeEvent ->
            mSocket.on(nodeEvent.event,  Emitter.Listener { nodeEvent.onEvent() })
        }
    }

}