package fyi.modules.base

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.base.models.EntityResponse
import fyi.modules.base.models.ProjectResponse
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json
import kotlinx.serialization.list

/**
 * Created by Gabriel Pereira on 03-05-2020
 */
data class Base(
    private var mBaseUrl: String,
    private val mNetworkService: NetworkService,
    private val mRepository: Repository
) {

    /**
     * Gets all the Entities in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] a list of [EntityResponse] objects.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun getAllEntities(
        onSuccess: (List<EntityResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }
        val url = mBaseUrl.plus("entities")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val entities = Json.nonstrict.parse(EntityResponse.serializer().list, response as String)
                onSuccess(entities)
            },
            onFailure = onFailure
        )
    }

    /**
     * Gets all the Projects in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] a list of [ProjectResponse] objects.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun getAllProjects(
        onSuccess: (List<ProjectResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }
        val url = mBaseUrl.plus("projects")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val projects = Json.nonstrict.parse(ProjectResponse.serializer().list, response as String)
                onSuccess(projects)
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