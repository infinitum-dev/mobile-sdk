package pt.fyi.modules.apps

import io.ktor.http.HttpMethod
import pt.fyi.InfinitumResponseCallback
import pt.fyi.exceptions.Errors
import pt.fyi.network.NetworkService
import pt.fyi.network.RequestLauncher
import pt.fyi.utils.Args
import pt.fyi.utils.Utils

class Apps(val mBaseUrl: String, val mNetworkService: NetworkService) {

    fun getApps(
        accessToken: String,
        callback: InfinitumResponseCallback
    ) {

        if (!Args.checkForContent(accessToken)) {
            callback.onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Utils.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            callback = callback
        )
    }

    fun createApp(
        accessToken: String,
        appName: String,
        appTypeId: Int,
        token: String,
        callback: InfinitumResponseCallback) {

        if (!Args.checkForContent(accessToken, appName, appTypeId, token)) {
            callback.onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Utils.createAuthorizationHeader(accessToken)

        val body = Utils.createMap(
            Pair("name", appName),
            Pair("app_type_id", appTypeId.toString()),
            Pair("token", token)
        )

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            callback = callback
        )
    }

    fun getAppById(
        accessToken: String,
        appId: Int,
        callback: InfinitumResponseCallback) {

        if (!Args.checkForContent(accessToken, appId)) {
            callback.onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$appId")

        val header = Utils.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            callback = callback
        )
    }

    fun deleteApp(
        accessToken: String,
        appId: Int,
        callback: InfinitumResponseCallback) {

        if (!Args.checkForContent(accessToken, appId)) {
            callback.onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$appId")

        val header = Utils.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Delete,
            networkService = mNetworkService,
            callback = callback
        )
    }

    fun updateApp(
        accessToken: String,
        appId: Int,
        appName: String,
        appTypeId: Int,
        callback: InfinitumResponseCallback) {

        if (!Args.checkForContent(accessToken, appId, appName, appTypeId)) {
            callback.onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$appId")

        val header = Utils.createAuthorizationHeader(accessToken)

        val body = Utils.createMap(
            Pair("name", appName),
            Pair("app_type_id", appTypeId.toString())
        )

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Put,
            networkService = mNetworkService,
            callback = callback
        )
    }
}
