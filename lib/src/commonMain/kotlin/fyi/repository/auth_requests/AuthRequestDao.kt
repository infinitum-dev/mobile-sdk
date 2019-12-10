package fyi.repository.auth_requests

import fyi.modules.auth.models.BiometricAuthOptionalParameters
import infinitum.AuthRequestsQueries
import infinitum.Auth_request

internal interface AuthRequestDao {
    fun getAllAuthRequests(): List<Auth_request>

    fun addRequest(date: String, image: String, domain: String, appToken: String, optionalParameters: BiometricAuthOptionalParameters.Builder)

    fun deleteRequest(id: Long)
}

internal class AuthRequestDaoImpl(val query: AuthRequestsQueries): AuthRequestDao {
    override fun deleteRequest(id: Long) {
        query.deleteById(id)
    }

    override fun addRequest(date: String, image: String, domain: String, appToken: String,  optionalParameters: BiometricAuthOptionalParameters.Builder) {
        query.insert(date, image, domain, appToken, optionalParameters.position, optionalParameters.proximity,
            optionalParameters.action, optionalParameters.data)
    }

    override fun getAllAuthRequests(): List<Auth_request>{
        return query.selectAll().executeAsList()
    }
}