package fyi.modules.deviceinput.models

import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonElement

@Serializable
data class DeviceInputResponse(
    val id: Int = -1,
    val device_id: Int = -1,
    val device_type_id: Int = -1,
    val name: String? = "",
    val value: String? = "",
    val action: String? = "",
    val data: JsonElement?
)