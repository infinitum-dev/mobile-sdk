package fyi.modules.requests.models

import kotlinx.serialization.Serializable

@Serializable
data class RequestCountApi(
    val api: String,
    val count: Int
)

@Serializable
data class RequestCountModule(
    val module: String,
    val count: Int
)

@Serializable
data class RequestCountCode(
    val code: Int,
    val count: Int
)

@Serializable
data class RequestCountErrors(
    val success: Int,
    val failure: Int
)
