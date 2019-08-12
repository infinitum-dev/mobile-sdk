package fyi.modules.deviceposition

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.deviceposition.models.DevicePositionResponse
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json
import kotlinx.serialization.list

data class DevicePosition (
    private var mBaseUrl: String,
    private val mNetworkService: NetworkService,
    private val mRepository: Repository
) {

    fun getAllDevicePositions(
        onSuccess: (List<DevicePositionResponse>) -> Unit,
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
            onSuccess = {response ->
                val devicePositions = Json.nonstrict.parse(DevicePositionResponse.serializer().list,
                    response as String)
                onSuccess(devicePositions)
            },
            onFailure = onFailure
        )

    }

    //Will use the current device identity to associate the location
    fun newDevicePosition(
        latitude: String,
        longitude: String,
        onSuccess: (Boolean) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        val deviceIdentity = mRepository.getDeviceId()

        if (!Args.checkForContent(accessToken, deviceIdentity, latitude, longitude)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("device_identity", deviceIdentity),
            Pair("lat", latitude),
            Pair("lng", longitude)
        )

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

    fun newDevicePosition(
        deviceId: Int,
        latitude: String,
        longitude: String,
        onSuccess: (Boolean) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceId, latitude, longitude)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("device_id", deviceId.toString()),
            Pair("lat", latitude),
            Pair("lng", longitude)
        )

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

    fun deleteDevicePosition(
        devicePositionId: Int,
        onSuccess: (Boolean) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, devicePositionId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$devicePositionId")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Delete,
            networkService = mNetworkService,
            onSuccess = {
                onSuccess(true)
            },
            onFailure = onFailure
        )
    }

    fun getDevicePositionById(
        devicePositionId: Int,
        onSuccess: (DevicePositionResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, devicePositionId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$devicePositionId")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val devicePosition = Json.nonstrict.parse(DevicePositionResponse.serializer(), response as String)
                onSuccess(devicePosition)
            },
            onFailure = onFailure
        )
    }

    fun getDevicePositionsByDeviceId(
        deviceId: Int,
        onSuccess: (List<DevicePositionResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.replace("positions", "$deviceId/positions")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val devicePosition = Json.nonstrict.parse(DevicePositionResponse.serializer().list, response as String)
                onSuccess(devicePosition)
            },
            onFailure = onFailure
        )
    }

    fun updateDevicePosition(
        devicePositionId: Int,
        deviceId: Int,
        latitude: String,
        longitude: String,
        onSuccess: (DevicePositionResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(devicePositionId, accessToken, deviceId, latitude, longitude)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("device_id", deviceId.toString()),
            Pair("lat", latitude),
            Pair("lng", longitude)
        )

        val url = mBaseUrl.plus("/$devicePositionId")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Put,
            networkService = mNetworkService,
            onSuccess = {response ->
                val devicePosition = Json.nonstrict.parse(DevicePositionResponse.serializer(), response as String)
                onSuccess(devicePosition)
            },
            onFailure = onFailure
        )
    }

    // Will use the current device identity to associate the location
    fun updateDevicePosition(
        devicePositionId: Int,
        latitude: String,
        longitude: String,
        onSuccess: (DevicePositionResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        val deviceIdentity = mRepository.getDeviceId()

        if (!Args.checkForContent(devicePositionId, accessToken, deviceIdentity, latitude, longitude)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("device_identity", deviceIdentity),
            Pair("lat", latitude),
            Pair("lng", longitude)
        )

        val url = mBaseUrl.plus("/$devicePositionId")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Put,
            networkService = mNetworkService,
            onSuccess = {response ->
                val devicePosition = Json.nonstrict.parse(DevicePositionResponse.serializer(), response as String)
                onSuccess(devicePosition)
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