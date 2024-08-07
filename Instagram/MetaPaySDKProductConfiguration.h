//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MetaPaySDKProductConfiguration_h
#define MetaPaySDKProductConfiguration_h
@import Foundation;

#include "FBPayExpressCheckoutSetupData.h"
#include "FBPayExpressCheckoutUserData.h"
#include "FBPayWebBrowserControllerDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol FBPayWebBrowserControlling;

@interface MetaPaySDKProductConfiguration : NSObject<FBPayWebBrowserControllerDelegate> {
  /* instance variables */
  UIViewController *_topViewController;
  NSObject<FBPayWebBrowserControlling> *_webController;
  FBPayExpressCheckoutSetupData *_setupData;
}

@property (nonatomic) BOOL isProactiveCheckoutEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *productId;
@property (readonly, nonatomic) long long navigationBarStyle;
@property (nonatomic) BOOL isMetaPayFooterEnabled;
@property (readonly, nonatomic) BOOL shouldPresentProactiveCheckoutBanner;
@property (readonly, nonatomic) BOOL requireAdsTrafficForProactiveCheckout;
@property (readonly, nonatomic) BOOL checkoutOptionalityEnabled;
@property (readonly, nonatomic) BOOL isConcurrentPaymentHandlingEnabled;
@property (readonly, nonatomic) NSString *orderId;
@property (readonly, nonatomic) NSString *receiverId;
@property (readonly, nonatomic) NSString *dummyReceiverId;
@property (readonly, nonatomic) FBPayExpressCheckoutUserData *userData;
@property (readonly, nonatomic) NSString *currentPartnerId;
@property (readonly, nonatomic) NSString *currentMerchantId;

/* instance methods */
- (id)init;
- (BOOL)shouldEnableDiskCacheOptimizationGatingOverride;
- (long long)productAvailabilityStatusWithOriginCheck:(id)check;
- (void)triggerExpressCheckoutPlatformAvailabilityOnOriginChangeWithSessionId:(id)id origin:(id)origin adId:(id)id adsContextExtension:(id)extension callback:(id /* block */)callback;
- (void)maybeInjectCheckoutJSForOrigin:(id)origin intoWebView:(id)view;
- (void)uninjectCheckoutJs;
- (id)defaultClientReceiverId;
- (void)canProcessAvailability:(id)availability supportedContainerTypes:(id)types uplSessionId:(id)id productData:(id)data isPUX:(BOOL)pux errorInfo:(id)info callback:(id /* block */)callback merchantNameCallback:(id /* block */)callback;
- (void)launchECPWithPaymentRequest:(id)request productData:(id)data hostViewController:(id)controller isProactive:(BOOL)proactive uplSessionId:(id)id;
- (id)shouldPresentDisclosure:(id)disclosure disclaimerText:(id)text;
- (id)allowedCredentialsFromSupportedContainers:(id)containers;
- (void)logExposureForProactiveCheckout;
- (void)logExposureShouldSkipCvvStepUpWithReceiverId;
- (BOOL)isAddressTypeaheadEnabled:(BOOL)enabled;
- (id)brandingUpdateTopics;
- (BOOL)isIncentiveBloksScreenEnabled;
- (long long)getButtonCTA;
- (BOOL)isMerchantUsingInjectedJS;
- (BOOL)isDynamicComponentsEnabled;
- (id)mergeInjectedJSPaymentRequestWith:(id)with;
- (BOOL)canHandleCheckoutUpdateEvent:(id)event paymentTotalCallback:(id /* block */)callback transactionInfoCallback:(id /* block */)callback;
- (BOOL)canHandlePaymentCompletion:(id)completion ecpContext:(id)context orderId:(id)id paymentMethod:(id)method error:(id)error callback:(id /* block */)callback;
- (void)cleanupPaymentSession;
- (void)fbPayDisclosureView:(id)view presentURL:(id)url;
- (void)browserControllerDidFinish:(id)finish url:(id)url;
- (void)browserControllerDidChange:(id)change url:(id)url;
- (void)browserControllerDidCancel:(id)cancel;
@end

#endif /* MetaPaySDKProductConfiguration_h */
