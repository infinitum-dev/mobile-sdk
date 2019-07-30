package fyi.modules.auth

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.auth.models.PhotoOptionalParameters
import fyi.modules.auth.models.PhotoResponse
import fyi.modules.auth.models.PhotoResponseDto
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json

class Auth(
    private var mBaseUrl: String,
    private val mNetworkService: NetworkService,
    private val mRepository: Repository){


    fun photo(
        photoB64: String,
        onSuccess: (PhotoResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit,
        optionalParametersBuilder: PhotoOptionalParameters.Builder
    ) {

        val authToken = mRepository.getToken()
        val appToken = mRepository.getAppToken()
        val photoOptionalParameters = optionalParametersBuilder.build()

        if (!Args.checkForContent(authToken, appToken, photoB64, photoOptionalParameters)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val deviceIdentity = mRepository.getDeviceId()

        val url = mBaseUrl.plus("/biometrid")

        val body = Args.createMapOptionalParameters(
            Pair("photo64", photoB64),
            Pair("device_identity", deviceIdentity)
        )

        body.putAll(photoOptionalParameters.toMap())

        val header = Args.createMap(
            Pair("authorization", "Bearer $authToken"),
            Pair("AppToken", appToken)
        )

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {response ->
                val photoResponse = Json.nonstrict.parse(PhotoResponseDto.serializer(), response as String)
                mRepository.setUserToken(photoResponse.token)
                onSuccess((PhotoResponse(photoResponse.name, photoResponse.email)))
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