package fyi.modules.auth.models

import kotlinx.serialization.Serializable

@Serializable
data class PhotoResponseDto(
    val token: String,
    val name: String,
    val email: String
)

@Serializable
data class PhotoResponse(
    val name: String,
    val email: String
)
