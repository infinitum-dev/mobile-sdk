package fyi.modules.auth

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.auth.models.PhotoResponse
import fyi.modules.auth.models.PhotoResponseDto
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json

class Auth(private val mBaseUrl: String, private val mNetworkService: NetworkService, private val mRepository: Repository){


    fun photo(
        photoB64: String,
        deviceIdentity: String,
        onSuccess: (PhotoResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val authToken = mRepository.getToken()
        val appToken = mRepository.getAppToken()

        if (!Args.checkForContent(authToken, appToken, photoB64, deviceIdentity)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/biometrid")

        val body = Args.createMap(
            Pair("photo64", photoB64),
            Pair("device_identity", deviceIdentity)
        )

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
                mRepository.getPreferenceEditor().setUserToken(photoResponse.token)
                onSuccess((PhotoResponse(photoResponse.name, photoResponse.email)))
            },
            onFailure = onFailure
        )
    }


}