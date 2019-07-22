package fyi.exceptions

/**
 * Enum class with recurring errors that can occur in the execution of Infinitum.
 * @property message error message.
 */

enum class Errors(var error: ErrorResponse) {
    /**
     * Occurs when an invalid parameter was found. Usually means that the parameter is empty or blank.
     */
    INVALID_PARAMETER(ErrorResponse("Parameter is invalid.", ErrorTypes.InfinitumSDK.name,0)),
    NETWORK_ERROR(ErrorResponse("Something is wrong with the connection.",ErrorTypes.Network.name,0)),
    UNKNOWN_EXCEPTION(ErrorResponse("An unknown exception was caught.", ErrorTypes.InfinitumSDK.name, 0)),
    DOMAIN_UNSPECIFIED(ErrorResponse("Domain was not specified.", ErrorTypes.InfinitumSDK.name, 0)),
    SERVER_ERROR(ErrorResponse("The server encountered an unexpected condition that prevented it from fulfilling the request!", ErrorTypes.Server.name, 500))

    /***
    /**
     * Occurs when an exception related to the network was thrown like UnknownHostException.
    */
    NETWORK_ERROR("Something is wrong with the connection!"),
    /**
     * Occurs when a unhandled exception was thrown.
    */
    UNKNOWN_EXCEPTION("An unknown exception was caught!"),
    /**
     * Occurs when a invalid parameter was given, like a not existing app key.
    */
    UNAUTHORIZED("Request lacks valid authentication credentials!"),
    /**
     * Occurs when an exception related to IO was thrown.
    */
    IO_ERROR("Input/Output operation failed!"),
    /**
     * Occurs when the server is down or something went wrong in the server side logic.
     * Can also occur if an invalid domain was given
    */
    INTERNAL_SERVER_ERROR("The server encountered an unexpected condition that prevented it from fulfilling the request!\n" +
    "It can also occur when you insert an invalid domain or an invalid appToken if in Init.\n" +
    "If it occurs during a photo request, make sure the file is not corrupted."),
    /**
     * Occurs when trying to deserialize a json response to a object.
    */
    PARSING_ERROR("Something went wrong when parsing the json response! The response body could be empty or " +
    "the json has no compatible keys to what is expected."),
    /**
     * Occurs when a request fails but something failed while deserializing to an expected ErrorResponse object.
    */
    PARSING_ERROR_REQUEST_FAILED("The request failed but something went wrong when parsing server's response"),
    /**
     * Occurs when no applications were found by the server during the config request.
    */
    NO_APPS_FOUND("There are no applications with that type under the specified domain. Or the app type specified does not" +
    " exist"),
    /**
     *  Occurs when a provided file doesn't have the expected extension.
    */
    INVALID_FILE_TYPE("Provided file is of invalid type. Expected is .jpg, .png or .jpeg"),
    INVALID_IMAGE_SIZE("Provided image exceeds 1 megabyte of size!"),
    USER_NOT_FOUND("Provided photo was not found in the database!")

     */
}