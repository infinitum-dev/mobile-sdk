package fyi.utils

//Helper class
enum class Keys {
    INFINITUM_CLIENT_TOKEN,
    INFINITUM_USER_TOKEN,
    INFINITUM_APP_TOKEN,
    INFINITUM_NODE,
    INFINITUM_OFFLINE,
    INFINITUM_CONNECTED,
    INFINITUM_DOMAIN
}

expect class PreferenceEditor(applicationContext: ApplicationContext) {

    internal fun getString(key: Keys): String
    internal fun setString(key: Keys, string: String)

    internal fun getBoolean(key: Keys): Boolean
    internal fun setBoolean(key: Keys, boolean: Boolean)

    internal fun cleanAll(vararg keys: Keys)
}