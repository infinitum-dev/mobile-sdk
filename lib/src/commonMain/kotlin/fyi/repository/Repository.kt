package fyi.repository

import com.squareup.sqldelight.db.SqlDriver
import fyi.utils.ApplicationContext
import fyi.utils.Keys
import fyi.utils.PreferenceEditor
import pt.fyi.db.MyDatabase

data class Repository(private val applicationContext: ApplicationContext) {
    private val mPreferenceEditor: PreferenceEditor
    private val mSqlDriver: SqlDriver
    private val mDatabase: MyDatabase

    init {
        mPreferenceEditor = PreferenceEditor(applicationContext)
        mSqlDriver = getSqlDriver(applicationContext, MyDatabase.Schema, "infinitumDB.db")
        mDatabase = MyDatabase(mSqlDriver)
    }

    //SQL DB
    fun getAllDb() {
        println(mDatabase.infinitumDBQueries.selectAll().executeAsList())
    }

    fun insertDb(number: Int, name: String) {
        mDatabase.infinitumDBQueries.insert(number.toLong(), name)
        getAllDb()
    }

    //SYSTEM METHODS

    fun getDeviceId(): String {
        return applicationContext.getDeviceId()
    }


    //ALL PREFERENCE EDITOR METHODS
    fun getToken(): String {
        val token = mPreferenceEditor.getString(Keys.USER_TOKEN)

        return if (token.isNullOrBlank()) {
            mPreferenceEditor.getString(Keys.CLIENT_TOKEN)
        } else token
    }

    fun setUserToken(userToken: String) {
        mPreferenceEditor.setString(Keys.USER_TOKEN, userToken)
    }

    fun getAppToken(): String {
        return mPreferenceEditor.getString(Keys.APP_TOKEN)
    }

    fun setAppToken(appToken: String) {
        mPreferenceEditor.setString(Keys.APP_TOKEN, appToken)
    }

    fun setClientToken(clientToken: String) {
        mPreferenceEditor.setString(Keys.CLIENT_TOKEN, clientToken)
    }

    fun getNode(): String {
        return mPreferenceEditor.getString(Keys.NODE)
    }

    fun setNode(node: String) {
        mPreferenceEditor.setString(Keys.NODE, node)
    }

}

expect fun getSqlDriver(applicationContext: ApplicationContext, schema: SqlDriver.Schema, dbName: String): SqlDriver