package fyi.utils

import android.graphics.Bitmap
import kotlinx.io.ByteArrayOutputStream
import android.util.Base64

actual object ImageUtils {
    fun convertImageToBase64(image: Bitmap): String {
        val MAX_SIZE = 1000000
        val MIN_QUALITY = 50

        val baos = ByteArrayOutputStream()
        var currSize: Int
        var currQuality = 80;

        do {
            image.compress(Bitmap.CompressFormat.JPEG, currQuality, baos)
            currSize = baos.toByteArray().size
            currQuality -= 5
        }while (currSize >= MAX_SIZE && currQuality >= MIN_QUALITY)

        if (currQuality < MIN_QUALITY) {
            throw Exception("InfinitumSDK: Invalid image size - Make sure your image size does not exceed 1mb.")
        }

        return "data:image/png;base64,${Base64.encodeToString(baos.toByteArray(), Base64.DEFAULT)}"
    }
}