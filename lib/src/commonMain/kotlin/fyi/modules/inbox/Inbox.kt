package fyi.modules.inbox

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod


data class Inbox(
    private var mBaseUrl: String,
    private val mNetworkService: NetworkService,
    val mRepository: Repository
) {

    fun message(
        body: String,
        send_id: Int,
        require_answer: Boolean,
        message_type: String,
        to: String,
        attachments: String,
        subject: String,
        groups: String,
        onSuccess: (String) -> Unit,
        onFailure: (ErrorResponse) -> Unit
    ) {

        val accessToken = mRepository.getAccessToken()

        if (!Args.checkForContent(accessToken)) {
            onFailure(Errors.INVALID_PARAMETER.error)
            return
        }

        val content = "{\"body\":\"" + body + "\"," +
                "\"sender_id\":" + send_id + "," +
                "\"require_answer\":" + require_answer.toString() + "," +
                "\"message_type\":\"" + message_type + "\"," +
                "\"to\":" + to + "," +
                "\"attachments\":" + attachments + "," +
                "\"subject\":\"" + subject + "\"," +
                "\"groups\":" + groups + "}"


        val bodyBuild = Args.createMapOptionalParameters(
            Pair("application/json; charset=utf-8", content)
        )

        val url = mBaseUrl.plus("/messages")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launch(
            url = url,
            headerParameters = header,
            bodyParameters = bodyBuild,
            method = HttpMethod.Post,
            networkService = mNetworkService,
            onSuccess = { response ->
                onSuccess(response as String)
            },
            onFailure = onFailure
        )
    }

    internal fun setUrl(url: String) {
        if (mBaseUrl != url) {
            mBaseUrl = url
        }
    }
}