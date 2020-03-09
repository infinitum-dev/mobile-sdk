package fyi.modules.inbox

import fyi.exceptions.ErrorResponse
import fyi.exceptions.Errors
import fyi.repository.NetworkService
import fyi.repository.Repository
import fyi.repository.RequestLauncher
import fyi.utils.Args
import io.ktor.http.HttpMethod
import io.ktor.util.InternalAPI
import kotlinx.serialization.ImplicitReflectionSerializer


data class Inbox(
    private var mBaseUrl: String,
    private val mNetworkService: NetworkService,
    val mRepository: Repository
) {

    @InternalAPI
    @ImplicitReflectionSerializer
    fun message(
        body: String,
        sender_id: Int,
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

        val body = Args.createMapAny(
            Pair("body", body),
            Pair("sender_id", sender_id),
            Pair("require_answer", require_answer),
            Pair("message_type", message_type),
            Pair("to", to),
            Pair("attachments", attachments),
            Pair("subject", subject),
            Pair("groups", groups)
        )

//        val content = "{\"body\":\"" + body + "\"," +
//                "\"sender_id\":" + send_id + "," +
//                "\"require_answer\":" + require_answer.toString() + "," +
//                "\"message_type\":\"" + message_type + "\"," +
//                "\"to\":" + to + "," +
//                "\"attachments\":" + attachments + "," +
//                "\"subject\":\"" + subject + "\"," +
//                "\"groups\":" + groups + "}"

        val url = mBaseUrl.plus("/messages")
        val header = Args.createAuthorizationHeader(accessToken)

        RequestLauncher.launchPost(
            url = url,
            headerParameters = header,
            bodyParameters = body,
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