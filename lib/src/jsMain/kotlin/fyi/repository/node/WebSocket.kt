package fyi.repository.node

import fyi.repository.Repository

internal actual class WebSocket actual constructor(
    nodeEventBuilder: NodeEvent.NodeEventBuilder,
    mRepository: Repository
) {
    internal actual fun disconnect() {
    }
}