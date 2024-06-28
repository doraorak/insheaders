//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentShippingAddressSelectionViewController_h
#define FBPayComponentShippingAddressSelectionViewController_h
@import Foundation;

#include "FBPayExpressCheckoutBaseViewController.h"
#include "FBPayExpressCheckoutContext.h"
#include "FBPayExpressCheckoutErrorHandler.h"
#include "FBPayExpressCheckoutFieldErrorsHandler.h"
#include "FBPayExpressCheckoutNavigationBarConfig.h"
#include "FBPayExpressCheckoutPaymentRequest.h"
#include "FBPayFormFieldsForCountry.h"
#include "FBPayUPLLoggingAPI-Protocol.h"
#include "FBPaymentsShippingAddress.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UITableView;
@protocol FBPayComponentShippingAddressSelectionViewControllerDelegate;

@interface FBPayComponentShippingAddressSelectionViewController : FBPayExpressCheckoutBaseViewController<UITableViewDelegate, UITableViewDataSource> {
  /* instance variables */
  FBPayExpressCheckoutNavigationBarConfig *_editModeNavBarConfig;
  FBPayExpressCheckoutNavigationBarConfig *_doneModeNavBarConfig;
  FBPayExpressCheckoutNavigationBarConfig *_noneModeNavBarConfig;
  BOOL _isRadioButtonsMode;
  NSMutableArray *_shippingAddressesForSelection;
  double _numberOfShippingAddressesBeingDisplayedForBillingAddressSuggestions;
  UITableView *_shippingAddressesSelectionTableView;
  FBPayFormFieldsForCountry *_shippingAddressFormFields;
  NSIndexPath *_indexPathBeingEdited;
  FBPayExpressCheckoutErrorHandler *_errorHandler;
  FBPayExpressCheckoutFieldErrorsHandler *_fieldErrorsHandler;
  NSObject<FBPayUPLLoggingAPI> *_logger;
  double _maxContentHeight;
  BOOL _scrollingEnabled;
  BOOL _shouldEnableOSAutofill;
  BOOL _isRepresentationTypeBillingAddressSuggestion;
  FBPayExpressCheckoutContext *_ecpContext;
  FBPayExpressCheckoutPaymentRequest *_paymentRequest;
  BOOL _isBillingAddressSuggestionSeeMoreButtonToggled;
  FBPaymentsShippingAddress *_currentlySelectedShippingAddress;
}

@property (weak, nonatomic) NSObject<FBPayComponentShippingAddressSelectionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFBPayExpressNavigationBarConfig:(id)config shippingAddressesForSelection:(id)selection currentlySelectedShippingAddress:(id)address shippingAddressFormFields:(id)fields errorHandler:(id)handler logger:(id)logger maxContentHeight:(double)height representationType:(long long)type shouldEnableOSAutofill:(BOOL)osautofill ecpContext:(id)context paymentRequest:(id)request fieldsErrorHandler:(id)handler;
- (void)viewWillAppear:(BOOL)appear;
- (void)updateHairlineSpacing:(double)spacing;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)userDidTapLeftBarButtonItem;
- (void)userDidTapRightBarButtonItem;
- (void)userDidTapUIElementToPushNewVC:(id)vc heightChangingOption:(long long)option;
- (void)updateNavigationBarConfig:(id)config;
- (void)_billingAddressSuggestionSeeMoreButtonToggleHandler:(id)handler;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (void)fbpayComponentFormViewController:(id)controller didHaveComponentDataMutatingRequest:(id)request mutatingCallback:(id /* block */)callback;
- (double)totalViewHeight;
@end

#endif /* FBPayComponentShippingAddressSelectionViewController_h */
