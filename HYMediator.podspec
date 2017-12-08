Pod::Spec.new do |s|
  s.name         = "HYMediator"
  s.version      = "0.0.2"
  s.summary      = "组件化核心模块"
  s.description  = <<-DESC
   在别的模块中建立此模块的扩展类，以直接调用
                  DESC
  s.homepage     = "https://github.com/jiutianhuanpei/HYMediator"
  s.license      = "MIT"
  s.author             = { "shenhongbang" => "shenhongbang@163.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/jiutianhuanpei/HYMediator.git", :tag => s.version }
  s.source_files  = "HYMediator/*.{h,m}"
  #s.frameworks = "AddressBook", "Contacts"
  s.requires_arc = true
end