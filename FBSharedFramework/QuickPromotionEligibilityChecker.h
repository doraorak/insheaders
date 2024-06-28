//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QuickPromotionEligibilityChecker_h
#define QuickPromotionEligibilityChecker_h
@import Foundation;

#include "QPEligibilityContext.h"

@interface QuickPromotionEligibilityChecker : NSObject {
  /* instance variables */
  long long _appName;
}

@property (retain, nonatomic) QPEligibilityContext *context;

/* instance methods */
- (id)initWithUserSession:(id)session nuxID:(id)id appName:(long long)name triggerID:(id)id dataStore:(id)store triggerContext:(id)context lastFetchTime:(id)time surfaceCooldown:(double)cooldown clashManagementContext:(id)context shouldUseSDKClashManagement:(BOOL)management;
- (id)bestOfPromotions:(id)promotions;
- (id)bestOf:(id)of;
- (id)allEligibleQPs:(id)qps;
- (BOOL)checkPostDeliveryEligibilityForPromotion:(id)promotion;
@end

#endif /* QuickPromotionEligibilityChecker_h */
