package fyi.repository

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.utils.Dispatcher
import io.ktor.http.HttpMethod
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.serialization.ImplicitReflectionSerializer

object RequestLauncher {

    fun launch(
        url: String,
        headerParameters: MutableMap<String, String>? = null,
        bodyParameters: MutableMap<String, String>? = null,
        networkService: NetworkService,
        method: HttpMethod,
        onSuccess: (Any) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        GlobalScope.launch(Dispatcher.ApplicationDispatcher) {
            val response = networkService.request(url, headerParameters, bodyParameters, method)

            when (response) {
                is String -> onSuccess(response)

                is ErrorResponse -> {
                    println(response)
                    onFailure(response)
                }

                else -> onFailure(Errors.UNKNOWN_EXCEPTION.error)
            }
        }

    }

    @ImplicitReflectionSerializer
    fun launch(
        url: String,
        headerParameters: MutableMap<String, String>? = null,
        bodyParameters: String,
        networkService: NetworkService,
        method: HttpMethod,
        onSuccess: (Any) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        GlobalScope.launch(Dispatcher.ApplicationDispatcher) {
            val response = networkService.request(url, headerParameters, bodyParameters, method)

            when (response) {
                is String -> onSuccess(response)

                is ErrorResponse -> {
                    println(response)
                    onFailure(response)
                }

                else -> onFailure(Errors.UNKNOWN_EXCEPTION.error)
            }
        }

    }
}