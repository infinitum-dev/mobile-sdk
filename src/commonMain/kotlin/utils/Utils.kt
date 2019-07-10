package pt.fyi.utils

class Utils {
    companion object {

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
}