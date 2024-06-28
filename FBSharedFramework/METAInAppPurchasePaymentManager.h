//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAInAppPurchasePaymentManager_h
#define METAInAppPurchasePaymentManager_h
@import Foundation;

#include "METAInAppPurchaseApplePaymentService.h"
#include "METAInAppPurchaseCache.h"
#include "METAInAppPurchaseLogger.h"
#include "METAInAppPurchaseMobileConfigParams.h"
#include "METAInAppPurchaseTransactionAnnouncer.h"
#include "METAInAppPurchaseVerificationHandler.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface METAInAppPurchasePaymentManager : NSObject<NSObject> {
  /* instance variables */
  METAInAppPurchaseApplePaymentService *_paymentService;
  METAInAppPurchaseVerificationHandler *_verificationHandler;
  METAInAppPurchaseCache *_inAppPurchaseCache;
  METAInAppPurchaseTransactionAnnouncer *_announcer;
  BOOL _needsStateReset;
  id /* block */ _successBlock;
  id /* block */ _failureBlock;
  id /* block */ _restoreBlock;
  NSString *_productSKUBlockIdentifier;
}

@property (readonly, nonatomic) METAInAppPurchaseLogger *logger;
@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) METAInAppPurchaseMobileConfigParams *mobileConfigParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVerificationHandler:(id)handler userID:(id)id inAppPurchaseCache:(id)cache logger:(id)logger announcer:(id)announcer mobileConfigParams:(id)params;
- (id)initWithApplePaymentService:(id)service verificationHandler:(id)handler userID:(id)id inAppPurchaseCache:(id)cache logger:(id)logger announcer:(id)announcer mobileConfigParams:(id)params;
- (void)updatedTransactions:(id)transactions;
- (void)removedTransactions:(id)transactions;
- (void)restoreCompletedTransactionsFailedWithError:(id)error;
- (void)paymentService:(id)service updatedTransactions:(id)transactions;
- (void)paymentService:(id)service removedTransactions:(id)transactions;
- (void)paymentService:(id)service restoreCompletedTransactionsFailedWithError:(id)error;
- (BOOL)_shouldExecuteCallbackBlock:(id)block;
- (void)registerTransactionObserver;
- (void)unregisterTransactionObserver;
@end

#endif /* METAInAppPurchasePaymentManager_h */