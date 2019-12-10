package fyi.repository

import com.squareup.sqldelight.db.SqlDriver
import com.squareup.sqldelight.drivers.ios.NativeSqliteDriver
import fyi.utils.ApplicationContext

actual fun getSqlDriver(
    applicationContext: ApplicationContext,
    schema: SqlDriver.Schema,
    dbName: String
): SqlDriver {

    return NativeSqliteDriver(schema, dbName)
}