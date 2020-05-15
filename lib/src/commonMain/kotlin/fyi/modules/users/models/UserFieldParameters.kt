package fyi.modules.users.models

import fyi.utils.Args
import fyi.utils.OptionalParameters
import kotlinx.serialization.Serializable

@Serializable
data class UserFieldParameters(
    private var id: Int,
    private var value: String
) : OptionalParameters {

    private constructor(builder: Builder) : this(builder.getId(), builder.getValue())

    override fun toMap(): MutableMap<String, String> {
        return Args.createMap(
            Pair("id", "$id"),
            Pair("value", value)
        )
    }

    override fun toString(): String {
        return this.toMap().toString()
    }

    class Builder {
        var mId: Int
        var mValue: String

        init {
            mId = 0
            mValue = ""
        }

        fun setId(id: Int): Builder {
            mId = id
            return this
        }

        fun setValue(value: String): Builder {
            this.mValue = value
            return this
        }


        fun build(): UserFieldParameters {
            return UserFieldParameters(this)
        }

        internal fun getId(): Int {
            return mId
        }

        internal fun getValue(): String {
            return mValue
        }
    }
}