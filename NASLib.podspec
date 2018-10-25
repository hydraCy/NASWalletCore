
Pod::Spec.new do |s|
  s.name         = "NASLib"
  s.version      = "1.0.0"
  s.homepage     = "https://github.com/hydraCy/NASWalletCore"
  s.summary      = 'NAS Walletcore.'
  s.license      = {:type => 'MIT' }
  s.author             = { "蔡宇" => "461189296@qq.com" }
  s.source       = { :git => "https://github.com/hydraCy/NASWalletCore.git", :tag => "#{s.version}" }
  s.platform     = :ios, '8.0'
  s.vendored_frameworks = 'NASLib/Walletcore.framework'
end
