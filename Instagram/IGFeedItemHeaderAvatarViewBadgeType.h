//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemHeaderAvatarViewBadgeType_h
#define IGFeedItemHeaderAvatarViewBadgeType_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSArray, UIColor;

@interface IGFeedItemHeaderAvatarViewBadgeType : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSArray *_status_emojis;
  double _status_emojiFontSize;
  UIColor *_status_badgeBackgroundColor;
}

/* class methods */
+ (id)hashtag;
+ (id)location;
+ (id)none;
+ (id)statusWithEmojis:(id)emojis emojiFontSize:(double)size badgeBackgroundColor:(id)color;

/* instance methods */
@end

#endif /* IGFeedItemHeaderAvatarViewBadgeType_h */
