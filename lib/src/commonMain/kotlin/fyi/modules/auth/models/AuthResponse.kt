package fyi.modules.auth.models

import kotlinx.serialization.Serializable

@Serializable
internal data class AuthResponseDTO(
    val token: String,
    val name: String,
    val email: String
)

@Serializable
data class AuthResponse(
    val name: String,
    val email: String
)
