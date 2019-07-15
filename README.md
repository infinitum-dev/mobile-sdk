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

### iOS
