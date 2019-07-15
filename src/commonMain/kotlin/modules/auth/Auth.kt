package pt.fyi.modules.auth

import io.ktor.http.HttpMethod
import pt.fyi.InfinitumResponseCallback
import pt.fyi.exceptions.Errors
import pt.fyi.network.NetworkService
import pt.fyi.network.RequestLauncher
import pt.fyi.utils.Args
import pt.fyi.utils.Utils

class Auth(val mBaseUrl: String, val mNetworkService: NetworkService){

    fun photo(authToken: String, appToken: String, photoB64: String, deviceIdentity: String, callback: InfinitumResponseCallback) {

        if (!Args.checkForContent(authToken, appToken, photoB64, deviceIdentity)) {
            callback.onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("biometrid")

        val body = Utils.createMap(
            Pair("photo64", photoB64),
            Pair("device_identity", deviceIdentity)
        )

        val header = Utils.createMap(
            Pair("authorization", "Bearer $authToken"),
            Pair("AppToken", appToken)
        )

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            callback = callback
        )
    }
}