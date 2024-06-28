//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxSubscriptionUpdateReason_h
#define IGDirectInboxSubscriptionUpdateReason_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectMutationOptimisticUpdateInfo.h"
#include "IGDirectPublishedInboxSubscriptionUpdateReason.h"

@interface IGDirectInboxSubscriptionUpdateReason : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGDirectPublishedInboxSubscriptionUpdateReason *_publishedInboxUpdate;
  IGDirectMutationOptimisticUpdateInfo *_optimisticStateUpdate_updateReason;
}

/* class methods */
+ (id)optimisticStateUpdateWithUpdateReason:(id)reason;
+ (id)publishedInboxUpdate:(id)update;

/* instance methods */
@end

#endif /* IGDirectInboxSubscriptionUpdateReason_h */
