

Pod::Spec.new do |spec|

  spec.name         = "InfinitumSDKMobile"
  spec.version      = "0.0.1"
  spec.summary      = "SDK that connects to Infinitum"

  spec.homepage     = "https://github.com/infinitum-dev/infinitum_sdk_mobile"



  spec.license      = "MIT"


  spec.author             = { "infinitum_dev" => "developers@infinitum.app" }

  spec.platform     = :ios, "11.0"

  spec.source       = { :git => "https://github.com/infinitum-dev/infinitum_sdk_mobile.git", :tag => "0.0.1" }

  spec.vendored_frameworks = 'build/bin/ios/releaseFramework/infinitum_sdk_mobile.framework'
end
