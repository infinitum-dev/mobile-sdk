package fyi.modules.users.models

import fyi.utils.Args
import fyi.utils.OptionalParameters

data class UserFieldParameters private constructor(
    private val builder: Builder
) : OptionalParameters {

    private var mId: Int
    private var mValue: String

    init {
        mId = builder.getId()
        mValue = builder.getValue()
    }

    override fun toMap(): MutableMap<String, String> {
        return Args.createMap(
            Pair("id", "$mId"),
            Pair("value", mValue)
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
            return UserFieldParameters(
                this
            )
        }

        internal fun getId(): Int {
            return mId
        }

        internal fun getValue(): String {
            return mValue
        }
    }
}