package fyi.utils

object Args {

    fun checkForContent(vararg arguments: Any): Boolean {
        for (argument in arguments) {
            when (argument) {
                is String -> if (argument.isBlank()) return false

                is Int -> if (argument <= 0) return false
            }
        }
        return true
    }

    fun createMap(vararg pairs: Pair<String, String>): MutableMap<String, String> {
        val result = mutableMapOf<String, String>()

        for(pair in pairs) {
            result[pair.first] = pair.second
        }

        return result
    }

    fun createAuthorizationHeader(accessToken: String): MutableMap<String, String> {
        val result = mutableMapOf<String, String>()

        result["Authorization"] = "Bearer $accessToken"

        println("Bearer $accessToken")

        return result
    }

}