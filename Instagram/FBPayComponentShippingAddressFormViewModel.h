//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentShippingAddressFormViewModel_h
#define FBPayComponentShippingAddressFormViewModel_h
@import Foundation;

#include "FBPayFormViewModel.h"
#include "FBPayExpressCheckoutContext.h"
#include "FBPayExpressCheckoutOneTimeCheckoutModel.h"
#include "FBPayExpressCheckoutPaymentRequest.h"
#include "FBPayFormFieldsForCountry.h"
#include "FBPayFormHeaderConfiguration.h"
#include "FBPayFormSectionConfiguration.h"
#include "FBPayFormViewConfiguration.h"
#include "FBPayFormViewLifeCycleDelegate-Protocol.h"
#include "FBPayUPLLoggingAPI-Protocol.h"
#include "FBPaymentsShippingAddress.h"

@class NSArray, NSMutableArray, NSNumber, NSSet, NSString;
@protocol FBPayViewStyleConfiguring;

@interface FBPayComponentShippingAddressFormViewModel : FBPayFormViewModel<FBPayFormViewLifeCycleDelegate> {
  /* instance variables */
  FBPayFormHeaderConfiguration *_headerConfiguration;
  FBPayFormFieldsForCountry *_formFieldsForCountry;
  FBPaymentsShippingAddress *_address;
  long long _mutationType;
  BOOL _shouldSetDefault;
  FBPayExpressCheckoutOneTimeCheckoutModel *_oneTimeCheckoutModel;
  FBPayFormSectionConfiguration *_inputSection;
  FBPayFormSectionConfiguration *_saveButtonSection;
  FBPayFormSectionConfiguration *_termsSection;
  FBPayFormSectionConfiguration *_removeButtonSection;
  NSMutableArray *_layouts;
  FBPayFormViewConfiguration *_configuration;
  NSObject<FBPayUPLLoggingAPI> *_logger;
  NSObject<FBPayViewStyleConfiguring> *_viewStyleConfiguring;
  BOOL _shouldEnableOSAutofill;
  FBPayExpressCheckoutContext *_ecpContext;
  BOOL _shouldCancelAddressFetchAction;
  BOOL _manualAddressEntryOn;
  NSString *_countryCode;
  NSString *_addressTypeaheadSessionId;
  FBPayExpressCheckoutPaymentRequest *_paymentRequest;
  NSArray *_filledFields;
  NSNumber *_userInputLen;
  BOOL _isReadyToSave;
  BOOL _shouldEnableFormBorder;
  BOOL _isNuxForm;
  NSSet *_invalidFieldIds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHeaderConfiguration:(id)configuration formFieldsForCountry:(id)country shippingAddress:(id)address shouldSetDefault:(BOOL)default oneTimeCheckoutModel:(id)model logger:(id)logger shouldEnableOSAutofill:(BOOL)osautofill ecpContext:(id)context paymentRequest:(id)request shouldEnableFormBorder:(BOOL)border invalidFieldIds:(id)ids;
- (void)reload;
- (void)reloadSaveButtonSection;
- (void)logAddEventForInlineForm;
- (id)mutationRequestToExecute;
- (void)_onRemove;
- (BOOL)hasUnsavedUserInputData;
- (void)setViewController:(id)controller;
- (void)fbpayFormViewControllerViewDidLoad:(id)load;
- (void)fbpayFormViewControllerViewDidAppear:(id)appear;
- (void)save;
- (BOOL)shouldEnableOSAutofill;
- (id)getLogger;
- (void)didSelectAddressTypeaheadDropdownCardWithAddress:(id)address withManualEntry:(BOOL)entry atIndex:(unsigned long long)index;
- (void)formCellTextDidChange:(id)change withText:(id)text;
- (void)didUnfocusFormCell:(id)cell;
- (void)didFocusFormCell:(id)cell;
- (void)didStartScrolling:(id)scrolling;
@end

#endif /* FBPayComponentShippingAddressFormViewModel_h */