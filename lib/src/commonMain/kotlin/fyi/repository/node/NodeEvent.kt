package fyi.repository.node

data class NodeEvent private constructor(val event: String, val onEvent: () -> Unit) {

    class NodeEventBuilder{
        private val eventList = mutableListOf<NodeEvent>()

        fun addEvent(event: String, onEvent: () -> Unit): NodeEventBuilder {
            if (event.isNotBlank()) {
                eventList.add(NodeEvent(event, onEvent))
            }
            return this
        }

        internal fun getEventList(): List<NodeEvent> {
            return eventList
        }
    }
}
