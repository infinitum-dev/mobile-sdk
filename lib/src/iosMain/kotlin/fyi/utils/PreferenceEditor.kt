package fyi.utils

import platform.Foundation.NSUserDefaults

actual class PreferenceEditor actual constructor(applicationContext: ApplicationContext) {

    private val mUserDefaults: NSUserDefaults
    private val mApplicationContext: ApplicationContext

    init {
        mUserDefaults = NSUserDefaults.standardUserDefaults
        mApplicationContext = applicationContext
    }

    internal actual fun getString(key: Keys): String {
        val value = mUserDefaults.stringForKey(key.name)

        return if (value.isNullOrBlank()) "" else value
    }

    internal actual fun setString(key: Keys, string: String) {
        mUserDefaults.setObject(string, key.name)
    }

    internal actual fun getBoolean(key: Keys): Boolean {
        if (key == Keys.INFINITUM_CONNECTED) return true
        return mUserDefaults.boolForKey(key.name)
    }

    internal actual fun setBoolean(key: Keys, boolean: Boolean) {
        mUserDefaults.setBool(boolean, key.name)
    }

    internal actual fun cleanAll(vararg keys: Keys) {
        keys.forEach {
            mUserDefaults.removeObjectForKey(it.name)
        }
    }

}