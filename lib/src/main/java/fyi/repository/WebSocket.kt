package fyi.repository

import com.github.nkzawa.emitter.Emitter
import com.github.nkzawa.socketio.client.IO
import com.github.nkzawa.socketio.client.Socket
import java.lang.Exception



actual class WebSocket actual constructor(private val onLicensed: () -> Unit, private val onUnlicensed: () -> Unit, private val mRepository: Repository) {
    private lateinit var mSocket: Socket
    private val DEVICE_LICENSED = "device-licensed"
    private val DEVICE_UNLICENSED = "device-unlicensed"

    private lateinit var mOnConnected: Emitter.Listener
    private lateinit var mOnDisconnected: Emitter.Listener
    private lateinit var mOnDeviceLicensed: Emitter.Listener
    private lateinit var mOnDeviceUnlicensed: Emitter.Listener
    private lateinit var mOnReconnected: Emitter.Listener

    init {
        createSocket()
        setListeners()
        applyListeners()
        connect()
    }

    private fun setListeners() {
        mOnConnected = Emitter.Listener { println("CONNECTED") }
        mOnDisconnected = Emitter.Listener { println("DISCONNECTED") }
        mOnReconnected = Emitter.Listener { println("RECONNECTED") }

        mOnDeviceLicensed = Emitter.Listener { onLicensed() }
        mOnDeviceUnlicensed = Emitter.Listener { onUnlicensed() }
    }

    private fun createSocket() {
        try {
            val opts = IO.Options();
            opts.secure = false;
            opts.reconnection = true;
            opts.timeout = -1;
            opts.query = """appToken=${mRepository.getAppToken()}&appVersion=1&deviceType=android&identity=${mRepository.getDeviceId()}""".trimMargin()
            println(opts.query)
            println(mRepository.getNode())
            mSocket = IO.socket(mRepository.getNode(), opts)

        } catch (e: Exception) {
            println(e)
        }
    }

    fun connect() {
        mSocket.connect()
    }

    actual fun disconnect() {
        mSocket.off()
        mSocket.disconnect()
    }

    private fun applyListeners() {
        mSocket
            .on(Socket.EVENT_CONNECT, mOnConnected)
            .on(Socket.EVENT_DISCONNECT, mOnDisconnected)
            .on(Socket.EVENT_RECONNECT, mOnReconnected)
            .on(DEVICE_LICENSED, mOnDeviceLicensed)
            .on(DEVICE_UNLICENSED, mOnDeviceUnlicensed)
    }

}