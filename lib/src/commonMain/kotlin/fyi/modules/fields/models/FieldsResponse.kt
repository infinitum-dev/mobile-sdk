package fyi.modules.fields.models

import kotlinx.serialization.Serializable

/**
 * Class that represents a Field response from the server.
 *
 * @property id Field id.
 * @property name Field name.
 * @property alias Field alias.
 * @property type Field type.
 * @property required 1 if field is required or 0 if not.
 * @property options Field extra [Options].
 * @property orderfield index of Field order.
 * @property values list of Field [Values].
 */
@Serializable
data class FieldResponse(
    var id: Int? = 0,
    var name: String? = null,
    var alias: String? = null,
    var type: String? = null,
    var required: Int? = 0,
    var options: Options? = null,
    var orderfield: Int? = 0,
    var values: List<Values>? = null
)

/**
 * Class that represents extra Options of Field.
 *
 * @property length max length a Field has.
 */
@Serializable
data class Options(
    val length: Int? = 0
)

/**
 * Class that represents extra Value of Field.
 *
 * @property id Value id.
 * @property field_id Field id associated to Value.
 * @property value Value to show.
 */
@Serializable
data class Values(
    var id: Int? = 0,
    val field_id: Int? = 0,
    val value: String? = null
)