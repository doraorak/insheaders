//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryOwner_h
#define IGStoryOwner_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGMultiAuthorReelOwner.h"
#include "IGUser.h"
#include "NSCoding-Protocol.h"

@interface IGStoryOwner : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  IGUser *_userReelOwner_user;
  IGMultiAuthorReelOwner *_multiAuthorReelOwner_multiAuthorReelOwner;
}

/* class methods */
+ (id)multiAuthorReelOwnerWithMultiAuthorReelOwner:(id)owner;
+ (id)userReelOwnerWithUser:(id)user;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGStoryOwner_h */
