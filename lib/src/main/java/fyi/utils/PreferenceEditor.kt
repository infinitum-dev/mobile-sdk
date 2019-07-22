package fyi.utils

import android.content.Context
import android.content.SharedPreferences

actual class PreferenceEditor actual constructor(applicationContext: ApplicationContext) {

    private val SHARED_PREFERENCES_NAME = "InfinitumPreferences"

    private val mApplicationContext: ApplicationContext
    private val mSharedPreferences: SharedPreferences
    private val mEditor: SharedPreferences.Editor

    init {
        mApplicationContext = applicationContext
        mSharedPreferences = mApplicationContext.context.getSharedPreferences(SHARED_PREFERENCES_NAME, Context.MODE_PRIVATE)
        mEditor = mSharedPreferences.edit()
    }

    actual fun getClientToken(): String {
        return mSharedPreferences.getString(Keys.CLIENT_TOKEN.name, "")
    }

    actual fun setClientToken(clientToken: String) {
        mEditor.putString(Keys.CLIENT_TOKEN.name, clientToken)
        mEditor.commit()
    }

    actual fun getAppToken(): String {
        return mSharedPreferences.getString(Keys.APP_TOKEN.name, "")
    }

    actual fun setAppToken(appToken: String) {
        mEditor.putString(Keys.APP_TOKEN.name, appToken)
        mEditor.commit()
    }

    actual fun getUserToken(): String {
        return mSharedPreferences.getString(Keys.USER_TOKEN.name, "")
    }

    actual fun setUserToken(userToken: String) {
        mEditor.putString(Keys.USER_TOKEN.name, userToken)
        mEditor.commit()
    }

    //Helper class
    private enum class Keys {
        USER_TOKEN,
        CLIENT_TOKEN,
        APP_TOKEN
    }
}