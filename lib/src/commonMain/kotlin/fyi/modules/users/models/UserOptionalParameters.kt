package fyi.modules.users.models

import fyi.utils.Args
import fyi.utils.OptionalParameters

//It's necessary to use the builder because in java it forces us to use nulls, we cant select the parameters we want.
data class UserOptionalParameters private constructor (
    private val builder: Builder) : OptionalParameters {

    private val mBirthdate: String
    private val mEmail: String
    private val mPhone: String
    private val mPhoto64: String
    private val mLanguage: String
    private val mData: String

    init {
        mBirthdate = builder.getBirthdate()
        mEmail = builder.getEmail()
        mPhone = builder.getPhone()
        mPhoto64 = builder.getPhoto()
        mLanguage = builder.getLanguage()
        mData = builder.getData()
    }

    override fun toMap(): MutableMap<String, String> {
        return Args.createMap(
            Pair("birthdate", mBirthdate),
            Pair("email", mEmail),
            Pair("phone", mPhone),
            Pair("photo64", mPhoto64),
            Pair("language", mLanguage),
            Pair("data", mData)
        )
    }


    class Builder {
        var mBirthdate: String
        var mEmail: String
        var mPhone: String
        var mPhoto64: String
        var mLanguage: String
        var mData: String

        init {
            mBirthdate = ""
            mEmail = ""
            mPhone = ""
            mPhoto64 = ""
            mLanguage = ""
            mData = ""
        }

        fun setBirthdate(birthdate: String): Builder {
            mBirthdate = birthdate
            return this
        }

        fun setEmail(email: String): Builder {
            mEmail = email
            return this
        }

        fun setPhone(phone: String): Builder {
            mPhone = phone
            return this
        }

        fun setPhoto(photo: String): Builder {
            mPhoto64 = photo
            return this
        }

        fun setLanguage(language: String): Builder {
            mLanguage = language
            return this
        }

        fun setData(data: String): Builder {
            mData = data
            return this
        }


        fun build(): UserOptionalParameters {
            return UserOptionalParameters(
                this
            )
        }

        internal fun getBirthdate(): String {
            return mBirthdate
        }

        internal fun getEmail(): String {
            return mEmail
        }

        internal fun getPhone(): String {
            return mPhone
        }

        internal fun getPhoto(): String {
            return mPhoto64
        }

        internal fun getLanguage(): String {
            return mLanguage
        }

        internal fun getData(): String {
            return mData
        }
    }

}