package fyi.utils


import com.github.aakira.napier.DebugAntilog
import com.github.aakira.napier.Napier
import platform.Foundation.*
import platform.UIKit.UIImage
import platform.UIKit.UIImagePNGRepresentation

actual object Utils {
    fun convertImageToBase64(image: UIImage): String {
        val imageData = UIImagePNGRepresentation(image);
        return "data:image/png;base64,${imageData?.base64EncodedStringWithOptions(NSDataBase64Encoding64CharacterLineLength)!!}"
    }

    actual fun getDate(): String {
        val date = NSDate()
        val formatter = NSDateFormatter()
        formatter.dateFormat = "yyyy-MM-dd HH:mm:ss"
        return "${formatter.stringFromDate(date)} GMT"
    }

    actual fun initializeLogger() {
        Napier.base(DebugAntilog())
    }
}