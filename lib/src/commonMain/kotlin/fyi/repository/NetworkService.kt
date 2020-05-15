package fyi.repository

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.users.models.UserFieldParameters
import io.ktor.client.HttpClient
import io.ktor.client.call.receive
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.forms.FormDataContent
import io.ktor.client.request.forms.MultiPartFormDataContent
import io.ktor.client.request.forms.formData
import io.ktor.client.request.forms.submitForm
import io.ktor.client.request.request
import io.ktor.client.request.url
import io.ktor.client.response.HttpResponse
import io.ktor.client.response.readText
import io.ktor.http.ContentType
import io.ktor.http.HttpMethod
import io.ktor.http.Parameters
import io.ktor.http.content.TextContent
import io.ktor.http.isSuccess
import io.ktor.util.InternalAPI
import kotlinx.serialization.ImplicitReflectionSerializer
import kotlinx.serialization.json.Json
import kotlinx.serialization.list
import kotlinx.serialization.stringify

class NetworkService {

    suspend fun request(
        url: String,
        headerParameters: MutableMap<String, String>?,
        bodyParameters: MutableMap<String, String>?,
        httpMethod: HttpMethod
    ): Any? {

        val client: HttpClient

        try {
            client = HttpClient().config {
                expectSuccess = false
                install(JsonFeature) {
                    serializer = KotlinxSerializer().apply {
                        setMapper(ErrorResponse::class, ErrorResponse.serializer())
                    }
                }
            }
        } catch (e: Exception) {
            val error = Errors.NETWORK_ERROR.error
            error.message += " #e"
            return error
        }

        try {
            val call = client.request<HttpResponse> {
                url(url)
                method = httpMethod
                if (!headerParameters.isNullOrEmpty()) {
                    headerParameters.forEach { (key, value) ->
                        headers.append(key, value)
                    }
                }
                if (!bodyParameters.isNullOrEmpty()) {
                    if (httpMethod == HttpMethod.Put) {
                        body = FormDataContent(
                            formData = Parameters.build {
                                bodyParameters.forEach { (key, value) ->
                                    append(key, value)
                                }
                            }
                        )
                    } else {
                        body = MultiPartFormDataContent(
                            formData {
                                bodyParameters.forEach { (key, value) ->
                                    append(key, value)
                                }
                            }
                        )
                    }
                }
            }

            if (call.status.isSuccess()) return call.readText()
            else return call.receive<ErrorResponse>()

        } catch (e: Exception) {
            val error = Errors.UNKNOWN_EXCEPTION.error
            error.message += " $e"
            return error
        } finally {
            client.close()
        }
    }

    @ImplicitReflectionSerializer
    suspend fun put(
        url: String,
        headerParameters: MutableMap<String, String>?,
        bodyParameters: MutableMap<String, Any>?
    ): Any? {

        val client: HttpClient

        try {
            client = HttpClient().config {
                expectSuccess = false
                install(JsonFeature) {
                    serializer = KotlinxSerializer().apply {
                        setMapper(ErrorResponse::class, ErrorResponse.serializer())
                    }
                }
            }
        } catch (e: Exception) {
            val error = Errors.NETWORK_ERROR.error
            error.message += " #e"
            return error
        }

        try {
            val call = client.request<HttpResponse> {
                url(url)
                method = HttpMethod.Put
                if (!headerParameters.isNullOrEmpty()) {
                    headerParameters.forEach { (key, value) ->
                        headers.append(key, value)
                    }
                }
                if (!bodyParameters.isNullOrEmpty()) {
                    body = TextContent(
                        Json.nonstrict.stringify(
                            UserFieldParameters.serializer().list,
                            bodyParameters["fields"] as List<UserFieldParameters>
                        ),
                        contentType = ContentType.Application.Json
                    )
                }
            }

            return if (call.status.isSuccess()) call.readText()
            else call.receive<ErrorResponse>()

        } catch (e: Exception) {
            val error = Errors.UNKNOWN_EXCEPTION.error
            error.message += " $e"
            return error
        } finally {
            client.close()
        }
    }

    @InternalAPI
    suspend fun post(
        url: String,
        headerParameters: MutableMap<String, String>?,
        bodyParameters: MutableMap<String, Any>?
    ): Any? {

        val client: HttpClient

        try {
            client = HttpClient().config {
                expectSuccess = false
                install(JsonFeature) {
                    serializer = KotlinxSerializer(Json.nonstrict).apply {
                        setMapper(ErrorResponse::class, ErrorResponse.serializer())
                    }
                }
            }
        } catch (e: Exception) {
            val error = Errors.NETWORK_ERROR.error
            error.message += " #e"
            return error
        }

        try {
            val call = client.submitForm<HttpResponse> {
                url(url)
                if (!headerParameters.isNullOrEmpty()) {
                    headerParameters.forEach { (key, value) ->
                        headers.append(key, value)
                    }
                }
                if (!bodyParameters.isNullOrEmpty()) {
                    body = MultiPartFormDataContent(
                        formData {
                            bodyParameters.forEach { (key, value) ->
                                append(key, value)
                            }
                        }
                    )
                }
            }

            if (call.status.isSuccess()) return call.readText()
            else return call.receive<ErrorResponse>()

        } catch (e: Exception) {
            val error = Errors.UNKNOWN_EXCEPTION.error
            error.message += " $e"
            return error
        } finally {
            client.close()
        }
    }

}