package fyi.exceptions

import kotlinx.serialization.Serializable

@Serializable
data class ErrorResponse(var message: String?="", var type: String?="", var status: Int?=0)

