//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnimatedEmojiCache_h
#define IGAnimatedEmojiCache_h
@import Foundation;

#include "IGAnimatedEmojiManifest.h"

@class NSMutableDictionary;

@interface IGAnimatedEmojiCache : NSObject {
  /* instance variables */
  id _lock;
  IGAnimatedEmojiManifest *_manifest;
  NSMutableDictionary *_gifDataForEmoji;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
@end

#endif /* IGAnimatedEmojiCache_h */
