package fyi.modules.apps

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.apps.models.App
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json
import kotlinx.serialization.list

data class Apps(private val mBaseUrl: String, private val mNetworkService: NetworkService, val mRepository: Repository) {


    fun getApps(
        onSuccess: (List<App>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {response ->
                val apps = Json.nonstrict.parse(App.serializer().list, response as String)
                onSuccess(apps)
            },
            onFailure = onFailure
        )
    }

    fun createApp(
        appName: String,
        appTypeId: Int,
        token: String,
        onSuccess: (Boolean) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getToken()

        if (!Args.checkForContent(accessToken, appName, appTypeId, token)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
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
            onSuccess = {result ->
                onSuccess((result as String).startsWith("{id:"))
            },
            onFailure = onFailure
        )
    }

    fun getAppById(
        appId: Int,
        onSuccess: (App) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getToken()

        if (!Args.checkForContent(accessToken, appId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$appId")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {response ->
                val app = Json.nonstrict.parse(App.serializer(), response as String)
                onSuccess(app)
            },
            onFailure = onFailure
        )
    }

    fun deleteApp(
        appId: Int,
        onSuccess: (Boolean) -> Unit,
        onFailure: (ErrorResponse) -> Unit
        ) {

        val accessToken = mRepository.getToken()

        if (!Args.checkForContent(accessToken, appId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$appId")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Delete,
            networkService = mNetworkService,
            onSuccess = {response ->
                onSuccess(true)
            },
            onFailure = onFailure
        )
    }

    fun updateApp(
        appId: Int,
        appName: String,
        appTypeId: Int,
        onSuccess: (Boolean) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getToken()

        if (!Args.checkForContent(accessToken, appId, appName, appTypeId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$appId")

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("name", appName),
            Pair("app_type_id", appTypeId.toString())
        )

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Put,
            networkService = mNetworkService,
            onSuccess = {result ->
                onSuccess((result as String).startsWith("{id:"))
            },
            onFailure = onFailure
        )
    }
}