package fyi.models

import kotlinx.serialization.Serializable

@Serializable
data class ConfigResponse(val apps: List<App>)
@Serializable
data class App(val name: String="", val token: String="")