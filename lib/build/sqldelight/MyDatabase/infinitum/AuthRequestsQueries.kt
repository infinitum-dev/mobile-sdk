package infinitum

import com.squareup.sqldelight.Query
import com.squareup.sqldelight.Transacter
import kotlin.Any
import kotlin.Long
import kotlin.String

interface AuthRequestsQueries : Transacter {
    fun <T : Any> selectAll(mapper: (
        id: Long,
        date: String,
        image: String,
        domain: String,
        apptoken: String,
        position: String?,
        proximity: String?,
        action: String?,
        data: String?
    ) -> T): Query<T>

    fun selectAll(): Query<Auth_request>

    fun insert(
        date: String,
        image: String,
        domain: String,
        apptoken: String,
        position: String?,
        proximity: String?,
        action: String?,
        data: String?
    )

    fun deleteById(id: Long)
}
