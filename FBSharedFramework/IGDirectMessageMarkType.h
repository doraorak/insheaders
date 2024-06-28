//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageMarkType_h
#define IGDirectMessageMarkType_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectLastSeenShhMessageInfo.h"
#include "NSCoding-Protocol.h"

@class NSDate;

@interface IGDirectMessageMarkType : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  IGDirectLastSeenShhMessageInfo *_threadItemSeen_shhMessageSeenInfo;
  NSDate *_threadItemSeen_sentTimestamp;
  unsigned long long _visualItemSeen_targetItemType;
}

/* class methods */
+ (id)threadItemSeenWithShhMessageSeenInfo:(id)info sentTimestamp:(id)timestamp;
+ (id)threadItemWatched;
+ (id)visualItemReplayed;
+ (id)visualItemScreenshotted;
+ (id)visualItemSeenWithTargetItemType:(unsigned long long)type;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectMessageMarkType_h */