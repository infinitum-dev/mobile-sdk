package pt.fyi.utils

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

}