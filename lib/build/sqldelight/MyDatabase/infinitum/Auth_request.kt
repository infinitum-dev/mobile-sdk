package infinitum

import kotlin.Long
import kotlin.String

interface Auth_request {
    val id: Long

    val date: String

    val image: String

    val domain: String

    val apptoken: String

    val position: String?

    val proximity: String?

    val action: String?

    val data: String?

    data class Impl(
        override val id: Long,
        override val date: String,
        override val image: String,
        override val domain: String,
        override val apptoken: String,
        override val position: String?,
        override val proximity: String?,
        override val action: String?,
        override val data: String?
    ) : Auth_request {
        override fun toString(): String = """
        |Auth_request.Impl [
        |  id: $id
        |  date: $date
        |  image: $image
        |  domain: $domain
        |  apptoken: $apptoken
        |  position: $position
        |  proximity: $proximity
        |  action: $action
        |  data: $data
        |]
        """.trimMargin()
    }
}
