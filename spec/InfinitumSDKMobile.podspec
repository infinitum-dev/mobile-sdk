

Pod::Spec.new do |spec|

  spec.name         = "InfinitumSDKMobile"
  spec.version      = "0.0.2"
  spec.summary      = "SDK that connects to Infinitum"

  spec.homepage     = "https://github.com/infinitum-dev/mobile-sdk"

  spec.license      = "MIT"


  spec.author             = { "infinitum_dev" => "developers@infinitum.app" }

  spec.platform     = :ios, "11.0"

  spec.source       = { :git => "https://github.com/infinitum-dev/mobile-sdk.git", :tag => "0.0.2" }

  spec.vendored_frameworks = 'build/bin/ios/InfinitumSDKMobileReleaseFramework/InfinitumSDKMobile.framework'
end
