package pt.fyi.utils

import kotlinx.coroutines.CoroutineDispatcher

expect class Dispatcher {
    companion object {
        internal val ApplicationDispatcher: CoroutineDispatcher
    }
}
