package fyi.utils

expect class PreferenceEditor(applicationContext: ApplicationContext) {

    fun getClientToken(): String
    fun setClientToken(clientToken: String)

    fun getAppToken(): String
    fun setAppToken(appToken: String)

    fun getUserToken(): String
    fun setUserToken(userToken: String)
}