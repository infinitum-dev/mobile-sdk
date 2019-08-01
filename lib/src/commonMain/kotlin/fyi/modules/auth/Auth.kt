package fyi.modules.auth

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.auth.models.PhotoOptionalParameters
import fyi.modules.auth.models.PhotoResponse
import fyi.modules.auth.models.PhotoResponseDto
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.repository.auth_requests.AuthRequestManager
import fyi.utils.Args
import infinitum.Auth_request
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

        val authToken = mRepository.getAccessToken()
        val appToken = mRepository.getAppToken()
        val photoOptionalParameters = optionalParametersBuilder.build()

        if (!Args.checkForContent(authToken, appToken, photoB64, photoOptionalParameters)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        if (mRepository.isConnected()) {
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
        }else {
            if (mRepository.isOfflineModeEnabled()) {
                println("enabled")
                AuthRequestManager.storeNewAuthenticationRequest(photoB64, optionalParametersBuilder, mRepository)
                onFailure(Errors.REQUEST_SAVED.error)
            }else {
                println("disabled")
                onFailure(Errors.NETWORK_ERROR.error)
            }
        }
    }

    internal fun photo(
        baseUrl: String,
        authRequest: Auth_request,
        authToken: String,
        appToken: String,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit) {
        if (mRepository.isConnected()) {
            val deviceIdentity = mRepository.getDeviceId()

            //Url is needed to make sure it uses the right domain of the saved photo request
            val url = baseUrl.plus("auth/biometrid")

            val body = Args.createMapOptionalParameters(
                Pair("photo64", authRequest.image),
                Pair("device_identity", deviceIdentity)
            )

            val optionalParametersBuilder = PhotoOptionalParameters.Builder()

            optionalParametersBuilder.
                    setPosition(authRequest.position!!).
                    setAction(authRequest.action!!).
                    setData(authRequest.data!!).
                    setProximity(authRequest.proximity!!)

            body.putAll(optionalParametersBuilder.build().toMap())

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
                onSuccess = {
                    onSuccess
                },
                onFailure = onFailure
            )
        }
    }

    internal fun setUrl(url: String) {
        if (mBaseUrl != url) {
            mBaseUrl = url
        }
    }


}