package fyi.repository.auth_requests

import fyi.Infinitum
import fyi.modules.auth.models.PhotoOptionalParameters
import fyi.repository.Repository
import fyi.utils.Utils
import infinitum.Auth_request

//Auxiliary class to manage the process of sending stored authentication requests
internal object AuthRequestManager {

    fun sendStoredAuthenticationRequests(mRepository: Repository) {
        val storedRequests = mRepository.getAuthRequestDao().getAllAuthRequests()
        val map = mutableMapOf<Pair<String, String>, MutableList<Auth_request>>()

        if (storedRequests.isNotEmpty()) {
            storedRequests.forEach {
                val key = Pair(it.domain, it.apptoken)
                if (map.containsKey(key)) map[key]?.add(it)
                else map[key] = mutableListOf(it)
            }

            val currentDomainApp = Pair(Infinitum.getInstance().getDomain(), mRepository.getAppToken())

            if (map.containsKey(currentDomainApp)) {
                //Not necessary to send init
                println(currentDomainApp)
                sendRequestsTo(currentDomainApp.first, mRepository.getAppToken(), mRepository.getAccessToken(), map[currentDomainApp]!!, mRepository)
                map.remove(currentDomainApp)
            }

            map.forEach {
                sendInitRequest(it.key.first, it.key.second, it.value, mRepository)
            }
        }
    }

    fun sendInitRequest(domain: String, appToken: String, requests: MutableList<Auth_request>, mRepository: Repository) {
        Infinitum.getInstance().init(
            domain = domain,
            appToken = appToken,
            onSuccess = { accessToken ->
                sendRequestsTo(domain, appToken, accessToken, requests, mRepository)
            },
            onFailure = { println("SEND INIT REQUEST $it")}
        )
    }

    fun sendRequestsTo(domain: String, appToken: String, accessToken: String, requests: MutableList<Auth_request>, mRepository: Repository) {
        val baseUrl = Infinitum.BASE_URL.replace("DOMAIN", domain)
        requests.forEach {
            Infinitum.getInstance().auth()?.photo(
                baseUrl,
                it,
                accessToken,
                appToken,
                { println("saved request sent") },
                { println(it) })
            mRepository.getAuthRequestDao().deleteRequest(it.id)
        }

    }

    fun storeNewAuthenticationRequest(image: String, optionalParameters: PhotoOptionalParameters.Builder, mRepository: Repository) {
        mRepository.getAuthRequestDao().addRequest(
            date = Utils.getDate(),
            image = image,
            domain = Infinitum.getInstance().getDomain(),
            appToken = mRepository.getAppToken(),
            optionalParameters = optionalParameters
        )
    }
}