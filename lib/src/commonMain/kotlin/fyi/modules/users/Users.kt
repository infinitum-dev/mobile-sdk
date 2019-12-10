package fyi.modules.users

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.users.models.UserOptionalParameters
import fyi.modules.users.models.UserResponse
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json
import kotlinx.serialization.list

data class Users(private var mBaseUrl: String, private val mNetworkService: NetworkService, private val mRepository: Repository) {


    //GET
    fun getAllUsersCount(
        onSuccess: (Int) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/count")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                onSuccess(response.toString().toInt())
            },
            onFailure = onFailure
        )
    }

    fun getAllUsers(
        onSuccess: (List<UserResponse>) -> Unit,
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
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val users = Json.nonstrict.parse(UserResponse.serializer().list, response as String)
                onSuccess(users)
            },
            onFailure = onFailure
        )
    }

    fun getUserById(
        userId: Int,
        onSuccess: (UserResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, userId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$userId")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val user = Json.nonstrict.parse(UserResponse.serializer(), response as String)
                onSuccess(user)
            },
            onFailure = onFailure
        )
    }

    fun getUserByFace(
        photo: String,
        onSuccess: (UserResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, photo)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/face")

        val body = Args.createMap(
            Pair("photo64", photo)
        )

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = { response ->
                val user = Json.nonstrict.parse(UserResponse.serializer(), response as String)
                onSuccess(user)
            },
            onFailure = onFailure
        )
    }

    fun getUsersByMultipleFaces(
        photo: String,
        onSuccess: (List<UserResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        //NOT WORKING.. API NEEDS TO ALLOW RECEPTION OF PHOTO64

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, photo)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/faces")

        val body = Args.createMap(
            Pair("photo64", photo)
        )

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = { response ->
                val users = Json.nonstrict.parse(UserResponse.serializer().list, response as String)
                onSuccess(users)
            },
            onFailure = onFailure
        )
    }

    //CREATE
    fun createUser(
        name: String,
        optionalParameters: UserOptionalParameters.Builder,
        onSuccess: (Boolean) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, optionalParameters!!)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("name", name)
        )

        body.putAll(optionalParameters.build().toMap())

        RequestLauncher.launch(
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

    //DELETE
    fun deleteUser(
        userId: Int,
        onSuccess: (Boolean) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, userId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$userId")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Delete,
            networkService = mNetworkService,
            onSuccess = {
                onSuccess(true)
            },
            onFailure = onFailure
        )
    }

    //UPDATE
    fun updateUser(
        userId: Int,
        name: String,
        otherParameters: UserOptionalParameters.Builder,
        onSuccess: (UserResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, userId, name, otherParameters)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$userId")

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("name", name)
        )

        body.putAll(otherParameters.build().toMap())

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = { response ->
                val user = Json.nonstrict.parse(UserResponse.serializer(), response as String)
                onSuccess(user)
            },
            onFailure = onFailure
        )
    }


    //OTHER METHODS

    fun userLivenessRequest(
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/liveness")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {
                onSuccess()
            },
            onFailure = onFailure
        )
    }

    //ONLY B64  TO UPDATE THE RETURN.. NO IDEA WHAT'S THE RESPONSE FROM THE SERVER
    fun verifyDocuments(
        front: String,
        back: String,
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, front, back)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/document/verify")

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("front64", front),
            Pair("back64", back)
        )

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {
                onSuccess(it as String)
            },
            onFailure = onFailure
        )
    }

    fun verifyUserByPhoto(
        photo: String,
        onSuccess: (UserResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ){
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, photo)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.replace("/users","/user").plus("/biometric")

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("photo64", photo)
        )

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {response ->
                val user = Json.nonstrict.parse(UserResponse.serializer(), response as String)
                onSuccess(user)
            },
            onFailure = onFailure
        )

    }

    fun verifyUserFaceProperties(
        photo: String,
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ){
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, photo)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.replace("/users","/user").plus("/face_properties")

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("photo64", photo)
        )

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {response ->
                onSuccess(response as String)
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