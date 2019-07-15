package pt.fyi.utils

import platform.UIKit.UIDevice

actual class PlatformUtils {
    actual fun getDeviceIdentification(): String {
        return UIDevice.currentDevice().identifierForVendor()?.UUIDString ?: "Device id was null on IOS"
    }

}