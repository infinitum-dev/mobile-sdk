package fyi.modules.deviceposition.models

import kotlinx.serialization.Serializable

@Serializable
data class DevicePosition(
    val id: Int,
    val device_id: Int,
    val lat: String,
    val lng: String
)