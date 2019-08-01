package fyi.modules.auth.models

import fyi.utils.Args
import fyi.utils.OptionalParameters


//It's necessary to use the builder because in java it forces us to use nulls, we cant select the parameters we want.
class PhotoOptionalParameters private constructor (
    builder: Builder) : OptionalParameters{

    private val mPosition: String
    private val mProximity: String
    private val mAction: String
    private val mData: String

    init {
        mPosition = builder.getPosition()
        mProximity = builder.getProximity()
        mAction = builder.getAction()
        mData = builder.getData()
    }

    override fun toMap(): MutableMap<String, String> {
        return Args.createMap(
            Pair("position", mPosition),
            Pair("proximity", mProximity),
            Pair("action", mAction),
            Pair("data", mData)
        )
    }


    class Builder {
        var position: String
        var proximity: String
        var action: String
        var data: String

        init {
            position = ""
            proximity = ""
            action = ""
            data = ""
        }

        fun setPosition(latitude: Float, longitude: Float): Builder {
            this.position = Args.createPositionJson(latitude, longitude)
            return this
        }

        fun setProximity(proximity: String): Builder {
            this.proximity = proximity
            return this
        }

        fun setAction(action: String): Builder {
            this.action = action
            return this
        }

        fun setData(data: String): Builder {
            this.data = data
            return this
        }

        internal fun setPosition(position: String): Builder {
            this.position = position
            return this
        }

        fun build(): PhotoOptionalParameters {
            return PhotoOptionalParameters(
                this
            )
        }

        internal fun getPosition(): String {
            return position
        }

        internal fun getProximity(): String {
            return proximity
        }

        internal fun getAction(): String {
            return action
        }

        internal fun getData(): String {
            return data
        }
    }

}