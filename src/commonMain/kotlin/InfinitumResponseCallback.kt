package pt.fyi

import pt.fyi.exceptions.ErrorResponse

interface InfinitumResponseCallback {
    fun onSuccess(response: String)
    fun onFailure(error: ErrorResponse)
}