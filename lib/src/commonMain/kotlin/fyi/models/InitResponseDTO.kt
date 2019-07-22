package fyi.models

import kotlinx.serialization.Serializable


@Serializable
data class InitResponseDTO(
    val access_token: String,
    val config: Config
)

@Serializable
data class InitResponse(
    val config: Config
)

@Serializable
data class Config(
    val country: String = "",
    val background: String = "",
    val logo: String = "",
    val text_color: String = "",
    val button_color: String = "",
    val button_text_color: String = "",
    val pincode: String = "",
    val offline: Int = -1
)