package pt.fyi.utils

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers

actual class Dispatcher {
    actual companion object {
        internal actual val ApplicationDispatcher: CoroutineDispatcher = Dispatchers.Main
    }
}