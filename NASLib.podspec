
Pod::Spec.new do |s|
  s.name         = "NASLib"
  s.version      = "1.1.0"
  s.homepage     = "https://github.com/hydraCy/NASWalletCore"
  s.license      = "MIT (example)"
  s.author             = { "蔡宇" => "461189296@qq.com" }
  s.source       = { :git => "https://github.com/hydraCy/NASWalletCore.git", :tag => "#{s.version}" }
  spec.platform     = :ios, '8.0'
  spec.vendored_frameworks = 'Walletcore.framework'

end
