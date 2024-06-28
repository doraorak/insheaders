//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTPickerManager_h
#define RCTPickerManager_h
@import Foundation;

#include "RCTViewManager.h"

@interface RCTPickerManager : RCTViewManager
/* class methods */
+ (id)moduleName;
+ (void)load;
+ (id)propConfig_items;
+ (id)propConfig_selectedIndex;
+ (id)propConfig_accessibilityLabel;
+ (id)propConfig_onChange;
+ (id)propConfig_color;
+ (id)propConfig_textAlign;
+ (id)propConfig_fontSize;
+ (id)propConfig_fontWeight;
+ (id)propConfig_fontStyle;
+ (id)propConfig_fontFamily;
+ (const struct RCTMethodInfo *)__rct_export__430;

/* instance methods */
- (id)view;
- (void)set_fontSize:(id)size forView:(id)view withDefaultView:(id)view;
- (void)set_fontWeight:(id)weight forView:(id)view withDefaultView:(id)view;
- (void)set_fontStyle:(id)style forView:(id)view withDefaultView:(id)view;
- (void)set_fontFamily:(id)family forView:(id)view withDefaultView:(id)view;
- (void)setNativeSelectedIndex:(id)index toIndex:(id)index;
@end

#endif /* RCTPickerManager_h */
