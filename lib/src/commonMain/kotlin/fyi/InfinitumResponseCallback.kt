package fyi

import fyi.exceptions.ErrorResponse
import fyi.models.ConfigResponse
import fyi.models.InitResponseDTO

interface InfinitumResponseCallback<T> {
    fun onSuccess(response: T)
    fun onFailure(error: ErrorResponse)
}

interface ConfigCallback: InfinitumResponseCallback<ConfigResponse>

interface InitCallback: InfinitumResponseCallback<InitResponseDTO>