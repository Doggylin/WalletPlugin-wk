

Pod::Spec.new do |s|


  s.name         = "WalletPlugin-wk"
  s.version      = "1.0.0"
  s.summary      = "wallet plugin"


  s.description  = <<-DESC
                   DESC

  s.homepage     = "https://github.com/Doggylin/WalletPlugin-wk"

  s.license      = "MIT "

  s.author       = { "Dogd" => "lcl1994@outlook.com" }


  s.source       = { :git => "https://github.com/Doggylin/WalletPlugin-wk.git", :tag => "#{s.version}" }
  
  s.vendored_frameworks = 'Wiccwallet.framework'
  s.frameworks = 'Foundation'

  s.source_files  = "Wiccwallet.framework", "Wiccwallet.framework/*.{h,m}"
  s.exclude_files = "Classes/Exclude"






end
