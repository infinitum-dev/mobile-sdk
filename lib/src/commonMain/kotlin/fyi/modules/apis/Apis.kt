package fyi.modules.apis

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.apis.models.ApiOptionalParameters
import fyi.modules.apis.models.ApiResponse
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json
import kotlinx.serialization.list

data class Apis(private var mBaseUrl: String, private val mNetworkService: NetworkService, val mRepository: Repository) {

    //CREATE
    fun newApi(
        name: String,
        apiTypeId: Int,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        newApi(name, apiTypeId, "", onSuccess, onFailure)
    }

    fun newApi(
        name: String,
        apiTypeId: Int,
        data: String,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, name, apiTypeId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("name", name),
            Pair("api_type_id", apiTypeId.toString()),
            Pair("data", data)
        )

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {
                onSuccess()
            },
            onFailure = onFailure
        )
    }

    //DELETE
    fun deleteApi(
        apiId: Int,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, apiId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/$apiId")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Delete,
            networkService = mNetworkService,
            onSuccess = {
                onSuccess()
            },
            onFailure = onFailure
        )
    }

    //GET
    fun getAllApis(
        onSuccess: (List<ApiResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_TOKEN.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {
                println("INFINITUM - $it")
                val apiList = Json.nonstrict.parse(ApiResponse.serializer().list, it as String)
                onSuccess(apiList)
            },
            onFailure = onFailure
        )
    }

    fun getApiById(
        apiId: Int,
        onSuccess: (ApiResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, apiId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/$apiId")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {
                val api = Json.nonstrict.parse(ApiResponse.serializer(), it as String)
                onSuccess(api)
            },
            onFailure = onFailure
        )
    }

    //UPDATE
    fun updateApi(
        apiId: Int,
        builder: ApiOptionalParameters.Builder,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, apiId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/$apiId")

        val body = builder.build().toMap()

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Put,
            networkService = mNetworkService,
            onSuccess = {
                onSuccess()
            },
            onFailure = onFailure
        )
    }

    internal fun setUrl(url: String) {
        if (mBaseUrl != url) {
            mBaseUrl = url
        }
    }

}