package fyi.modules.location

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import io.ktor.util.InternalAPI
import kotlinx.serialization.ImplicitReflectionSerializer

data class Location(
    private var mBaseUrl: String,
    private val mNetworkService: NetworkService,
    val mRepository: Repository
) {

    fun getAll(
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                onSuccess(response as String)
            },
            onFailure = onFailure
        )
    }

    @InternalAPI
    fun postNew(
        name: String,
        location_type_id: String,
        latitude: String,
        longitude: String,
        onSuccess: (Boolean) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMapAny(
            Pair("name", name),
            Pair("location_type_id", location_type_id),
            Pair(
                "position", "{\"lat\":\"" + latitude +
                        "\",\"lng\":\"" + longitude + "\"}"
            )
        )

//        val json = "{\"name\":\"" + name + "\"," +
//                "\"location_type_id\":" + location_type_id + "," +
//                "\"position\":" + "{\"lat\":\"" + latitude +
//                "\",\"lng\":\"" + longitude + "\"}}"

        RequestLauncher.launchPost(
            url = mBaseUrl,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {
                onSuccess(true)
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