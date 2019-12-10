package fyi.modules.roles.models

import kotlinx.serialization.Serializable

@Serializable
data class RolesResponse(
    val id: Int,
    val name: String,
    val alias: String,
    val permissions: List<String?>,
    val backoffice: Int
)