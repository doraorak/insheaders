//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageBubbleBackgroundConfig_h
#define IGDirectMessageBubbleBackgroundConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectGradient.h"

@class UIColor;

@interface IGDirectMessageBubbleBackgroundConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UIColor *_plainColor;
  IGDirectGradient *_gradient;
}

/* class methods */
+ (id)gradient:(id)gradient;
+ (id)plainColor:(id)color;

/* instance methods */
@end

#endif /* IGDirectMessageBubbleBackgroundConfig_h */