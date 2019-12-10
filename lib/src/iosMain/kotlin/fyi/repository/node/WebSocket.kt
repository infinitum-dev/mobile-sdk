package fyi.repository.node

import fyi.repository.Repository

actual internal class WebSocket actual constructor(nodeEventBuilder: NodeEvent.NodeEventBuilder, mRepository: Repository) {
    actual fun disconnect() {
    }
}