//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectComposerBackgroundConfig_h
#define IGDirectComposerBackgroundConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class UIColor;

@interface IGDirectComposerBackgroundConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIColor *_flat_color;
  UIColor *_lightBlur_backgroundColor;
}

/* class methods */
+ (id)flatWithColor:(id)color;
+ (id)lightBlurWithBackgroundColor:(id)color;
+ (id)transparent;

/* instance methods */
@end

#endif /* IGDirectComposerBackgroundConfig_h */
