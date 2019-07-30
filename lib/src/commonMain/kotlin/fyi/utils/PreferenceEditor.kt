package fyi.utils

//Helper class
public enum class Keys {
    CLIENT_TOKEN,
    USER_TOKEN,
    APP_TOKEN,
    NODE
}

expect class PreferenceEditor(applicationContext: ApplicationContext) {

    fun getString(key: Keys): String
    fun setString(key: Keys, string: String)
}