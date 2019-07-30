package fyi.repository

expect class WebSocket(onLicensed: () -> Unit, onUnlicensed: () -> Unit, mRepository: Repository){
    fun disconnect()
}