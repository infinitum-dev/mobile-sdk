package fyi.modules.apis.models

import fyi.utils.Args
import fyi.utils.OptionalParameters

data class ApiOptionalParameters(
    val mBuilder: Builder
): OptionalParameters {

    override fun toMap(): MutableMap<String, String> {
        return Args.createMap(
            Pair("name", mBuilder.mName),
            Pair("api_type_id", if (mBuilder.mApiTypeId == -1) "" else mBuilder.mApiTypeId.toString()),
            Pair("data", mBuilder.mData)
        )
    }


    class Builder() {
        var mName = ""
        var mApiTypeId = -1
        var mData = ""

        fun setName(name: String): Builder {
            mName = name
            return this
        }

        fun setApiType(apiTypeId: Int): Builder {
            mApiTypeId = apiTypeId
            return this
        }

        fun setData(data: String): Builder {
            mData = data
            return this
        }

        internal fun build(): ApiOptionalParameters {
            return ApiOptionalParameters(this)
        }
    }
}