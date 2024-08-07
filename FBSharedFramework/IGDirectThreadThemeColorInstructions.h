//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadThemeColorInstructions_h
#define IGDirectThreadThemeColorInstructions_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "NSCoding-Protocol.h"

@class NSArray, UIColor;

@interface IGDirectThreadThemeColorInstructions : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  NSArray *_generateGradient_colors;
  long long _generateGradient_direction;
  NSArray *_generateGradientImage_colors;
  UIColor *_generateGradientImage_fallbackColor;
  UIColor *_plainColor;
}

/* class methods */
+ (id)generateGradientImageWithColors:(id)colors fallbackColor:(id)color;
+ (id)generateGradientWithColors:(id)colors direction:(long long)direction;
+ (id)plainColor:(id)color;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectThreadThemeColorInstructions_h */
