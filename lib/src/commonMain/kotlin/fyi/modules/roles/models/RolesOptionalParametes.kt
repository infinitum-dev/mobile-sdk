package fyi.modules.roles.models

import fyi.utils.Args
import fyi.utils.OptionalParameters

data class RolesOptionalParametes private constructor(
    val mBuilder: Builder
): OptionalParameters {

    override fun toMap(): MutableMap<String, String> {
        val result = Args.createMap(
            Pair("name", mBuilder.mName),
            Pair("alias", mBuilder.mAlias)
        )
        result.putAll(Args.createMap("permissions", mBuilder.mPermissions))

        return result
    }

    class Builder() {
        var mName = ""
        var mAlias= ""
        var mPermissions = mutableListOf<String>()

        fun addName(name: String): Builder {
            mName = name
            return this
        }

        fun addAlias(alias: String): Builder {
            mAlias = alias
            return this
        }

        fun addPermission(permission: String): Builder {
            mPermissions.add(permission)
            return this
        }

        fun addPermissions(permissions: MutableList<String>) {
            mPermissions.addAll(permissions)
        }

        internal fun build(): RolesOptionalParametes {
            return RolesOptionalParametes(this)
        }
    }
}