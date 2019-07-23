# Mobile SDK for Infinitum

## Installation

### iOS

The Infinitum SDK can be added to the project using [Cocoapods](https://cocoapods.org/).

First you have to add Cocoapods to your project. Simply go to the terminal, navigate to your project folder and type
the following command:

```
 pod init
```

Then go to the generated Podfile and add the following pod:

```ruby
 pod 'InfinitumSDKMobile'
```

By default, the latest version will be used.

*Note that there is no support for emulators as of yet.*

### Android

The Android variant of the SDK has been published to Jitpack.

First you add the Jitpack repository to your project build.gradle file:
```
allprojects {
	repositories {
		...
		maven { url 'https://jitpack.io' }
	}
}
```
Finally add the sdk dependency to your application build.gradle file:
```groovy
dependencies {
	implementation 'com.github.infinitum-dev:mobile-sdk:latest-version'
}
```

## Usage

Every call to our API requires two callbacks, onSuccess and onFailure. The onSuccess lambda will require different parameters depending on the method being called. For example config will require a lambda that receives a ConfigResponse object, doInit will require a InitResponse, etc. On the other hand, onFailure will always require a lambda with an ErrorResponse parameter.

Infinitum has various modules that accomplish different goals. To use these modules you need to initialize the sdk by using:

[iOS](#iOS-1) [Android Kotlin](#Android-Kotlin) [Android Java](#Android-Java)

### iOS

```Swift
let infinitum = Infinitum.Companion().getInstance(applicationContext: ApplicationContext())
infinitum.config(
	domain: "dev.infinitum.app", 
	appType: "biometric-clock", 
	onSuccess: { (response) in self.doInit(configResponse: response)}, 
	onFailure: { (error) in print(error) })
```
```Swift
func doInit(configResponse: ConfigResponse) {
        infinitum.doInit(
		domain: "dev.infinitum.app", 
		appKey: configResponse.apps.first?.key ?? "default", 
		appSecret: configResponse.apps.first?.secret ?? "default", 
		appToken: configResponse.apps.first?.token ?? "default", 
		identity: "identity", 
		onSuccess: photo, //Another way to send a lambda
		onFailure: {(error) in print(error)})
}
```

After initializing, the SDK will remember your session so you dont need to repeat these steps every time the application starts.

All the modules are available through Infinitum.
Here's an example that utilizes Auth's module photo method:

```Swift
func photo() {
	let image = UIImage(imageLiteralResourceName: "resource")
        let image64 = ImageUtils().convertImageToBase64(image: image)
        
    	infinitum.auth()?.photo(
		photoB64: image64, 
		onSuccess: {(response) in print(response)}, 
		onFailure: {(error) in print(error)})
}
```
