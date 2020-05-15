package fyi.repository

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.users.models.UserFieldParameters
import fyi.utils.Dispatcher
import io.ktor.http.HttpMethod
import io.ktor.util.InternalAPI
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.serialization.ImplicitReflectionSerializer
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.list

@Target(AnnotationTarget.FUNCTION, AnnotationTarget.CONSTRUCTOR)
annotation class Throws

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
    fun launchPut(
        url: String,
        headerParameters: MutableMap<String, String>? = null,
        bodyParameters: MutableMap<String, Any>? = null,
        networkService: NetworkService,
        onSuccess: (Any) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {
        val map: HashMap<String, String> = hashMapOf()
        bodyParameters?.forEach { (key, value) ->
            if (value is List<*> && value[0] is UserFieldParameters) {
                map[key] = Json.nonstrict.stringify(
                    UserFieldParameters.serializer().list,
                    value as List<UserFieldParameters>
                )
            } else if (value is String) {
                map[key] = value
            }
        }
        GlobalScope.launch(Dispatcher.ApplicationDispatcher) {
            val response = networkService.request(url, headerParameters, map, HttpMethod.Put)

            when (response) {
                is String -> onSuccess(response)
                is JsonObject -> onSuccess(response.toString())

                is ErrorResponse -> {
                    println(response)
                    onFailure(response)
                }

                else -> onFailure(Errors.UNKNOWN_EXCEPTION.error)
            }
        }

    }

    @InternalAPI
    fun launchPost(
        url: String,
        headerParameters: MutableMap<String, String>? = null,
        bodyParameters: MutableMap<String, Any>,
        networkService: NetworkService,
        onSuccess: (Any) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        GlobalScope.launch(Dispatcher.ApplicationDispatcher) {
            val response = networkService.post(url, headerParameters, bodyParameters)

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