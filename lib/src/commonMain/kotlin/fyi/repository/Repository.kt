package fyi.repository

import fyi.utils.ApplicationContext
import fyi.utils.Keys
import fyi.utils.PreferenceEditor

data class Repository(private val applicationContext: ApplicationContext) {
    private val mPreferenceEditor: PreferenceEditor

    init {
        mPreferenceEditor = PreferenceEditor(applicationContext)
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
        mPreferenceEditor.cleanAll(
            Keys.INFINITUM_NODE,
            Keys.INFINITUM_APP_TOKEN,
            Keys.INFINITUM_OFFLINE,
            Keys.INFINITUM_CONNECTED,
            Keys.INFINITUM_USER_TOKEN,
            Keys.INFINITUM_CLIENT_TOKEN,
            Keys.INFINITUM_DOMAIN
        )
    }

}