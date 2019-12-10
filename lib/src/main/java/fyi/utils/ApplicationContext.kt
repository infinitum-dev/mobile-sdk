package fyi.utils

import android.content.Context
import android.provider.Settings

actual data class ApplicationContext(val context: Context) {
    actual fun getDeviceId(): String {
        return Settings.Secure.getString(context.contentResolver, Settings.Secure.ANDROID_ID)
    }

}