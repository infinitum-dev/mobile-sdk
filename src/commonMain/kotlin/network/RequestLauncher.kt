package pt.fyi.network

import pt.fyi.InfinitumResponseCallback
import pt.fyi.exceptions.ErrorResponse
import pt.fyi.exceptions.Errors
import io.ktor.http.HttpMethod
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import pt.fyi.utils.Dispatcher

object RequestLauncher {

    fun launch(
        url: String,
        headerParameters: MutableMap<String, String>? = null,
        bodyParameters: MutableMap<String, String>? = null,
        networkService: NetworkService,
        method: HttpMethod,
        callback: InfinitumResponseCallback
    ) {

        GlobalScope.launch(Dispatcher.ApplicationDispatcher) {
            val response = networkService.request(url,headerParameters,bodyParameters,method)

            when (response) {
                is String -> callback.onSuccess(response)

                is ErrorResponse -> callback.onFailure(response)

                else -> callback.onFailure(Errors.UNKNOWN_EXCEPTION.error)
            }
        }

    }
}