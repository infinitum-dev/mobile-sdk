package fyi.utils

object Args {

    internal fun checkForContent(vararg arguments: Any): Boolean {
        for (argument in arguments) {
            when (argument) {
                is String -> {
                    if (argument.isBlank()) return false
                }

                is Int -> {
                    if (argument <= 0) return false
                }

                is Pair<*,*> -> {
                    if ((argument.second as String).isBlank()) return false
                }

                is OptionalParameters -> {

                }
            }
        }
        return true
    }

    internal fun createMap(vararg pairs: Pair<String, String>): MutableMap<String, String> {
        val result = mutableMapOf<String, String>()

        for(pair in pairs) {
            result[pair.first] = pair.second
        }


        println(result)

        return result
    }

    internal fun createMapOptionalParameters(vararg pairs: Pair<Any, String>): MutableMap<String, String> {
        val result = mutableMapOf<String, String>()

        for (pair in pairs) {
            when(pair.first) {
                is Enum<*> -> result[pair.first.toString().toLowerCase()] = pair.second

                is String -> result[pair.first.toString()] = pair.second
            }
        }

        return result
    }

    internal fun createAuthorizationHeader(accessToken: String): MutableMap<String, String> {
        val result = mutableMapOf<String, String>()

        result["Authorization"] = "Bearer $accessToken"

        return result
    }

    fun createPositionJson(latitude: Float, longitude: Float): String {
        return """{"lat":$latitude,"lng":$longitude}"""
    }

}