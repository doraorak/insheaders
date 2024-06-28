//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTaggingSearchLogger_h
#define IGTaggingSearchLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"

@class IGShoppingNavigationAnalyticsContext, NSArray, NSString;

@interface IGTaggingSearchLogger : NSObject {
  /* instance variables */
  NSString *_taggingSessionId;
  NSObject<IGAnalyticsEventLoggingProtocol> *_logger;
  IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
  NSArray *_suggestedItemIds;
  NSString *_suggestedItemRequestStatus;
  NSString *_uploadId;
}

/* instance methods */
- (id)initWithUserScopedObjects:(id)objects taggingSessionId:(id)id navigationAnalyticsContext:(id)context suggestedItemIds:(id)ids suggestedItemRequestStatus:(id)status uploadId:(id)id;
@end

#endif /* IGTaggingSearchLogger_h */
