Pod::Spec.new do |s|
  s.name         = "DoActionSheetPlus"
  s.version      = "1.0.0"
  s.summary      = "Motified DoActionSheet, add button click effect!"
  s.homepage     = "https://github.com/pengrun/DoActionSheetPlus"
  s.license      = { :type => 'MIT', :file => 'License' }
  s.author       = { "pengrun" => "pengrun520@gmail.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/pengrun/DoActionSheetPlus.git", :tag => "1.0.0" }
  s.source_files  = 'DoActionSheetPlus/3rdSource/UIImage-ResizeMagick/*.{h,m}','DoActionSheetPlus/3rdSource/UIImage-PR/*.{h,m}','TestActionSheet/DoActionSheet/*.{h,m}'
  s.platform = :ios
  s.requires_arc = true
end
