package fyi.modules.requests.models

data class RequestsOptionalParameters private constructor(
    val mBuilder: Builder
) {

    fun getQuery(): String {

        var result = ""

        if (mBuilder.mStart.isBlank() && mBuilder.mEnd.isBlank()) return result
        else {
            if (mBuilder.mStart.isNotBlank()) {
                result = result.plus("?start=${mBuilder.mStart}")
                if (mBuilder.mEnd.isNotBlank()) {
                    result = result.plus("&end=${mBuilder.mEnd}")
                }
            }else {
                result = result.plus("?end=${mBuilder.mEnd}")
            }
        }

        return result
    }

    class Builder() {
        var mStart = ""
        var mEnd = ""

        fun setStart(start: String): Builder {
            mStart = start
            return this
        }

        fun setEnd(end: String): Builder {
            mEnd = end
            return this
        }

        fun build(): RequestsOptionalParameters {
            return RequestsOptionalParameters(this)
        }
    }
}