package fyi.modules.auth

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.auth.models.BiometricAuthOptionalParameters
import fyi.modules.auth.models.AuthResponse
import fyi.modules.auth.models.AuthResponseDTO
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
    private val mRepository: Repository
) {

    fun authenticate(
        email: String,
        password: String,
        onSuccess: (AuthResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, email, password)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("email", email),
            Pair("password", password)
        )

        val url = mBaseUrl.plus("/login")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = { response ->
                val authResponse = Json.nonstrict.parse(AuthResponseDTO.serializer(), response as String)
                mRepository.setUserToken(authResponse.token)
                onSuccess((AuthResponse(authResponse.name, authResponse.email)))
            },
            onFailure = onFailure
        )
    }

    fun faceAuthentication(
        photoB64: String,
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit,
        optionalParametersBuilder: BiometricAuthOptionalParameters.Builder
    ) {

        val authToken = mRepository.getAccessToken()
        val appToken = mRepository.getAppToken()
        val photoOptionalParameters = optionalParametersBuilder.build()

        if (!Args.checkForContent(authToken, appToken, photoB64, photoOptionalParameters)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        if (mRepository.isConnected()) {
            val url = mBaseUrl.plus("/face")

            val body = Args.createMapOptionalParameters(
                Pair("photo64", photoB64)
            )

            body.putAll(photoOptionalParameters.toMap())

            val header = Args.createAuthorizationHeader(authToken)

            RequestLauncher.launch(
                url = url,
                headerParameters = header,
                bodyParameters = body,
                method = HttpMethod.Post,
                networkService = mNetworkService,
                onSuccess = { response ->
                    val authResponse = Json.nonstrict.parse(AuthResponseDTO.serializer(), response as String)
                    mRepository.setUserToken(authResponse.token)
                    onSuccess(response)
                },
                onFailure = onFailure
            )
        } else {
            if (mRepository.isOfflineModeEnabled()) {
                AuthRequestManager.storeNewAuthenticationRequest(photoB64, optionalParametersBuilder, mRepository)
                onFailure(Errors.REQUEST_SAVED.error)
            } else {
                onFailure(Errors.NETWORK_ERROR.error)
            }
        }
    }


    fun biometricAuthentication(
        photoB64: String,
//        onSuccess: (AuthResponse) -> Unit,
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit,
        optionalParametersBuilder: BiometricAuthOptionalParameters.Builder
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

            val url = mBaseUrl.plus("/biometric")

            val body = Args.createMapOptionalParameters(
                Pair("photo64", photoB64),
                Pair("device_identity", deviceIdentity)
            )

            body.putAll(photoOptionalParameters.toMap())

            val header = Args.createAuthorizationHeader(authToken)

            RequestLauncher.launch(
                url = url,
                headerParameters = header,
                bodyParameters = body,
                method = HttpMethod.Post,
                networkService = mNetworkService,
                onSuccess = { response ->
                    val authResponse = Json.nonstrict.parse(AuthResponseDTO.serializer(), response as String)
                    mRepository.setUserToken(authResponse.token)
//                    onSuccess((AuthResponse(authResponse.name, authResponse.email)))
                    onSuccess(response)
                },
                onFailure = onFailure
            )
        } else {
            if (mRepository.isOfflineModeEnabled()) {
                AuthRequestManager.storeNewAuthenticationRequest(photoB64, optionalParametersBuilder, mRepository)
                onFailure(Errors.REQUEST_SAVED.error)
            } else {
                onFailure(Errors.NETWORK_ERROR.error)
            }
        }
    }

    internal fun biometricAuthentication(
        baseUrl: String,
        authRequest: Auth_request,
        authToken: String,
        appToken: String,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        if (mRepository.isConnected()) {
            val deviceIdentity = mRepository.getDeviceId()

            //Url is needed to make sure it uses the right domain of the saved photo request
            val url = baseUrl.plus("auth/biometric")

            val body = Args.createMapOptionalParameters(
                Pair("photo64", authRequest.image),
                Pair("device_identity", deviceIdentity)
            )

            val optionalParametersBuilder = BiometricAuthOptionalParameters.Builder()

            optionalParametersBuilder.setPosition(authRequest.position!!).setAction(authRequest.action!!)
                .setData(authRequest.data!!).setProximity(authRequest.proximity!!).setDate(authRequest.date)

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