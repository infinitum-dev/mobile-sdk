package fyi.modules.deviceinput

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.deviceinput.models.DeviceInputOptionalParameters
import fyi.modules.deviceinput.models.DeviceInputResponse
import fyi.modules.deviceinput.models.UpdateDeviceInputOptionalParameters
import fyi.modules.deviceposition.models.DevicePositionResponse
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.ContentType.Application.Json
import io.ktor.http.HttpMethod
import kotlinx.serialization.list

data class DeviceInput(private var mBaseUrl: String, private val mNetworkService: NetworkService, val mRepository: Repository) {


    //CREATE
    fun newDeviceInput(
        deviceId: Int,
        deviceTypeId: Int,
        builder: DeviceInputOptionalParameters.Builder,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceId, deviceTypeId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("device_id", deviceId.toString()),
            Pair("device_type_id", deviceTypeId.toString())
        )

        body.putAll(builder.build().toMap())

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
    fun deleteDeviceInput(
        deviceInputId: Int,
        onSuccess: () -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceInputId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val url = mBaseUrl.plus("/$deviceInputId")

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
    fun getDeviceInputById(
        deviceInputId: Int,
        onSuccess: (DeviceInputResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceInputId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$deviceInputId")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val deviceInput = kotlinx.serialization.json.Json.nonstrict.parse(DeviceInputResponse.serializer(), response as String)
                onSuccess(deviceInput)
            },
            onFailure = onFailure
        )
    }

    fun getDeviceInputsByDeviceId(
        deviceId: Int,
        onSuccess: (List<DeviceInputResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.replace("inputs", "$deviceId/inputs")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val deviceInputList = kotlinx.serialization.json.Json.nonstrict.parse(DeviceInputResponse.serializer().list, response as String)
                onSuccess(deviceInputList)
            },
            onFailure = onFailure
        )
    }

    fun getDeviceInputsByDeviceTypeId(
        deviceTypeId: Int,
        onSuccess: (List<DeviceInputResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceTypeId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/type/$deviceTypeId")

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val deviceInputList = kotlinx.serialization.json.Json.nonstrict.parse(DeviceInputResponse.serializer().list, response as String)
                onSuccess(deviceInputList)
            },
            onFailure = onFailure
        )
    }

    fun getAllDeviceInputs(
        onSuccess: (List<DeviceInputResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_TOKEN.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val deviceInputList = kotlinx.serialization.json.Json.nonstrict.parse(DeviceInputResponse.serializer().list, response as String)
                onSuccess(deviceInputList)
            },
            onFailure = onFailure
        )
    }

    fun updateDeviceInput(
        deviceInputId: Int,
        builder: UpdateDeviceInputOptionalParameters.Builder,
        onSuccess: (DeviceInputResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken, deviceInputId)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val url = mBaseUrl.plus("/$deviceInputId")

        val header = Args.createAuthorizationHeader(accessToken)

        val body = builder.build().toMap()

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Put,
            networkService = mNetworkService,
            onSuccess = {
                val deviceInput = kotlinx.serialization.json.Json.nonstrict.parse(DeviceInputResponse.serializer(), it as String)
                onSuccess(deviceInput)
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