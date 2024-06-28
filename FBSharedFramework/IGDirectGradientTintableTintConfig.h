//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectGradientTintableTintConfig_h
#define IGDirectGradientTintableTintConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class UIColor, UIImage;

@interface IGDirectGradientTintableTintConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIColor *_plainColor;
  UIImage *_gradientImage;
}

/* class methods */
+ (id)gradientImage:(id)image;
+ (id)plainColor:(id)color;

/* instance methods */
@end

#endif /* IGDirectGradientTintableTintConfig_h */
