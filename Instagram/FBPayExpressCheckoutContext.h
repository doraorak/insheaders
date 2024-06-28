//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutContext_h
#define FBPayExpressCheckoutContext_h
@import Foundation;

#include "FBPayExpressCheckoutOneTimeCheckoutConfiguration.h"
#include "FBPayExpressCheckoutOneTimeCheckoutModel.h"
#include "FBPayUPLLoggingAPI-Protocol.h"

@class BKObjectSet, NSArray, NSString;
@protocol FBPayBottomSheetControlling, FBPayComponentNetworking, FBPayPayPalNetworking;

@interface FBPayExpressCheckoutContext : NSObject {
  /* instance variables */
  FBPayExpressCheckoutOneTimeCheckoutModel *_anonymousCheckoutModel;
  FBPayExpressCheckoutOneTimeCheckoutModel *_paypalOneTimeCheckoutModel;
  BOOL _isPUXFlow;
  BOOL _isSavingShippingAsBillingSupported;
  BOOL _shouldShowAddressTypeahead;
  BOOL _isMetaPayExperienceEnabled;
  BOOL _isBillingAddressSuggestionSupported;
  BOOL _shouldShowCardArtForTokenizedCredentials;
  BOOL _shouldEnableUiProcessor;
  BOOL _isMultiPromoCodeEnabled;
  BOOL _isBloksIncentiveScreenEnabled;
  BOOL _shouldDisablePaypalOTC;
  BOOL _isThreeDSSupported;
  BOOL _isProactiveCheckout;
  BOOL _isCurrentlyInOtherCheckoutOptions;
  BOOL _isTypeaheadSelected;
  NSObject<FBPayPayPalNetworking> *_fbpayPayPalDataController;
  NSObject<FBPayComponentNetworking> *_fbpayComponentDataController;
  NSObject<FBPayBottomSheetControlling> *_bottomSheetController;
  BKObjectSet *_bloksObjectSet;
  long long _uxStatus;
  FBPayExpressCheckoutOneTimeCheckoutConfiguration *_oneTimeCheckoutConfiguration;
  FBPayExpressCheckoutOneTimeCheckoutModel *_oneTimeCheckoutModel;
}

@property (readonly, nonatomic) NSObject<FBPayUPLLoggingAPI> *logger;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL shouldEnableOSAutofill;
@property (readonly, nonatomic) NSArray *eventHandlingComponents;
@property (readonly, nonatomic) BOOL shouldPresentProactiveCheckoutBanner;

/* instance methods */
- (id)initWithLogger:(id)logger fbpayComponentDataController:(id)controller fbpayPayPalDataController:(id)controller bottomSheetController:(id)controller userId:(id)id oneTimeCheckoutConfiguration:(id)configuration bloksObjectSet:(id)set isPUXFlow:(BOOL)puxflow uxStatus:(long long)status isSavingShippingAsBillingSupported:(BOOL)supported shouldShowAddressTypeahead:(BOOL)typeahead isThreeDSSupported:(BOOL)dssupported eventHandlingComponents:(id)components shouldEnableOSAutofill:(BOOL)osautofill isMetaPayExperienceEnabled:(BOOL)enabled isProactiveCheckout:(BOOL)checkout shouldPresentProactiveCheckoutBanner:(BOOL)banner isBillingAddressSuggestionSupported:(BOOL)supported shouldShowCardArtForTokenizedCredentials:(BOOL)credentials shouldEnableUiProcessor:(BOOL)processor isMultiPromoCodeEnabled:(BOOL)enabled;
@end

#endif /* FBPayExpressCheckoutContext_h */