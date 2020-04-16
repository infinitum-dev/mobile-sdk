package fyi.modules.devices

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.devices.models.DeviceOptionalParameters
import fyi.modules.devices.models.DeviceResponse
import fyi.modules.devices.models.DeviceUser
import fyi.modules.devices.models.UpdateDeviceOptionalParameters
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json
import kotlinx.serialization.list

data class Devices(private var mBaseUrl: String, private val mNetworkService: NetworkService, val mRepository: Repository) {

    //CREATE
    fun newDeviceUser(
        builder: DeviceUser.Builder,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_TOKEN.error)
            return
        }

        val url = mBaseUrl.plus("/user")

        when (val body = builder.build().toMap()) {
            is ErrorResponse -> onFailure(body)
            is MutableMap<*, *> -> {
                val header = Args.createAuthorizationHeader(accessToken)

                RequestLauncher.launch(
                    url = url,
                    headerParameters = header,
                    bodyParameters = body as MutableMap<String, String>,
                    method = HttpMethod.Post,
                    networkService = mNetworkService,
                    onSuccess = {
                        onSuccess()
                    },
                    onFailure = onFailure
                )
            }
        }
    }

    fun newDevice(
        deviceName: String,
        appId: Int,
        identity: String,
        optionalParameters: DeviceOptionalParameters,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceName, appId, identity)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("name", deviceName),
            Pair("app_id", appId.toString()),
            Pair("identity", identity)
        )

        body.putAll(optionalParameters.toMap())

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
    fun deleteDevice(
        deviceId: Int,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/$deviceId")

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
    fun getDeviceById(
        deviceId: Int,
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$deviceId")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {response ->
                onSuccess(response as String)
            },
            onFailure = onFailure
        )
    }

    fun getDeviceByIdentity(
        deviceIdentity: String,
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceIdentity)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/identity/$deviceIdentity")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {response ->
                onSuccess(response as String)
            },
            onFailure = onFailure
        )
    }

    fun getDeviceByMacAddress(
        macAddress: String,
        onSuccess: (List<DeviceResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, macAddress)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/mac_address/$macAddress")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = {response ->
                val device = Json.nonstrict.parse(DeviceResponse.serializer().list, response as String)
                onSuccess(device)
            },
            onFailure = onFailure
        )
    }

    fun getAllDevices(
        onSuccess: (List<DeviceResponse>) -> Unit,
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
                val device = Json.nonstrict.parse(DeviceResponse.serializer().list, response as String)
                onSuccess(device)
            },
            onFailure = onFailure
        )
    }

    //UPDATE
    fun updateDevice(
        deviceId: Int,
        optionalParameters: UpdateDeviceOptionalParameters.Builder,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = optionalParameters.build().toMap()

        val url = mBaseUrl.plus("/$deviceId")

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

    //OTHER
    fun validateDeviceLicensed(
        deviceIdentity: String,
        onSuccess: (DeviceResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceIdentity)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("identity", deviceIdentity)
        )

        val url = mBaseUrl.plus("/validate")

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = {
                val device = Json.nonstrict.parse(DeviceResponse.serializer(), it as String)
                onSuccess(device)
            },
            onFailure = onFailure
        )
    }

    fun validateUserAllowed(
        deviceId: Int,
        userId: Int,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceId, userId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("device_id", deviceId.toString()),
            Pair("user_id", userId.toString())
        )

        val url = mBaseUrl.plus("/validate_user")

        RequestLauncher.launch(
            url = url,
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

    //In case this is initialized and the domain is changed
    internal fun setUrl(url: String) {
        if (mBaseUrl != url) {
            mBaseUrl = url
        }
    }
}
