package fyi.modules.worklog

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.modules.worklog.models.DataTaskResponse
import fyi.modules.worklog.models.TaskResponse
import fyi.modules.worklog.models.WorklogResponse
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import kotlinx.serialization.json.Json

/**
 * Responsible for handling all Worklog related requests.
 *
 * @property mBaseUrl Base url of the Worklog module.
 * @property mNetworkService Injected NetworkService.
 * @property mRepository Injected Repository.
 */
data class Worklog(
    private var mBaseUrl: String,
    private val mNetworkService: NetworkService,
    private val mRepository: Repository
) {

    /**
     * Gets all the Tasks data in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] [DataTaskResponse] object.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun getTasks(
        onSuccess: (DataTaskResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }
        val url = mBaseUrl.plus("/tasks")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val tasks = Json.nonstrict.parse(DataTaskResponse.serializer(), response as String)
                onSuccess(tasks)
            },
            onFailure = onFailure
        )
    }

    /**
     * Gets all the Tasks in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] a list of [TaskResponse] objects.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun getAllTasks(
        onSuccess: (List<TaskResponse>) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }
        val url = mBaseUrl.plus("/tasks")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val tasks = Json.nonstrict.parse(DataTaskResponse.serializer(), response as String)
                onSuccess(tasks.data)
            },
            onFailure = onFailure
        )
    }

    /**
     * Gets a Tasks by id in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] a [TaskResponse] object.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun getTaskById(
        taskId: Int,
        onSuccess: (TaskResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }
        val url = mBaseUrl.plus("/tasks/$taskId")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                val task = Json.nonstrict.parse(TaskResponse.serializer(), response as String)
                onSuccess(task)
            },
            onFailure = onFailure
        )
    }

    /**
     * Gets last worklog from user in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] a list of [WorklogResponse] objects.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun getLastWorklogFromUser(
        userId: Int,
        onSuccess: (WorklogResponse?) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }
        val url = mBaseUrl.plus("/user/$userId/day?last=true")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = null,
            method = HttpMethod.Get,
            networkService = mNetworkService,
            onSuccess = { response ->
                if (response == "{}") {
                    onSuccess(null)
                } else {
                    val worklog =
                        Json.nonstrict.parse(WorklogResponse.serializer(), response as String)
                    onSuccess(worklog)
                }
            },
            onFailure = onFailure
        )
    }

    /**
     * Save worklog from user in this domain.
     * Invokes [onSuccess] if the request was successful, [onFailure] otherwise.
     * The [onSuccess] a list of [WorklogResponse] objects.
     * The [onFailure] returns an [ErrorResponse] that contains information about what went wrong.
     */
    fun saveUserWorklog(
        userId: Int,
        taskId: Int,
        action: String,
        type: String,
        onSuccess: (WorklogResponse) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val header = Args.createAuthorizationHeader(accessToken)

        val body = Args.createMap(
            Pair("user_id", userId.toString()),
            Pair("task_id", taskId.toString()),
            Pair("action", action),
            Pair("worklog_type", type)
        )

        RequestLauncher.launch(
            url = mBaseUrl,
            headerParameters = header,
            bodyParameters = body,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = { response ->
                val worklog = Json.nonstrict.parse(WorklogResponse.serializer(), response as String)
                onSuccess(worklog)
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