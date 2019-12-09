package pt.fyi.db

import com.squareup.sqldelight.Transacter
import com.squareup.sqldelight.db.SqlDriver
import infinitum.AuthRequestsQueries
import pt.fyi.db.lib.newInstance
import pt.fyi.db.lib.schema

interface MyDatabase : Transacter {
    val authRequestsQueries: AuthRequestsQueries

    companion object {
        val Schema: SqlDriver.Schema
            get() = MyDatabase::class.schema

        operator fun invoke(driver: SqlDriver): MyDatabase = MyDatabase::class.newInstance(driver)}
}
