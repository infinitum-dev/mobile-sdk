package fyi.utils

import platform.UIKit.UIDevice

actual class ApplicationContext {
    actual fun getDeviceId(): String {
        return UIDevice.currentDevice().identifierForVendor()?.UUIDString()!!
    }
}