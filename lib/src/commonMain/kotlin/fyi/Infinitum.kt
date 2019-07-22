package fyi

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.models.ConfigResponse
import fyi.models.InitResponse
import fyi.models.InitResponseDTO
import fyi.modules.apps.Apps
import fyi.modules.auth.Auth
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
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
    private lateinit var mDomain: String
    private val mApplicationContext: ApplicationContext
    private lateinit var mInstance: Infinitum
    private val mRepository: Repository

    private constructor(applicationContext: ApplicationContext) {
        mApplicationContext = applicationContext

        mRepository = Repository(mApplicationContext)
    }

    @ThreadLocal
    companion object {

        private var INSTANCE: Infinitum? = null

        fun getInstance(applicationContext: ApplicationContext): Infinitum {
            if (INSTANCE == null) INSTANCE = Infinitum(applicationContext)

            return INSTANCE!!
        }
    }

    private fun setDomain(domain: String) {
        mDomain = domain
    }

    private fun getDomain(): String? {
        if (::mDomain.isInitialized) return mDomain
        return null
    }

    fun config(domain: String,
               appType: String,
               onSuccess: (ConfigResponse) -> Unit,
               onFailure: (ErrorResponse) -> Unit) {

        if (!Args.checkForContent(domain, appType)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        setDomain(domain)

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
             appKey: String,
             appSecret: String,
             appToken: String,
             identity: String,
             onSuccess: (InitResponse) -> Unit,
             onFailure: (ErrorResponse) -> Unit) {

        init(domain, appKey, appSecret, appToken, identity,null, onSuccess, onFailure)
    }

    fun init(domain: String,
             appKey: String,
             appSecret: String,
             appToken: String,
             identity: String,
             macAddress: String?="",
             onSuccess: (InitResponse) -> Unit,
             onFailure: (ErrorResponse) -> Unit) {

        if (!Args.checkForContent(domain, appKey, appSecret, appToken, identity)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        mRepository.getPreferenceEditor().setAppToken(appToken)

        setDomain(domain)

        val url = mBaseUrl.replace("DOMAIN",domain).plus("init")

        val body = Args.createMap(
            Pair("app_key",appKey),
            Pair("app_secret", appSecret),
            Pair("app_token", appToken),
            Pair("identity", identity)
        )

        if (!macAddress.isNullOrBlank()) body["mac_address"] = macAddress

        RequestLauncher.launch(
            url = url,
            headerParameters = null,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {response ->
                val initResponse = Json.nonstrict.parse(InitResponseDTO.serializer(), response as String)
                mRepository.getPreferenceEditor().setClientToken(initResponse.access_token)
                onSuccess(InitResponse(initResponse.config))
            },
            onFailure = onFailure
        )
    }

    fun apps(): Apps? {
        if (!::mApps.isInitialized) {
            val domain = getDomain() ?: return null

            val appsUrl = mBaseUrl.replace("DOMAIN", domain).plus("apps")
            mApps = Apps(appsUrl, mNetworkService, mRepository)
        }
        return mApps
    }

    fun auth(): Auth? {
        if (!::mAuth.isInitialized) {
            val domain = getDomain() ?: return null

            val authUrl = mBaseUrl.replace("DOMAIN", domain).plus("auth")
            mAuth = Auth(authUrl, mNetworkService, mRepository)
        }
        return mAuth
    }

}