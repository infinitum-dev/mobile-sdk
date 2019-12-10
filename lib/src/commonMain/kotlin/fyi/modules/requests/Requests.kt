package fyi.modules.requests

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.deviceinput.models.DeviceInputResponse
import fyi.modules.requests.models.*
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.internal.HashMapSerializer
import kotlinx.serialization.internal.IntSerializer
import kotlinx.serialization.internal.MapEntrySerializer
import kotlinx.serialization.internal.MapLikeSerializer
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.int
import kotlinx.serialization.json.json
import kotlinx.serialization.list
import kotlinx.serialization.serializer

data class Requests(private var mBaseUrl: String, private val mNetworkService: NetworkService, val mRepository: Repository) {

    //GET
    fun getRequestsByApiBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (Map<String, List<RequestResponse>>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val url = mBaseUrl.plus("/list/apis${builder.build().getQuery()}")

        sendRequest(
            url = url,
            onSuccess = onSuccess,
            onFailure = onFailure
        )
    }

    //Not working - API SIDE
    fun getRequestsByLocationBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (Map<String, List<RequestResponse>>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val url = mBaseUrl.plus("/list/locations${builder.build().getQuery()}")

        sendRequest(
            url = url,
            onSuccess = onSuccess,
            onFailure = onFailure
        )
    }

    fun getRequestsByModuleBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (Map<String, List<RequestResponse>>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val url = mBaseUrl.plus("/list/modules${builder.build().getQuery()}")

        sendRequest(
            url = url,
            onSuccess = onSuccess,
            onFailure = onFailure
        )
    }

    fun getRequestsByCodeBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (Map<String, List<RequestResponse>>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val url = mBaseUrl.plus("/list/codes${builder.build().getQuery()}")

        sendRequest(
            url = url,
            onSuccess = onSuccess,
            onFailure = onFailure
        )
    }

    fun getRequestsErrorsBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (Map<String, List<RequestResponse>>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val url = mBaseUrl.plus("/list/errors${builder.build().getQuery()}")

        sendRequest(
            url = url,
            onSuccess = onSuccess,
            onFailure = onFailure
        )
    }

    fun getRequestsCountBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (Int) -> Unit,
        onFailure: (ErrorResponse) -> Unit) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/count${builder.build().getQuery()}")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {
                val x = Json.parse(JsonObject.serializer(), it as String).getValue("requests_count")
                onSuccess(x.int)
            },
            onFailure = onFailure
        )
    }

    fun getRequestsCountByApiBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (List<RequestCountApi>) -> Unit,
        onFailure: (ErrorResponse) -> Unit) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/count/apis${builder.build().getQuery()}")

        println("---------INFINITUM $url------------")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {
                val response = Json.nonstrict.parse(RequestCountApi.serializer().list, it as String)
                onSuccess(response)
            },
            onFailure = onFailure
        )
    }

    fun getRequestsCountByModuleBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (List<RequestCountModule>) -> Unit,
        onFailure: (ErrorResponse) -> Unit) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/count/modules${builder.build().getQuery()}")

        println("---------INFINITUM $url------------")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {
                val response = Json.nonstrict.parse(RequestCountModule.serializer().list, it as String)
                onSuccess(response)
            },
            onFailure = onFailure
        )
    }

    fun getRequestsCountByCodeBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (List<RequestCountCode>) -> Unit,
        onFailure: (ErrorResponse) -> Unit) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/count/codes${builder.build().getQuery()}")

        println("---------INFINITUM $url------------")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {
                val response = Json.nonstrict.parse(RequestCountCode.serializer().list, it as String)
                onSuccess(response)
            },
            onFailure = onFailure
        )
    }

    fun getRequestsErrorsCountBetweenTwoDates(
        builder: RequestsOptionalParameters.Builder,
        onSuccess: (RequestCountErrors) -> Unit,
        onFailure: (ErrorResponse) -> Unit) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/count/errors${builder.build().getQuery()}")

        println("---------INFINITUM $url------------")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {
                val response = Json.nonstrict.parse(RequestCountErrors.serializer(), it as String)
                onSuccess(response)
            },
            onFailure = onFailure
        )
    }


    //Because these functions only vary in their url we can avoid code duplication
    private fun sendRequest(
        url: String,
        onSuccess: (Map<String, List<RequestResponse>>) -> Unit,
        onFailure: (ErrorResponse) -> Unit) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        println("---------INFINITUM $url------------")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {
                val requests = Json.nonstrict.parse(HashMapSerializer(String.serializer(), RequestResponse.serializer().list), it as String)
                onSuccess(requests)
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