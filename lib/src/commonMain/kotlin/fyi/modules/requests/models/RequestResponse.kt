package fyi.modules.requests.models

import kotlinx.serialization.Serializable

@Serializable
data class RequestResponse(
    val id: Int = -1,
    val app: String? = "",
    val billing_id: Int? = -1,
    val user: Int = -1,
    val ip: String = "",
    val type: String = "",
    val api: String = "",
    val module: String = "",
    val location: String = "",
    val url: String = "",
    val code: Int = -1,
    val time: Float = -1.0f,
    val created_at: String = "",
    val updated_at: String = ""
)