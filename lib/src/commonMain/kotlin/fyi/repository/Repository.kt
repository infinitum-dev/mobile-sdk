package fyi.repository

import com.squareup.sqldelight.db.SqlDriver
import fyi.utils.ApplicationContext
import fyi.utils.PreferenceEditor
import io.ktor.http.content.PartData
import pt.fyi.db.MyDatabase

data class Repository(private val applicationContext: ApplicationContext) {
    private val mPreferenceEditor: PreferenceEditor
    private val mSqlDriver: SqlDriver
    private val mDatabase: MyDatabase

    init {
        mPreferenceEditor = PreferenceEditor(applicationContext)
        mSqlDriver = getSqlDriver(applicationContext, MyDatabase.Schema, "infinitum.db")
        mDatabase = MyDatabase(mSqlDriver)
    }

    fun getPreferenceEditor(): PreferenceEditor {
        return mPreferenceEditor
    }

    fun getAllDb() {
        println(mDatabase.infinitumQueries.selectAll().executeAsList())
    }

    fun insertDb(number: Int, name: String) {
        mDatabase.infinitumQueries.insert(number.toLong(), name)
        getAllDb()
    }

    fun getToken(): String {
        val token = getPreferenceEditor().getUserToken()

        return if (token.isNullOrBlank()) {
            getPreferenceEditor().getClientToken()
        } else token
    }

    fun getAppToken(): String {
        return getPreferenceEditor().getAppToken()
    }


}

expect fun getSqlDriver(applicationContext: ApplicationContext, schema: SqlDriver.Schema, dbName: String): SqlDriver