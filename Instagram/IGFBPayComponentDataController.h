//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBPayComponentDataController_h
#define IGFBPayComponentDataController_h
@import Foundation;

#include "FBPayComponentDataFetchCacheConfig.h"
#include "FBPayPTTStringService.h"
#include "FBPayUPLLoggingAPI-Protocol.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;

@interface IGFBPayComponentDataController : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_session;
  NSObject<FBPayUPLLoggingAPI> *_logger;
  FBPayComponentDataFetchCacheConfig *_prewarmCacheConfig;
  FBPayComponentDataFetchCacheConfig *_prefetchAndRegularCacheConfig;
  FBPayComponentDataFetchCacheConfig *_uxDeterminationCacheConfig;
  FBPayComponentDataFetchCacheConfig *_alwaysJustFetchFromNetworkCacheConfig;
  FBPayPTTStringService *_pttStringService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session logger:(id)logger;
- (void)loadAddressTypeaheadSuggestionsWithQueryInput:(id)input country:(id)country maxResults:(id)results paymentProductId:(id)id sessionId:(id)id uplSessionId:(id)id attributionIconScale:(id)scale loggingPolicy:(id)policy callback:(id /* block */)callback;
- (void)loadAddressTypeaheadDetailsWithAddressId:(id)id paymentProductId:(id)id sessionId:(id)id uplSessionId:(id)id loggingPolicy:(id)policy callback:(id /* block */)callback;
- (void)determineUXStatusForFBPayComponent:(long long)component requestFields:(id)fields shouldOnlyCheckCache:(BOOL)cache productId:(id)id receiverId:(id)id paymentEnvironment:(long long)environment callback:(id /* block */)callback;
- (void)determineAvailabilityFromUserDataForProductId:(id)id receiverId:(id)id callback:(id /* block */)callback;
- (void)prewarmDataForFBPayComponent:(long long)component productId:(id)id receiverId:(id)id callback:(id /* block */)callback;
- (void)prefetchDataForFBPayComponent:(long long)component productId:(id)id receiverId:(id)id actionTypes:(id)types supportedContainerTypes:(id)types paymentContainerModeEnum:(id)enum productData:(id)data callback:(id /* block */)callback;
- (void)prefetchFBPayComponentDataQueryCacheForProductId:(id)id receiverId:(id)id actionTypes:(id)types supportedContainerTypes:(id)types callback:(id /* block */)callback;
- (void)fetchRegularDataforFBPayComponents:(id)components paymentRequest:(id)request oneTimeCheckoutModel:(id)model triggeringSource:(long long)source successCallback:(id /* block */)callback failureCallback:(id /* block */)callback;
- (void)defaultCachedPaymentMethodForProductId:(id)id receiverId:(id)id callback:(id /* block */)callback;
- (void)requestPaymentContainerWithPaymentRequest:(id)request paymentMethod:(id)method isSelectedCredentialUsingShippingAsBilling:(BOOL)billing shippingAddress:(id)address orderId:(id)id pttString:(id)string returnFields:(id)fields isGuestCheckout:(BOOL)checkout oneTimeCheckoutModel:(id)model payButtonClickId:(id)id stepUpCompletedToken:(id)token completionBlock:(id /* block */)block errorBlock:(id /* block */)block;
- (void)mutateFBPayComponentDataWithRequest:(id)request productId:(id)id clientReceiverId:(id)id platformTrustToken:(id)token shouldSkipValidation:(BOOL)validation isPUXFlow:(BOOL)puxflow completionBlock:(id /* block */)block;
- (void)convertPayPalBillingAgreementToCIBWithPayPalBAId:(id)baid productId:(id)id callback:(id /* block */)callback;
@end

#endif /* IGFBPayComponentDataController_h */