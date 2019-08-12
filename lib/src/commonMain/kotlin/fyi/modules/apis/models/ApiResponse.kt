package fyi.modules.apis.models

import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonElement

@Serializable
data class ApiResponse(
    val id: Int = -1,
    val name: String = "",
    val alias: String = "",
    val data: JsonElement?,
    val api_type_id: Int,
    val state_id: Int
)