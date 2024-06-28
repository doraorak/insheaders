//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CheckoutShopifyUPLLogger_h
#define CheckoutShopifyUPLLogger_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"

@class NSNumber, NSString;

@interface CheckoutShopifyUPLLogger : NSObject {
  /* instance variables */
  BOOL _isDarkMode;
  int _paymentType;
}

@property (retain, nonatomic) NSObject<FBAnalyticsLogging> *logger;
@property (retain, nonatomic) NSString *shoppingSessionId;
@property (retain, nonatomic) NSString *externalSessionId;
@property (retain, nonatomic) NSString *navChain;
@property (retain, nonatomic) NSString *adId;
@property (retain, nonatomic) NSString *clickSource;
@property (readonly, nonatomic) NSNumber *sellerId;

/* instance methods */
- (id)initWithLogger:(id)logger paymentType:(id)type shoppingSessionId:(id)id externalSessionId:(id)id navChain:(id)chain adId:(id)id clickSource:(id)source;
- (id)initWithLogger:(id)logger paymentType:(id)type shoppingSessionId:(id)id externalSessionId:(id)id navChain:(id)chain adId:(id)id clickSource:(id)source sellerId:(id)id;
- (void)openBloksActionLogWithCheckoutSessionId:(id)id trackingCodesJSON:(id)json merchantDomain:(id)domain isIABAdsContextValid:(BOOL)valid;
- (void)availabilityRequestInitLogWithTrackingCodesJSON:(id)json merchantDomain:(id)domain isIABAdsContextValid:(BOOL)valid;
- (void)availabilityRequestFailLogWithTrackingCodesJSON:(id)json merchantDomain:(id)domain isIABAdsContextValid:(BOOL)valid error:(id)error;
- (void)availabilityRequestSuccessLogWithTrackingCodesJSON:(id)json merchantDomain:(id)domain isIABAdsContextValid:(BOOL)valid metaCheckoutExperienceType:(id)type;
- (void)checkoutDismissLog:(id)log;
- (void)disclaimerClickLog;
- (void)disclaimerDisplayLogWithShowMerchantBranding:(BOOL)branding;
- (void)checkoutloadingLog:(id)log sourceUrl:(id)url;
- (void)optoutRedirectLogWithTrackingCodesJSON:(id)json merchantDomain:(id)domain visitToken:(id)token orderId:(id)id checkoutSessionId:(id)id;
- (void)onCheckoutStateChange:(id)change checkoutUrl:(id)url payload:(id)payload sdkVersion:(id)version;
- (void)onCheckoutInit:(id)init checkoutUrl:(id)url sdkVersion:(id)version;
- (void)onCheckoutError:(id)error checkoutUrl:(id)url sdkVersion:(id)version errorPayload:(id)payload;
- (void)onCheckoutLoadInit:(id)init checkoutUrl:(id)url sdkVersion:(id)version;
- (void)onCheckoutLoadSuccess:(id)success checkoutUrl:(id)url sdkVersion:(id)version initPayload:(id)payload;
- (void)onCartUpdateInit:(id)init checkoutUrl:(id)url sdkVersion:(id)version lineId:(id)id quantity:(id)quantity;
- (void)placeOrderInit:(id)init checkoutUrl:(id)url sdkVersion:(id)version tokenExists:(BOOL)exists;
- (void)placeOrderSuccess:(id)success checkoutUrl:(id)url sdkVersion:(id)version checkoutCompletePayload:(id)payload;
- (void)logClientLoadInit:(id)init targetName:(id)name checkoutUrl:(id)url sdkVersion:(id)version initPayload:(id)payload;
- (void)onCheckoutOptOutSuccess:(id)success checkoutUrl:(id)url sdkVersion:(id)version;
- (void)onHandlePayButtonStateChange:(id)change checkoutUrl:(id)url sdkVersion:(id)version buttonState:(id)state;
- (void)onHandleExpandCheckoutView:(id)view checkoutUrl:(id)url sdkVersion:(id)version shouldExpandView:(BOOL)view;
- (void)onCheckoutStarted:(id)started checkoutUrl:(id)url checkoutStatePayload:(id)payload sdkVersion:(id)version;
- (void)continueCheckoutWithDecision:(BOOL)decision checkoutSessionId:(id)id checkoutUrl:(id)url sdkVersion:(id)version;
- (void)continueCheckoutWithDummyCallback:(id)callback checkoutUrl:(id)url sdkVersion:(id)version;
- (void)logAddUTMSuccess:(id)utmsuccess;
- (void)logShopifyCheckoutURLInterceptionInit:(id)init checkoutURLPatterns:(id)urlpatterns;
- (void)logShopifyCheckoutURLInterceptionSuccess:(id)success checkoutURLPatterns:(id)urlpatterns;
- (void)logShopifyCheckoutURLInterceptionFail:(id)fail checkoutURLPatterns:(id)urlpatterns;
- (id)_stringifyBool:(BOOL)bool;
- (id)_toJsonString:(id)string;
- (BOOL)_isOnsiteCheckoutShopifySDKPaymentType;
- (BOOL)_isMetaCheckoutShopifySDKPaymentType;
- (id)_defaultViewName:(int)name;
- (id)_defaultTargetName:(int)name;
@end

#endif /* CheckoutShopifyUPLLogger_h */
