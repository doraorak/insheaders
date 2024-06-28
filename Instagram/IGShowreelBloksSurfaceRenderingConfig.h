//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShowreelBloksSurfaceRenderingConfig_h
#define IGShowreelBloksSurfaceRenderingConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGIOSLinkIntentTarget.h"

@class IGUserSession, NSArray, NSString;

@interface IGShowreelBloksSurfaceRenderingConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGUserSession *_reels_userSession;
  IGIOSLinkIntentTarget *_reels_ctaClickIntentTarget;
  NSString *_stories_module;
  NSArray *_stories_mentions;
}

/* class methods */
+ (id)reelsWithUserSession:(id)session ctaClickIntentTarget:(id)target;
+ (id)storiesWithModule:(id)module mentions:(id)mentions;

/* instance methods */
@end

#endif /* IGShowreelBloksSurfaceRenderingConfig_h */