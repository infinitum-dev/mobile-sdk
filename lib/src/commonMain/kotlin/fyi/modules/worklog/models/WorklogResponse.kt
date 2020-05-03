package fyi.modules.worklog.models

import fyi.modules.entity.models.EntityResponse
import fyi.modules.entity.models.ProjectResponse
import kotlinx.serialization.Serializable

/**
 * Class that represents a Task response from the server.
 *
 * @property data list of tasks.
 * @property nextPage nextPage of tasks.
 * @property prevPage previousPage of tasks.
 * @property total total tasks.
 * @property count count tasks.
 */
@Serializable
data class DataTaskResponse(
    val data: List<TaskResponse> = listOf(),
    val nextPage: String? = null,
    val prevPage: String? = null,
    val total: Int = 0,
    val count: Int = 0
)

/**
 * Class that represents a Task response from the server.
 *
 * @property id Task id.
 * @property entity_id Entity id.
 * @property project_id Project id.
 * @property description Task description.
 * @property identity Task identity.
 * @property entity Task [EntityResponse].
 * @property project Task [ProjectResponse].
 */
@Serializable
data class TaskResponse(
    val id: Int = 0,
    val entity_id: Int = 0,
    val project_id: Int = 0,
    val description: String? = "",
    val identity: String? = "",
    val entity: EntityResponse? = null,
    val project: ProjectResponse? = null
)

/**
 * Class that represents a Worklog response from the server.
 *
 * @property id Worklog id.
 * @property user_id User id.
 * @property app_id App id.
 * @property device_id Device id.
 * @property location_id Location id.
 * @property worklog_type_id Worklog type id.
 * @property action Action (start/pause/stop).
 * @property date Date of worklog.
 * @property issuer_id Issuer id.
 * @property authorized_id Authorized id.
 * @property task_id Task id.
 * @property entity_id Entity id.
 * @property project_id Project id.
 * @property task_description Task description.
 * @property active 1 if task is active, 0 if not.
 * @property worklog_type Worklog [Type].
 */
@Serializable
data class WorklogResponse(
    val id: Int = 0,
    val user_id: Int = 0,
    val app_id: Int = 0,
    val device_id: Int = 0,
    val location_id: Int = 0,
    val worklog_type_id: Int = 0,
    val action: String? = "",
    val date: String? = "",
    val issuer_id: Int = 0,
    val authorized_id: Int = 0,
    val task_id: Int = 0,
    val entity_id: Int = 0,
    val project_id: Int = 0,
    val task_description: String? = "",
    val active: Int = 0,
    val worklog_type: Type? = null
)

@Serializable
data class Type(
    val id: Int = 0,
    val name: String? = "",
    val alias: String? = ""
)