package pt.fyi

import io.ktor.http.HttpMethod
import pt.fyi.exceptions.Errors
import pt.fyi.modules.apps.Apps
import pt.fyi.modules.auth.Auth
import pt.fyi.network.NetworkService
import pt.fyi.network.RequestLauncher
import pt.fyi.utils.Args
import pt.fyi.utils.Utils
import kotlin.native.concurrent.ThreadLocal

@ThreadLocal
object Infinitum {
    private val mBaseUrl = "https://DOMAIN.infinitum.app/api/"
    private val mNetworkService = NetworkService()
    private lateinit var mAuth: Auth
    private lateinit var mApps: Apps
    private lateinit var mDomain: String

    fun getInstance(): Infinitum {
        return this
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
               callback: InfinitumResponseCallback) {

        if (!Args.checkForContent(domain, appType)) {
            callback.onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        setDomain(domain)

        val url = mBaseUrl.replace("DOMAIN",domain).plus("config")

        val body = Utils.createMap(Pair("app_type", appType))

        RequestLauncher.launch(
            url = url,
            headerParameters = null,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            callback = callback
        )
    }

    fun init(domain: String,
             appKey: String,
             appSecret: String,
             appToken: String,
             identity: String,
             callback: InfinitumResponseCallback) {

        init(domain, appKey, appSecret, appToken, identity, null, callback)
    }

    fun init(domain: String,
             appKey: String,
             appSecret: String,
             appToken: String,
             identity: String,
             macAddress: String?="",
             callback: InfinitumResponseCallback) {

        if (!Args.checkForContent(domain, appKey, appSecret, appToken, identity)) {
            callback.onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        setDomain(domain)

        val url = mBaseUrl.replace("DOMAIN",domain).plus("init")

        val body = Utils.createMap(
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
            callback = callback
        )
    }

    fun apps(): Apps? {
        if (!::mApps.isInitialized) {
            val domain = getDomain() ?: return null

            val appsUrl = mBaseUrl.replace("DOMAIN", domain).plus("apps")
            mApps = Apps(appsUrl, mNetworkService)
        }
        return mApps
    }

    fun auth(): Auth? {
        if (!::mAuth.isInitialized) {
            val domain = getDomain() ?: return null

            val authUrl = mBaseUrl.replace("DOMAIN", domain).plus("auth")
            mAuth = Auth(authUrl, mNetworkService)
        }
        return mAuth
    }

}