package fyi.utils

import io.ktor.http.ContentType
import io.ktor.http.content.PartData
import platform.Foundation.NSDataBase64Encoding64CharacterLineLength
import platform.Foundation.base64EncodedStringWithOptions
import platform.UIKit.UIImage
import platform.UIKit.UIImagePNGRepresentation

actual object ImageUtils {
    fun convertImageToBase64(image: UIImage): String {
        val imageData = UIImagePNGRepresentation(image);
        return "data:image/png;base64,${imageData?.base64EncodedStringWithOptions(NSDataBase64Encoding64CharacterLineLength)!!}"
    }
}