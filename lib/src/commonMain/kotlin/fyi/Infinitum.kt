package fyi

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.models.ConfigResponse
import fyi.models.InitResponseDTO
import fyi.modules.apis.Apis
import fyi.modules.apps.Apps
import fyi.modules.auth.Auth
import fyi.modules.deviceinput.DeviceInput
import fyi.modules.devices.Devices
import fyi.modules.deviceposition.DevicePosition
import fyi.modules.inbox.Inbox
import fyi.modules.location.Location
import fyi.modules.requests.Requests
import fyi.modules.roles.Roles
import fyi.modules.users.Users
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.repository.node.WebSocket
import fyi.repository.node.NodeEvent.NodeEventBuilder
import fyi.utils.ApplicationContext
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json
import kotlin.native.concurrent.ThreadLocal

@ThreadLocal
class Infinitum {
    private val mNetworkService = NetworkService()
    private lateinit var mAuth: Auth
    private lateinit var mApps: Apps
    private lateinit var mLocation: Location
    private lateinit var mInbox: Inbox
    private lateinit var mDevicePosition: DevicePosition
    private lateinit var mUsers: Users
    private lateinit var mDevices: Devices
    private lateinit var mDeviceInput: DeviceInput
    private lateinit var mRequests: Requests
    private lateinit var mRoles: Roles
    private lateinit var mApis: Apis
    private lateinit var mDomain: String
    private val mApplicationContext: ApplicationContext
    private val mRepository: Repository

    private lateinit var mWebSocket: WebSocket

    private constructor(applicationContext: ApplicationContext) {
        mApplicationContext = applicationContext
        try {
            mRepository = Repository(mApplicationContext)

            if (mRepository.getDomain().isNotBlank()) {
                mDomain = mRepository.getDomain()
            }
        } catch (e: Exception) {
            throw Exception("Error instantiating Infinitum. Make sure your context is not null.")
        }

        Args.identity = mRepository.getDeviceId()
    }

    @ThreadLocal
    companion object {
        internal const val BASE_URL = "https://DOMAIN/api/"
        private var INSTANCE: Infinitum? = null

        fun getInstance(applicationContext: ApplicationContext): Infinitum {
            if (INSTANCE == null) INSTANCE = Infinitum(applicationContext)

            return INSTANCE!!
        }

        //Only if the context was already passed
        fun getInstance(): Infinitum? {
            return INSTANCE
        }
    }

    //INITIALIZATION METHODS

    internal fun isInitialized(): Boolean {
        return mRepository.getAccessToken().isNotBlank() &&
                mRepository.getDomain().isNotBlank()
    }

    fun config(
        domain: String,
        appType: String,
        onSuccess: (ConfigResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

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

        val url = BASE_URL.replace("DOMAIN", domain).plus("config")

        val body = Args.createMap(Pair("app_type", appType))

        RequestLauncher.launch(
            url = url,
            headerParameters = null,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = { response ->
                val configResponse = Json.nonstrict.parse(ConfigResponse.serializer(), response as String)
                onSuccess(configResponse)
            },
            onFailure = onFailure
        )
    }

    fun init(
        domain: String,
        appToken: String,
//             onSuccess: (InitResponse) -> Unit,
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit,
        eventBuilder: NodeEventBuilder
    ) {

        if (!isDomainInitialized(domain)) {
            ping(
                domain = domain,
                onSuccess = {
                    mDomain = domain
                    init(mDomain, appToken, onSuccess, onFailure, eventBuilder)
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

        val url = BASE_URL.replace("DOMAIN", domain).plus("init")

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
            onSuccess = { response ->
                val initResponse = Json.nonstrict.parse(InitResponseDTO.serializer(), response as String)
                exit()
                mRepository.setDomain(mDomain)
                mRepository.setClientToken(initResponse.access_token)
                mRepository.setNode(initResponse.node)
                mRepository.setAppToken(appToken)
                //To know if the requests should be saved in case it's offline
                mRepository.setOfflineMode(initResponse.config.offline == 1)
                println(initResponse.access_token)
                webSocket(eventBuilder)

//                onSuccess(InitResponse(initResponse.config))
                onSuccess(response)
            },
            onFailure = onFailure
        )
    }

    internal fun init(
        domain: String,
        appToken: String,
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val identity = mRepository.getDeviceId()

        val url = BASE_URL.replace("DOMAIN", domain).plus("init")

        val body = Args.createMap(
            Pair("app_token", appToken),
            Pair("identity", identity)
        )

        println(body)

        RequestLauncher.launch(
            url = url,
            headerParameters = null,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = { response ->
                println("onsuccessinit")
                val initResponse = Json.nonstrict.parse(InitResponseDTO.serializer(), response as String)
                onSuccess(initResponse.access_token)
            },
            onFailure = { error ->
                println("init error internal")
                onFailure(error)
            }
        )
    }

    private fun webSocket(nodeEventBuilder: NodeEventBuilder) {
        mWebSocket = WebSocket(nodeEventBuilder, mRepository)
    }

    fun exit() {
        if (::mWebSocket.isInitialized) mWebSocket.disconnect()
        mRepository.cleanPreferenceEditor()
    }


    private fun ping(
        domain: String,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        if (!Args.checkForContent(domain)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = BASE_URL.replace("DOMAIN", domain).plus("ping")

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
        } else return mDomain == domain
    }

    //MODULES

    //Null means that the SDK is yet to be initialized
    fun apps(): Apps? {
        if (!isDomainInitialized(mDomain)) return null

        val appsUrl = BASE_URL.replace("DOMAIN", mDomain).plus("apps")

        if (!::mApps.isInitialized) {
            mApps = Apps(appsUrl, mNetworkService, mRepository)
        } else {
            mApps.setUrl(appsUrl)
        }

        return mApps
    }

    //Null means that the SDK is yet to be initialized
    fun inbox(): Inbox? {
        if (!isDomainInitialized(mDomain)) return null

        val appsUrl = BASE_URL.replace("DOMAIN", mDomain).plus("inbox")

        if (!::mApps.isInitialized) {
            mInbox = Inbox(appsUrl, mNetworkService, mRepository)
        } else {
            mInbox.setUrl(appsUrl)
        }

        return mInbox
    }

    //Null means that the SDK is yet to be initialized
    fun location(): Location? {
        if (!isDomainInitialized(mDomain)) return null

        val appsUrl = BASE_URL.replace("DOMAIN", mDomain).plus("inbox")

        if (!::mApps.isInitialized) {
            mLocation = Location(appsUrl, mNetworkService, mRepository)
        } else {
            mLocation.setUrl(appsUrl)
        }

        return mLocation
    }

    //Null means that the SDK is yet to be initialized
    fun auth(): Auth? {
        if (!isDomainInitialized(mDomain)) return null

        val authUrl = BASE_URL.replace("DOMAIN", mDomain).plus("locations")

        println(authUrl)

        if (!::mAuth.isInitialized) {
            mAuth = Auth(authUrl, mNetworkService, mRepository)
        } else {
            mAuth.setUrl(authUrl)
        }

        return mAuth
    }

    fun devicePosition(): DevicePosition? {
        if (!isDomainInitialized(mDomain)) return null

        val devicePositionUrl = BASE_URL.replace("DOMAIN", mDomain).plus("devices/positions")

        if (!::mDevicePosition.isInitialized) {
            mDevicePosition = DevicePosition(devicePositionUrl, mNetworkService, mRepository)
        } else {
            mDevicePosition.setUrl(devicePositionUrl)
        }

        return mDevicePosition
    }

    fun users(): Users? {
        if (!isDomainInitialized(mDomain)) return null

        val usersUrl = BASE_URL.replace("DOMAIN", mDomain).plus("users")

        if (!::mUsers.isInitialized) {
            mUsers = Users(usersUrl, mNetworkService, mRepository)
        } else {
            mUsers.setUrl(usersUrl)
        }

        return mUsers
    }

    fun devices(): Devices? {
        if (!isDomainInitialized(mDomain)) return null

        val devicesUrl = BASE_URL.replace("DOMAIN", mDomain).plus("devices")

        if (!::mDevices.isInitialized) {
            mDevices = Devices(devicesUrl, mNetworkService, mRepository)
        } else {
            mDevices.setUrl(devicesUrl)
        }

        return mDevices
    }

    fun deviceInput(): DeviceInput? {
        if (!isDomainInitialized(mDomain)) return null

        val deviceInputUrl = BASE_URL.replace("DOMAIN", mDomain).plus("devices/inputs")

        if (!::mDeviceInput.isInitialized) {
            mDeviceInput = DeviceInput(deviceInputUrl, mNetworkService, mRepository)
        } else {
            mDeviceInput.setUrl(deviceInputUrl)
        }
        return mDeviceInput
    }

    fun requests(): Requests? {
        if (!isDomainInitialized(mDomain)) return null

        val requestsUrl = BASE_URL.replace("DOMAIN", mDomain).plus("requests")

        if (!::mRequests.isInitialized) {
            mRequests = Requests(requestsUrl, mNetworkService, mRepository)
        } else {
            mRequests.setUrl(requestsUrl)
        }

        return mRequests
    }

    fun roles(): Roles? {
        if (!isDomainInitialized(mDomain)) return null

        val rolesUrl = BASE_URL.replace("DOMAIN", mDomain).plus("roles")

        if (!::mRoles.isInitialized) {
            mRoles = Roles(rolesUrl, mNetworkService, mRepository)
        } else {
            mRoles.setUrl(rolesUrl)
        }

        return mRoles
    }

    fun apis(): Apis? {
        if (!isDomainInitialized(mDomain)) return null

        val apisUrl = BASE_URL.replace("DOMAIN", mDomain).plus("apis")

        if (!::mApis.isInitialized) {
            mApis = Apis(apisUrl, mNetworkService, mRepository)
        } else {
            mApis.setUrl(apisUrl)
        }

        return mApis
    }

    fun isConnected(): Boolean {
        return mRepository.isConnected()
    }


    //To be called internally to send saved requests
    internal fun getDomain(): String {
        if (isDomainInitialized(mDomain)) {
            return mDomain
        }
        return ""
    }
}