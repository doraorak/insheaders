//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAInAppPurchaseCache_h
#define METAInAppPurchaseCache_h
@import Foundation;

#include "METAInAppPurchaseLogger.h"

@class NSString;
@protocol METAInAppPurchaseDefaults;

@interface METAInAppPurchaseCache : NSObject {
  /* instance variables */
  NSString *_userID;
  NSObject<METAInAppPurchaseDefaults> *_defaults;
  METAInAppPurchaseLogger *_logger;
}

/* instance methods */
- (id)initWithUserID:(id)id userDefaults:(id)defaults logger:(id)logger;
- (id)initWithUserID:(id)id defaults:(id)defaults logger:(id)logger;
- (void)_setPrePurchaseCachedPaymentData:(id)data;
- (id)_prePurchaseCachedPaymentData;
- (void)_setPostPurchaseCachedPaymentData:(id)data;
- (id)_postPurchaseCachedPaymentData;
- (id)_findNearestDataForTransactionTimestamp:(id)timestamp withArray:(id)array;
@end

#endif /* METAInAppPurchaseCache_h */
