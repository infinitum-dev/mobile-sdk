package fyi.utils

actual class PreferenceEditor actual constructor(applicationContext: ApplicationContext) {
    internal actual fun getString(key: Keys): String {
        return ""
    }

    internal actual fun setString(key: Keys, string: String) {
    }

    internal actual fun getBoolean(key: Keys): Boolean {
        return true
    }

    internal actual fun setBoolean(key: Keys, boolean: Boolean) {
    }

    internal actual fun cleanAll(vararg keys: Keys) {
    }

}