//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserReference_h
#define IGUserReference_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGObjectFuture.h"
#include "IGUser.h"
#include "IGUsernameFuture.h"

@interface IGUserReference : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGUsernameFuture *_usernameFuture;
  IGObjectFuture *_objectFuture;
  IGUser *_user;
}

/* class methods */
+ (id)objectFuture:(id)future;
+ (id)user:(id)user;
+ (id)usernameFuture:(id)future;

/* instance methods */
@end

#endif /* IGUserReference_h */
