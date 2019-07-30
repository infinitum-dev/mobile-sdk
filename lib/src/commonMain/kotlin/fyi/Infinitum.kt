package fyi

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.models.ConfigResponse
import fyi.models.InitResponse
import fyi.models.InitResponseDTO
import fyi.modules.apps.Apps
import fyi.modules.auth.Auth
import fyi.modules.deviceposition.DevicePosition
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.repository.WebSocket
import fyi.utils.ApplicationContext
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json
import kotlin.native.concurrent.ThreadLocal

@ThreadLocal
class Infinitum {
    private val mBaseUrl = "https://DOMAIN/api/"
    private val mNetworkService = NetworkService()
    private lateinit var mAuth: Auth
    private lateinit var mApps: Apps
    private lateinit var mDevicePosition: DevicePosition
    private lateinit var mDomain: String
    private val mApplicationContext: ApplicationContext
    private val mRepository: Repository

    private lateinit var mWebSocket: WebSocket

    private constructor(applicationContext: ApplicationContext) {
        mApplicationContext = applicationContext

        try {
            mRepository = Repository(mApplicationContext)
        }catch (e: Exception) {
            throw Exception("Error instantiating Infinitum. Make sure your context is not null.")
        }
    }

    @ThreadLocal
    companion object {

        private var INSTANCE: Infinitum? = null

        fun getInstance(applicationContext: ApplicationContext): Infinitum {
            if (INSTANCE == null) INSTANCE = Infinitum(applicationContext)

            return INSTANCE!!
        }
    }

    //INITIALIZATION METHODS

    fun config(domain: String,
               appType: String,
               onSuccess: (ConfigResponse) -> Unit,
               onFailure: (ErrorResponse) -> Unit) {

        if (!isDomainInitialized(domain)) {
            ping(
                domain = domain,
                onSuccess = {
                    mDomain = domain
                    config(mDomain, appType, onSuccess, onFailure)
                },
                onFailure = onFailure
            )
            return
        }

        if (!Args.checkForContent(appType)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.replace("DOMAIN",domain).plus("config")

        val body = Args.createMap(Pair("app_type", appType))

        RequestLauncher.launch(
            url = url,
            headerParameters = null,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {response ->
                val configResponse = Json.nonstrict.parse(ConfigResponse.serializer(), response as String)
                onSuccess(configResponse)
            },
            onFailure = onFailure
        )
    }

    fun init(domain: String,
             appToken: String,
             onSuccess: (InitResponse) -> Unit,
             onFailure: (ErrorResponse) -> Unit,
             onLicensed: () -> Unit = {},
             onUnlicensed: () -> Unit = {}) {

        if (!isDomainInitialized(domain)) {
            ping(
                domain = domain,
                onSuccess = {
                    mDomain = domain
                    init(mDomain, appToken, onSuccess, onFailure)
                },
                onFailure = onFailure
            )
            return
        }

        val identity = mRepository.getDeviceId()

        if (!Args.checkForContent(domain, appToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        mRepository.setAppToken(appToken)

        val url = mBaseUrl.replace("DOMAIN",domain).plus("init")

        val body = Args.createMap(
            Pair("app_token", appToken),
            Pair("identity", identity)
        )

        RequestLauncher.launch(
            url = url,
            headerParameters = null,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {response ->
                val initResponse = Json.nonstrict.parse(InitResponseDTO.serializer(), response as String)
                mRepository.setClientToken(initResponse.access_token)
                mRepository.setNode(initResponse.node)
                //Means that the user wants to use node
                if (onLicensed != {}) {
                    webSocket(onLicensed, onUnlicensed)
                }
                onSuccess(InitResponse(initResponse.config))
            },
            onFailure = onFailure
        )
    }

    fun init(domain: String,
             appToken: String,
             onSuccess: (InitResponse) -> Unit,
             onFailure: (ErrorResponse) -> Unit) {
            init(domain, appToken, onSuccess, onFailure, {}, {})
    }

    private fun webSocket(onLicensed: () -> Unit, onUnlicensed: () -> Unit) {
        mWebSocket = WebSocket(onLicensed, onUnlicensed, mRepository)
    }

    fun exit() {
        mWebSocket.disconnect()
    }


    private fun ping(
        domain: String,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit) {

        if (!Args.checkForContent(domain)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.replace("DOMAIN", domain).plus("ping")

        RequestLauncher.launch(
            url = url,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {
                onSuccess()
            },
            onFailure = {
                onFailure(Errors.INVALID_DOMAIN.error)
            }
        )
    }

    // If this returns false then the ping method will be executed
    private fun isDomainInitialized(domain: String): Boolean {
        if (!::mDomain.isInitialized) {
            return false
        }else return mDomain == domain
    }

    //MODULES

    //Null means that the SDK is yet to be initialized
    fun apps(): Apps? {
        if (!isDomainInitialized(mDomain)) return null

        val appsUrl = mBaseUrl.replace("DOMAIN", mDomain).plus("apps")

        if (!::mApps.isInitialized) {
            mApps = Apps(appsUrl, mNetworkService, mRepository)
        }else {
            mApps.setUrl(appsUrl)
        }

        return mApps
    }

    //Null means that the SDK is yet to be initialized
    fun auth(): Auth? {
        if (!isDomainInitialized(mDomain)) return null

        val authUrl = mBaseUrl.replace("DOMAIN", mDomain).plus("auth")

        if (!::mAuth.isInitialized) {
            mAuth = Auth(authUrl, mNetworkService, mRepository)
        }else {
            mAuth.setUrl(authUrl)
        }

        return mAuth
    }

    fun devicePosition(): DevicePosition? {
        if (!isDomainInitialized(mDomain)) return null

        val devicePositionUrl = mBaseUrl.replace("DOMAIN", mDomain).plus("devices/positions")

        if (!::mDevicePosition.isInitialized) {
            mDevicePosition = DevicePosition(devicePositionUrl, mNetworkService, mRepository)
        }else {
            mDevicePosition.setUrl(devicePositionUrl)
        }

        return mDevicePosition
    }

}