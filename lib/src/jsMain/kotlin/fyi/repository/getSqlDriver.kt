package fyi.repository

import com.squareup.sqldelight.db.SqlDriver
import fyi.utils.ApplicationContext

actual fun getSqlDriver(
    applicationContext: ApplicationContext,
    schema: SqlDriver.Schema,
    dbName: String
): SqlDriver {
    TODO("not implemented") //To change body of created functions use File | Settings | File Templates.
}