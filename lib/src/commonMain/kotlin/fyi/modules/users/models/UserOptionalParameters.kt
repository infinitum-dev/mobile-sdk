package fyi.modules.users.models

import fyi.utils.Args
import fyi.utils.OptionalParameters

//It's necessary to use the builder because in java it forces us to use nulls, we cant select the parameters we want.
class UserOptionalParameters private constructor (
    builder: Builder) : OptionalParameters {

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
        var birthdate: String
        var email: String
        var phone: String
        var photo64: String
        var language: String
        var data: String

        init {
            birthdate = ""
            email = ""
            phone = ""
            photo64 = ""
            language = ""
            data = ""
        }

        fun setBirthdate(birthdate: String): Builder {
            this.birthdate = birthdate
            return this
        }

        fun setEmail(email: String): Builder {
            this.email = email
            return this
        }

        fun setPhone(phone: String): Builder {
            this.phone = phone
            return this
        }

        fun setPhoto(photo: String): Builder {
            this.photo64 = photo
            return this
        }

        fun setLanguage(language: String): Builder {
            this.language = language
            return this
        }

        fun setData(data: String): Builder {
            this.data = data
            return this
        }


        fun build(): UserOptionalParameters {
            return UserOptionalParameters(
                this
            )
        }

        internal fun getBirthdate(): String {
            return birthdate
        }

        internal fun getEmail(): String {
            return email
        }

        internal fun getPhone(): String {
            return phone
        }

        internal fun getPhoto(): String {
            return photo64
        }

        internal fun getLanguage(): String {
            return language
        }

        internal fun getData(): String {
            return data
        }
    }

}