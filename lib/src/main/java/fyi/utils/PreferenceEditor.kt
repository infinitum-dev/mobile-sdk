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

    actual fun getString(key: fyi.utils.Keys): String {
        return mSharedPreferences.getString(key.name, "")
    }

    actual fun setString(key: fyi.utils.Keys, string: String) {
        mEditor.putString(key.name, string)
        mEditor.commit()
    }
}