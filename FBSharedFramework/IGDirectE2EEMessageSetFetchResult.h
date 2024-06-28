//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectE2EEMessageSetFetchResult_h
#define IGDirectE2EEMessageSetFetchResult_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectE2EEPaginatedMessageSet.h"
#include "IGDirectPublishedMessageSet.h"

@class NSError, NSString;

@interface IGDirectE2EEMessageSetFetchResult : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_success_threadId;
  IGDirectPublishedMessageSet *_success_unseenShhModeMessageSet;
  IGDirectE2EEPaginatedMessageSet *_success_paginatedMessageSet;
  NSError *_failure_error;
}

/* class methods */
+ (id)failureWithError:(id)error;
+ (id)successWithThreadId:(id)id unseenShhModeMessageSet:(id)set paginatedMessageSet:(id)set;

/* instance methods */
@end

#endif /* IGDirectE2EEMessageSetFetchResult_h */