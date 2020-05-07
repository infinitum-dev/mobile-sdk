package fyi.modules.entity

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.entity.models.EntityResponse
import fyi.modules.entity.models.ProjectResponse
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
data class Entity(
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
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val entities =
                    Json.nonstrict.parse(EntityResponse.serializer().list, response as String)
                onSuccess(entities)
            },
            onFailure = onFailure
        )
    }

    /**
     * Gets a Entity by id in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] a [EntityResponse] object.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun getEntityById(
        entityId: Int,
        onSuccess: (EntityResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }
        val url = mBaseUrl.plus("/$entityId")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val entity = Json.nonstrict.parse(EntityResponse.serializer(), response as String)
                onSuccess(entity)
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
        val url = mBaseUrl.plus("/projects")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val projects =
                    Json.nonstrict.parse(ProjectResponse.serializer().list, response as String)
                onSuccess(projects)
            },
            onFailure = onFailure
        )
    }

    /**
     * Gets a Project by id in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] a [ProjectResponse] object.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun getProjectById(
        projectId: Int,
        onSuccess: (ProjectResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }
        val url = mBaseUrl.plus("/projects/$projectId")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val project = Json.nonstrict.parse(ProjectResponse.serializer(), response as String)
                onSuccess(project)
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