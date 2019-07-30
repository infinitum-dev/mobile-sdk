package fyi.repository

actual class WebSocket actual constructor(onLicensed: () -> Unit, onUnlicensed: () -> Unit, mRepository: Repository) {
    actual fun disconnect() {
    }
}