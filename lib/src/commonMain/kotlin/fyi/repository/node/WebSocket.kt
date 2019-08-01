package fyi.repository.node

import fyi.repository.Repository

expect internal class WebSocket(nodeEventBuilder: NodeEvent.NodeEventBuilder, mRepository: Repository){
    internal fun disconnect()
}

