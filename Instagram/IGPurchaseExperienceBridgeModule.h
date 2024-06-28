//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPurchaseExperienceBridgeModule_h
#define IGPurchaseExperienceBridgeModule_h
@import Foundation;

#include "FBPayAddShopPayManager.h"
#include "FBPayUPLLoggingAPI-Protocol.h"
#include "NativeIGPurchaseExperienceBridgeModuleSpec-Protocol.h"
#include "RCTBridge.h"
#include "RCTBundleManager.h"
#include "RCTCallableJSModules.h"
#include "RCTIGUserSessionModule-Protocol.h"
#include "RCTModuleRegistry.h"
#include "RCTViewRegistry.h"

@class IGUserSession, NSString;
@protocol OS_dispatch_queue;

@interface IGPurchaseExperienceBridgeModule : NSObject<NativeIGPurchaseExperienceBridgeModuleSpec, RCTIGUserSessionModule> {
  /* instance variables */
  FBPayAddShopPayManager *_shopPayManager;
  NSObject<FBPayUPLLoggingAPI> *_fbpayUPLLogger;
}

@optional
@property (weak, nonatomic) RCTModuleRegistry *moduleRegistry;
@optional
@property (weak, nonatomic) RCTViewRegistry *viewRegistry_DEPRECATED;
@optional
@property (weak, nonatomic) RCTBundleManager *bundleManager;
@optional
@property (weak, nonatomic) RCTCallableJSModules *callableJSModules;
@optional
@property (readonly, weak, nonatomic) RCTBridge *bridge;
@optional
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IGUserSession *userSession;

/* class methods */
+ (id)moduleName;
+ (void)load;
+ (const struct RCTMethodInfo *)__rct_export__650;
+ (const struct RCTMethodInfo *)__rct_export__741;
+ (const struct RCTMethodInfo *)__rct_export__902;
+ (const struct RCTMethodInfo *)__rct_export__953;
+ (const struct RCTMethodInfo *)__rct_export__1044;
+ (const struct RCTMethodInfo *)__rct_export__1135;
+ (const struct RCTMethodInfo *)__rct_export__1386;
+ (const struct RCTMethodInfo *)__rct_export__1677;
+ (const struct RCTMethodInfo *)__rct_export__1778;
+ (const struct RCTMethodInfo *)__rct_export__1859;

/* instance methods */
- (struct shared_ptr<facebook::react::TurboModule> { struct TurboModule * x0; struct __shared_weak_count * x1; })getTurboModule:(const void *)module;
- (void)initCheckout:(double)checkout params:(struct SpecInitCheckoutParams *)params;
- (void)onPaymentSuccess:(id)success isFromShoppingBag:(BOOL)bag merchantIgId:(id)id purchasedProductIds:(id)ids appliedIncentiveIds:(id)ids;
- (void)sharePurchaseToStory:(double)story productId:(id)id merchantIgId:(id)id;
- (void)checkoutConfirmationWillDismiss;
- (void)authenticate:(double)authenticate params:(struct SpecAuthenticateParams *)params resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)openShopPayInterstitial:(double)interstitial paymentType:(id)type sessionId:(id)id resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)openShopPayFlow:(double)flow url:(id)url sessionId:(id)id resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)openConnectFlow:(double)flow paymentType:(id)type sessionId:(id)id resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)openPaypalConsentFlow:(double)flow paymentType:(id)type paypalBAId:(id)baid sessionId:(id)id resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)dismissCheckout:(double)checkout productIds:(id)ids isCheckoutComplete:(BOOL)complete addToBagOnCheckoutDismiss:(BOOL)dismiss;
@end

#endif /* IGPurchaseExperienceBridgeModule_h */