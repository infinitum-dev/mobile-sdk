package fyi.modules.devices.models

import fyi.models.Config
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonElement

@Serializable
data class DeviceResponse(
    val id: Int? = -1,
    val name: String? = "",
    val ip: String? = "",
    val mac_address: String? = "",
    val identity: String? = "",
    val value: String? = "",
    val app_version: String? = "",
    val licensed: Int? = 0,
    val action: String? = "",
    val app: App?,
    val type: Type?
)

@Serializable
data class App(
    val id: Int? = -1,
    val name: String? = "",
    val token: String? = "",
    val data: JsonElement?,
    val biometric_clock: Config?
)

@Serializable
data class Type(
    val id: Int? = -1,
    val name: String? = "",
    val alias: String? = ""
)
