package fyi.modules.apps.models

import kotlinx.serialization.Serializable

@Serializable
data class App(
    val id: Int,
    val name: String,
    val token: String,
    val type: Type,
    val client: Client
)

@Serializable
data class Type(
    val alias: String
)

@Serializable
data class Client(
    val id: String,
    val secret: String
)