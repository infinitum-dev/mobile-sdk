package fyi.repository

import com.squareup.sqldelight.android.AndroidSqliteDriver
import com.squareup.sqldelight.db.SqlDriver
import fyi.utils.ApplicationContext

actual fun getSqlDriver(
    applicationContext: ApplicationContext,
    schema: SqlDriver.Schema,
    dbName: String
): SqlDriver {
    return AndroidSqliteDriver(schema, applicationContext.context, dbName)
}