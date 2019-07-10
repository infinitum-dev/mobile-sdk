package pt.fyi.network

import io.ktor.client.*
import io.ktor.client.call.receive
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.*
import io.ktor.client.request.forms.*
import io.ktor.client.response.HttpResponse
import io.ktor.client.response.readText
import io.ktor.http.HttpMethod
import io.ktor.http.Parameters
import io.ktor.http.isSuccess
import pt.fyi.exceptions.ErrorResponse
import pt.fyi.exceptions.Errors


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
                    }else {
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
}