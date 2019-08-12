package fyi.modules.users.models

import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonElement

@Serializable
data class UserResponse(
    val id: Int,
    val name: String? = "",
    val email: String = "",
    val phone: String? = "",
    val avatar: String? = "",
    val info: Info? = null
)

@Serializable
data class Info(
    val birthdate: String? = "",
    val language: String? = "",
    val photo: String? = "",
    val data: JsonElement?
)