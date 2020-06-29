package fyi.repository.node

import fyi.repository.Repository

actual internal class WebSocket actual constructor(
    domain: String,
    nodeEventBuilder: NodeEvent.NodeEventBuilder,
    mRepository: Repository
) {
    actual fun disconnect() {
    }
}