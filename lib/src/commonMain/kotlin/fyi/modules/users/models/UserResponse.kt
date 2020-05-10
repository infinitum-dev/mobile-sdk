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
    val info: Info? = null,
    val fields: List<Field>? = null
)

@Serializable
data class Info(
    val birthdate: String? = "",
    val language: String? = "",
    val photo: String? = "",
    val data: JsonElement?
)

@Serializable
data class Field(
    val id: Int,
    val user_id: Int? = 0,
    val field_id: Int? = 0,
    val value: String? = null
)