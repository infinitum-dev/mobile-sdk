package fyi.modules.entity.models

import kotlinx.serialization.Serializable

/**
 * Class that represents an Entity response from the server.
 *
 * @property id Entity id.
 * @property name Entity name.
 */
@Serializable
data class EntityResponse(
    val id: Int = 0,
    val name: String? = ""
)

/**
 * Class that represents a Project response from the server.
 *
 * @property id Project id.
 * @property name Project name.
 * @property entity_id Entity id.
 */
@Serializable
data class ProjectResponse(
    val id: Int = 0,
    val entity_id: Int = 0,
    val name: String? = ""
)