package fyi.utils

@Target(AnnotationTarget.FUNCTION, AnnotationTarget.CONSTRUCTOR) annotation class Throws
object Args {

    var identity = ""

    internal fun checkForContent(vararg arguments: Any): Boolean {
        for (argument in arguments) {
            when (argument) {
                is String -> {
                    if (argument.isBlank()) return false
                }

                is Int -> {
                    if (argument <= 0) return false
                }

                is Pair<*, *> -> {
                    if ((argument.second as String).isBlank()) return false
                }

                is MutableList<*> -> {
                    argument.forEach {
                        if ((it as String).isBlank()) return false
                    }
                }

                is OptionalParameters -> {

                }
            }
        }
        return true
    }

    //Will only add the pairs if the value is not null to not clutter the request with useless data
    internal fun createMap(vararg pairs: Pair<String, String>): MutableMap<String, String> {
        val result = mutableMapOf<String, String>()

        for (pair in pairs) {
            result[pair.first] = pair.second
        }

        return result
    }

    internal fun createMapAny(vararg pairs: Pair<String, Any>): MutableMap<String, Any> {
        val result = mutableMapOf<String, Any>()

        for (pair in pairs) {
            result[pair.first] = pair.second
        }

        return result
    }

    //Will add to the map the array
    internal fun createMap(key: String, list: MutableList<String>): MutableMap<String, String> {
        val result = mutableMapOf<String, String>()

        if (list.isNotEmpty()) {
            var i = 0
            list.forEach {
                if (it.isNotBlank()) {
                    result["$key[$i]"] = it
                    i += 1
                }
            }
        }

        return result
    }

    internal fun createMapOptionalParameters(vararg pairs: Pair<Any, String>): MutableMap<String, String> {
        val result = mutableMapOf<String, String>()

        for (pair in pairs) {
            when (pair.first) {
                is Enum<*> -> result[pair.first.toString().toLowerCase()] = pair.second

                is String -> result[pair.first.toString()] = pair.second
            }
        }

        return result
    }

    internal fun createAuthorizationHeader(accessToken: String): MutableMap<String, String> {
        val result = mutableMapOf<String, String>()

        result["Authorization"] = "Bearer $accessToken"
        if (identity.isNotEmpty()) {
            result["identity"] = identity
        }

        return result
    }

    fun createPositionJson(latitude: Float, longitude: Float): String {
        return """{"lat":$latitude,"lng":$longitude}"""
    }

}