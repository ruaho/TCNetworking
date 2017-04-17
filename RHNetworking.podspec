Pod::Spec.new do |s|
  s.name         = "RHNetworking"
  s.version      = "0.1.11.0.1"
  s.summary      = "AFNetworking封装"
  s.homepage     = "https://github.com/ruaho/TCNetworking"
  s.license      = "MIT"
  s.author             = { "ichensheng" => "cs200521@163.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/ruaho/TCNetworking.git", :tag => "#{s.version}" }
  s.source_files  = "TCNetworking/Classes/*.{h,m}"
  s.requires_arc = true
  s.dependency "AFNetworking", "~> 3.1.0"
end
