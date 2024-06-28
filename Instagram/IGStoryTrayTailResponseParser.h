//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTrayTailResponseParser_h
#define IGStoryTrayTailResponseParser_h
@import Foundation;

#include "IGFlashStoriesCacheController.h"
#include "IGStoryDataControllerSessionDeps.h"

@class NSNumber, NSString;

@interface IGStoryTrayTailResponseParser : NSObject {
  /* instance variables */
  IGStoryDataControllerSessionDeps *_sessionDeps;
  IGFlashStoriesCacheController *_flashStoriesCacheController;
  long long _lastTrayRequestReason;
  NSNumber *_trayPaginatedTailRequestDeliveryLoggingKey;
  NSString *_lastTrayRequestId;
}

/* instance methods */
- (id)initWithSessionDeps:(id)deps flashStoriesCacheController:(id)controller lastTrayRequestReason:(long long)reason trayPaginatedTailRequestDeliveryLoggingKey:(id)key lastTrayRequestId:(id)id;
@end

#endif /* IGStoryTrayTailResponseParser_h */