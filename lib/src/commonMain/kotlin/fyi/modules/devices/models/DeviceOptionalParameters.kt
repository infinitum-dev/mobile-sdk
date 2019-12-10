package fyi.modules.devices.models

import fyi.utils.Args
import fyi.utils.OptionalParameters

data class DeviceOptionalParameters private constructor(
    val mBuilder: Builder
): OptionalParameters{

    override fun toMap(): MutableMap<String, String> {
        return Args.createMap(
            Pair("ip", mBuilder.mIp),
            Pair("mac_address", mBuilder.mMacAddress),
            Pair("device_type", mBuilder.mDeviceType),
            Pair("app_version", mBuilder.mAppVersion),
            Pair("licensed", if (mBuilder.mLicensed) "1" else "0"),
            Pair("data", mBuilder.mData),
            Pair("users", mBuilder.mUsers),
            Pair("locations", mBuilder.mLocations)
        )
    }


    class Builder() {
        var mIp = ""
        var mMacAddress = ""
        var mDeviceType = ""
        var mAppVersion = ""
        var mLicensed = false
        var mData = ""
        var mUsers = ""
        var mLocations = ""

        fun setIp(ip: String): Builder {
            mIp = ip
            return this
        }

        fun setMacAddress(macAddress: String): Builder {
            mMacAddress = macAddress
            return this
        }

        fun setDeviceType(deviceType: String): Builder {
            mDeviceType = deviceType
            return this
        }

        fun setAppVersion(appVersion: String): Builder {
            mAppVersion = appVersion
            return this
        }

        fun setLicensed(licensed: Boolean): Builder {
            mLicensed = licensed
            return this
        }

        fun setData(data: String): Builder {
            mData = data
            return this
        }

        fun setUsers(users: String): Builder {
            mUsers = users
            return this
        }

        fun setLocations(locations: String): Builder {
            mLocations = locations
            return this
        }

        internal fun build(): DeviceOptionalParameters {
            return DeviceOptionalParameters(this)
        }
    }
}