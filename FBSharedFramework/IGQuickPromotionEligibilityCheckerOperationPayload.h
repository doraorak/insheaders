//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuickPromotionEligibilityCheckerOperationPayload_h
#define IGQuickPromotionEligibilityCheckerOperationPayload_h
@import Foundation;

#include "IGUserSessionPayload-Protocol.h"
#include "QPCounterCatalog.h"

@class NSDate, NSDictionary, NSString;

@interface IGQuickPromotionEligibilityCheckerOperationPayload : NSObject<IGUserSessionPayload> {
  /* instance variables */
  NSString *_nuxID;
  long long _appName;
  NSString *_triggerID;
  QPCounterCatalog *_dataStore;
  NSDictionary *_triggerContext;
  NSDate *_lastFetchTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNuxID:(id)id appName:(long long)name triggerID:(id)id dataStore:(id)store triggerContext:(id)context lastFetchTime:(id)time;
@end

#endif /* IGQuickPromotionEligibilityCheckerOperationPayload_h */