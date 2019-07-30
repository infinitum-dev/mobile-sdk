package fyi.utils

import platform.Foundation.NSUserDefaults

actual class PreferenceEditor actual constructor(applicationContext: ApplicationContext) {

    private val mUserDefaults: NSUserDefaults
    private val mApplicationContext: ApplicationContext

    init {
        mUserDefaults = NSUserDefaults.standardUserDefaults
        mApplicationContext = applicationContext
    }

    actual fun getString(key: Keys): String {
        val value = mUserDefaults.stringForKey(key.name)

        return if (value.isNullOrBlank()) "" else value
    }

    actual fun setString(key: Keys, string: String) {
        mUserDefaults.setObject(string, key.name)
    }

}