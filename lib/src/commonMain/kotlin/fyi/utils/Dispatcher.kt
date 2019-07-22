package fyi.utils

import kotlinx.coroutines.CoroutineDispatcher

expect class Dispatcher {
    companion object {
        val ApplicationDispatcher: CoroutineDispatcher
    }
}
