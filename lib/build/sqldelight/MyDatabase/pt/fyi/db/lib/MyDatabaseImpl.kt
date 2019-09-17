package pt.fyi.db.lib

import com.squareup.sqldelight.Query
import com.squareup.sqldelight.TransacterImpl
import com.squareup.sqldelight.db.SqlDriver
import com.squareup.sqldelight.internal.copyOnWriteList
import infinitum.AuthRequestsQueries
import infinitum.Auth_request
import kotlin.Any
import kotlin.Int
import kotlin.Long
import kotlin.String
import kotlin.collections.MutableList
import kotlin.reflect.KClass
import pt.fyi.db.MyDatabase

internal val KClass<MyDatabase>.schema: SqlDriver.Schema
    get() = MyDatabaseImpl.Schema

internal fun KClass<MyDatabase>.newInstance(driver: SqlDriver): MyDatabase = MyDatabaseImpl(driver)

private class MyDatabaseImpl(driver: SqlDriver) : TransacterImpl(driver), MyDatabase {
    override val authRequestsQueries: AuthRequestsQueriesImpl = AuthRequestsQueriesImpl(this,
            driver)

    object Schema : SqlDriver.Schema {
        override val version: Int
            get() = 1

        override fun create(driver: SqlDriver) {
            driver.execute(null, """
                    |CREATE TABLE auth_request (
                    |	id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
                    |	date TEXT NOT NULL,
                    |	image TEXT NOT NULL,
                    |	domain TEXT NOT NULL,
                    |	apptoken TEXT NOT NULL,
                    |	position TEXT,
                    |	proximity TEXT,
                    |	action TEXT,
                    |	data TEXT
                    |)
                    """.trimMargin(), 0)
        }

        override fun migrate(
            driver: SqlDriver,
            oldVersion: Int,
            newVersion: Int
        ) {
        }
    }
}

private class AuthRequestsQueriesImpl(private val database: MyDatabaseImpl, private val driver:
        SqlDriver) : TransacterImpl(driver), AuthRequestsQueries {
    internal val selectAll: MutableList<Query<*>> = copyOnWriteList()

    override fun <T : Any> selectAll(mapper: (
        id: Long,
        date: String,
        image: String,
        domain: String,
        apptoken: String,
        position: String?,
        proximity: String?,
        action: String?,
        data: String?
    ) -> T): Query<T> = Query(-1386088326, selectAll, driver, "AuthRequests.sq", "selectAll", """
    |SELECT *
    |FROM auth_request
    """.trimMargin()) { cursor ->
        mapper(
            cursor.getLong(0)!!,
            cursor.getString(1)!!,
            cursor.getString(2)!!,
            cursor.getString(3)!!,
            cursor.getString(4)!!,
            cursor.getString(5),
            cursor.getString(6),
            cursor.getString(7),
            cursor.getString(8)
        )
    }

    override fun selectAll(): Query<Auth_request> = selectAll(Auth_request::Impl)

    override fun insert(
        date: String,
        image: String,
        domain: String,
        apptoken: String,
        position: String?,
        proximity: String?,
        action: String?,
        data: String?
    ) {
        driver.execute(-264265372, """
        |INSERT INTO auth_request (date, image, domain, apptoken, position, proximity, action, data)
        |VALUES (?1, ?2, ?3, ?4, ?5, ?6, ?7, ?8)
        """.trimMargin(), 8) {
            bindString(1, date)
            bindString(2, image)
            bindString(3, domain)
            bindString(4, apptoken)
            bindString(5, position)
            bindString(6, proximity)
            bindString(7, action)
            bindString(8, data)
        }
        notifyQueries(-264265372, {database.authRequestsQueries.selectAll})
    }

    override fun deleteById(id: Long) {
        driver.execute(-893445816, """
        |DELETE
        |FROM auth_request
        |WHERE id = ?1
        """.trimMargin(), 1) {
            bindLong(1, id)
        }
        notifyQueries(-893445816, {database.authRequestsQueries.selectAll})
    }
}
