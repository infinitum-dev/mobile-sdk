package fyi.modules.fields

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.fields.models.FieldResponse
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json
import kotlinx.serialization.list

/**
 * Created by Gabriel Pereira on 09-05-2020
 */
class Fields(
    private var mBaseUrl: String,
    private val mNetworkService: NetworkService,
    private val mRepository: Repository
) {


    /**
     * Gets all the Tasks data in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] a list of [FieldResponse] objects.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun getAllFields(
        onSuccess: (List<FieldResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val fields =
                    Json.nonstrict.parse(FieldResponse.serializer().list, response as String)
                onSuccess(fields)
            },
            onFailure = onFailure
        )
    }

    /**
     * Used by the SDK to set the [url] to make sure the module is using the latest domain.
     */
    internal fun setUrl(url: String) {
        if (mBaseUrl != url) {
            mBaseUrl = url
        }
    }
}