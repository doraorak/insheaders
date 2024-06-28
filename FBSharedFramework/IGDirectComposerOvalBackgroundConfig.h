//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectComposerOvalBackgroundConfig_h
#define IGDirectComposerOvalBackgroundConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class UIColor;

@interface IGDirectComposerOvalBackgroundConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIColor *_flat_color;
  UIColor *_flat_maskColor;
  UIColor *_lightBlur_backgroundColor;
  UIColor *_lightBlur_maskColor;
  long long _lightBlur_blurEffectStyle;
  UIColor *_lightBlur_opaqueBackgroundColor;
  UIColor *_lightBlur_overlayColor;
  UIColor *_shadow_color;
  BOOL _shadow_originatesFromLeftSide;
}

/* class methods */
+ (id)flatWithColor:(id)color maskColor:(id)color;
+ (id)lightBlurWithBackgroundColor:(id)color maskColor:(id)color blurEffectStyle:(long long)style opaqueBackgroundColor:(id)color overlayColor:(id)color;
+ (id)shadowWithColor:(id)color originatesFromLeftSide:(BOOL)side;
+ (id)transparent;

/* instance methods */
@end

#endif /* IGDirectComposerOvalBackgroundConfig_h */