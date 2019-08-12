package fyi.utils

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers

actual class Dispatcher {
    actual companion object {
        actual val ApplicationDispatcher: CoroutineDispatcher = Dispatchers.Default
    }
}