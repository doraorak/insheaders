//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAInAppPurchaseLogger_h
#define METAInAppPurchaseLogger_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"

@class NSDateFormatter, NSString;

@interface METAInAppPurchaseLogger : NSObject {
  /* instance variables */
  NSDateFormatter *_dateFormatter;
  NSObject<FBAnalyticsLogging> *_structuredLogger;
  NSString *_product;
  NSString *_productTypeString;
  NSString *_requestDataProductTypeString;
}

@property (readonly, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *containerModule;
@property (copy, nonatomic) NSString *mediaID;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *creatorID;

/* instance methods */
- (id)initWithStructuredLogger:(id)logger;
- (void)resetRequestDataProductType;
- (void)updateProductType:(id)type;
- (void)updateProductType:(id)type withRequestData:(id)data;
- (id)_getProductTypeFromRequestData:(id)data;
- (int)getAndUpdateProductType:(id)type;
- (void)logInitializationStartEventWithExtraLoggingData:(id)data;
- (void)logCatalogFetchFailedEventWithError:(id)error;
- (void)logPurchaseSuccessEventWithTransaction:(id)transaction;
- (void)_logFinishTransactionInit:(id)init withErrorCodeString:(id)string;
- (void)logRestorePurchases;
- (void)logDebugCachePrePurchaseStored:(id)stored forPayment:(id)payment;
- (void)logDebugCachePostPurchaseStored:(id)stored withData:(id)data;
- (void)logDebugCachePostPurchaseNotFound:(id)found;
- (void)logDebugCachePostPurchaseSkipDuplicate:(id)duplicate;
- (void)logDebugCacheReliabilityMismatched:(id)mismatched legacyCachePayload:(id)payload;
- (void)logDebugPurchaseCancelledByUser:(id)user;
- (void)logDebugPendingSKUFoundInPaymentQueue:(id)queue;
- (void)logDebugRestoreTransactions:(id)transactions;
- (void)logDebugRestoreCompletedTransactionsFailedWithError:(id)error;
@end

#endif /* METAInAppPurchaseLogger_h */
