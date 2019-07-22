package fyi.utils

import platform.Foundation.NSUserDefaults

actual class PreferenceEditor actual constructor(applicationContext: ApplicationContext) {

    private val mUserDefaults: NSUserDefaults
    private val mApplicationContext: ApplicationContext

    init {
        mUserDefaults = NSUserDefaults.standardUserDefaults
        mApplicationContext = applicationContext
    }

    actual fun getClientToken(): String {
        val clientToken = mUserDefaults.stringForKey(Keys.CLIENT_TOKEN.name)

        return if (clientToken.isNullOrBlank()) ""
        else clientToken
    }

    actual fun setClientToken(clientToken: String) {
        mUserDefaults.setObject(clientToken, Keys.CLIENT_TOKEN.name)

        println(getAppToken())
    }

    actual fun getAppToken(): String {
        val appToken = mUserDefaults.stringForKey(Keys.APP_TOKEN.name)

        return if (appToken.isNullOrBlank()) ""
        else appToken
    }

    actual fun setAppToken(appToken: String) {
        mUserDefaults.setObject(appToken, Keys.APP_TOKEN.name)
    }

    actual fun getUserToken(): String {
        val userToken = mUserDefaults.stringForKey(Keys.USER_TOKEN.name)

        return if (userToken.isNullOrBlank()) ""
        else userToken
    }

    actual fun setUserToken(userToken: String) {
        mUserDefaults.setObject(userToken, Keys.USER_TOKEN.name)
    }

    //Helper class
    private enum class Keys {
        CLIENT_TOKEN,
        USER_TOKEN,
        APP_TOKEN
    }

}