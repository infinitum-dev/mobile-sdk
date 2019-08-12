package fyi.repository

import com.squareup.sqldelight.db.SqlDriver
import fyi.Infinitum
import fyi.repository.auth_requests.AuthRequestDao
import fyi.repository.auth_requests.AuthRequestDaoImpl
import fyi.utils.ApplicationContext
import fyi.utils.Keys
import fyi.utils.PreferenceEditor
import pt.fyi.db.MyDatabase

data class Repository(private val applicationContext: ApplicationContext) {
    private val mPreferenceEditor: PreferenceEditor
    private val mSqlDriver: SqlDriver
    private val mDatabase: MyDatabase
    private lateinit var mAuthRequestDao: AuthRequestDao

    init {
        mPreferenceEditor = PreferenceEditor(applicationContext)
        mSqlDriver = getSqlDriver(applicationContext, MyDatabase.Schema, "InfinitumDB.db")
        mDatabase = MyDatabase(mSqlDriver)
    }

    //SQL DB
    internal fun getAuthRequestDao(): AuthRequestDao {
        if (!::mAuthRequestDao.isInitialized) mAuthRequestDao = AuthRequestDaoImpl(mDatabase.authRequestsQueries)
        return mAuthRequestDao
    }

    //SYSTEM METHODS

    internal fun getDeviceId(): String {
        return applicationContext.getDeviceId()
    }

    //ALL PREFERENCE EDITOR METHODS
    internal fun getAccessToken(): String {
        val token = mPreferenceEditor.getString(Keys.INFINITUM_USER_TOKEN)

        return if (token.isNullOrBlank()) {
            mPreferenceEditor.getString(Keys.INFINITUM_CLIENT_TOKEN)
        } else token
    }

    internal fun setUserToken(userToken: String) {
        mPreferenceEditor.setString(Keys.INFINITUM_USER_TOKEN, userToken)
    }

    internal fun getAppToken(): String {
        return mPreferenceEditor.getString(Keys.INFINITUM_APP_TOKEN)
    }

    internal fun setAppToken(appToken: String) {
        mPreferenceEditor.setString(Keys.INFINITUM_APP_TOKEN, appToken)
    }

    internal fun setClientToken(clientToken: String) {
        mPreferenceEditor.setString(Keys.INFINITUM_CLIENT_TOKEN, clientToken)
    }

    internal fun getNode(): String {
        return mPreferenceEditor.getString(Keys.INFINITUM_NODE)
    }

    internal fun getDomain(): String {
        return mPreferenceEditor.getString(Keys.INFINITUM_DOMAIN)
    }

    internal fun setNode(node: String) {
        mPreferenceEditor.setString(Keys.INFINITUM_NODE, node)
    }

    //Save auth requests if offline
    internal fun isOfflineModeEnabled(): Boolean {
        return mPreferenceEditor.getBoolean(Keys.INFINITUM_OFFLINE)
    }

    internal fun setOfflineMode(offline: Boolean) {
        mPreferenceEditor.setBoolean(Keys.INFINITUM_OFFLINE, offline)
    }

    //Connection state of the application
    internal fun isConnected(): Boolean {
        return mPreferenceEditor.getBoolean(Keys.INFINITUM_CONNECTED)
    }

    internal fun setConnected(connected: Boolean) {
        mPreferenceEditor.setBoolean(Keys.INFINITUM_CONNECTED, connected)
    }

    internal fun setDomain(domain: String) {
        mPreferenceEditor.setString(Keys.INFINITUM_DOMAIN, domain)
    }

    //To make sure user data in the preference editor doesn't get removed
    internal fun cleanPreferenceEditor() {
        mPreferenceEditor.cleanAll(Keys.INFINITUM_NODE, Keys.INFINITUM_APP_TOKEN, Keys.INFINITUM_OFFLINE, Keys.INFINITUM_CONNECTED, Keys.INFINITUM_USER_TOKEN, Keys.INFINITUM_CLIENT_TOKEN)
    }

}

expect fun getSqlDriver(applicationContext: ApplicationContext, schema: SqlDriver.Schema, dbName: String): SqlDriver