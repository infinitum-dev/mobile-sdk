package fyi.modules.deviceinput.models

import fyi.utils.Args
import fyi.utils.OptionalParameters

data class DeviceInputOptionalParameters private constructor(
    val mBuilder: Builder
): OptionalParameters {

    override fun toMap(): MutableMap<String, String> {
        return Args.createMap(
            Pair("value", mBuilder.mValue),
            Pair("data", mBuilder.mData),
            Pair("action", mBuilder.mAction),
            Pair("name", mBuilder.mName)
        )
    }

    class Builder() {
        var mValue = ""
        var mData = ""
        var mAction = ""
        var mName = ""

        fun setValue(value: String): Builder {
            mValue = value
            return this
        }

        fun setData(data: String): Builder {
            mData = data
            return this
        }

        fun setAction(action: String): Builder {
            mAction = action
            return this
        }

        fun setName(name: String): Builder {
            mName = name
            return this
        }

        fun build(): DeviceInputOptionalParameters {
            return DeviceInputOptionalParameters(this)
        }
    }
}