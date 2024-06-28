//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPaymentMethodComponent_h
#define FBPayPaymentMethodComponent_h
@import Foundation;

#include "FBPayCardBillingAddress.h"
#include "FBPayComponentCellViewModel.h"
#include "FBPayComponentDataFetchingResponse.h"
#include "FBPayComponentExpandedCell.h"
#include "FBPayComponentInlineCell.h"
#include "FBPayComponentInlineCellViewConfig.h"
#include "FBPayComponentPaymentMethodFormViewModel.h"
#include "FBPayComponentPaymentMethodSelectionDetailedViewController.h"
#include "FBPayComponentPaymentMethodSelectionViewController.h"
#include "FBPayExpressCheckoutBaseViewController.h"
#include "FBPayExpressCheckoutContext.h"
#include "FBPayExpressCheckoutErrorHandler.h"
#include "FBPayExpressCheckoutLogger.h"
#include "FBPayExpressCheckoutPaymentRequest.h"
#include "FBPayFormFieldsForCountry.h"
#include "FBPayLoadingAnimationButton.h"
#include "FBPayNewPaymentCredentialOption.h"
#include "FBPayPaymentMethod.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol FBPayComponentCellResizingDelegate, FBPayComponentExpandedCellFocusDelegate, FBPayComponentFormViewControllerUpdateMutatingRequestDelegate, FBPayComponentMenuActionFormProviding, FBPayComponentResetExpandedCellMaskedCornersDelegate, FBPayComponentUpdateUnfilledComponentsDelegate, FBPayPaymentMethodComponentDelegate, FBPaySecurityStaticAuthenticating;

@interface FBPayPaymentMethodComponent : NSObject<NSObject> {
  /* instance variables */
  FBPayExpressCheckoutPaymentRequest *_paymentRequest;
  FBPayExpressCheckoutContext *_ecpContext;
  FBPayComponentExpandedCell *_expandedCell;
  FBPayComponentCellViewModel *_inlineCellViewModel;
  FBPayComponentInlineCellViewConfig *_inlineCellViewConfig;
  FBPayComponentInlineCell *_inlineCell;
  FBPayComponentDataFetchingResponse *_componentDataResponse;
  NSArray *_allPaymentMethods;
  NSArray *_unsupportedPaymentMethods;
  NSArray *_newPaymentCredentialOptions;
  FBPayPaymentMethod *_currentPaymentMethodToBeEdited;
  FBPayPaymentMethod *_currentSelectedPaymentMethod;
  FBPayCardBillingAddress *_missingBillingFormBillingAddress;
  FBPayFormFieldsForCountry *_formFieldsForCountry;
  NSArray *_cardFormFields;
  BOOL _shouldUseCardArtStyling;
  BOOL _shouldUpdateInlineCellViewModelOnCollapse;
  FBPayComponentPaymentMethodSelectionDetailedViewController *_paymentMethodSelectionDetailedViewController;
  FBPayComponentPaymentMethodSelectionViewController *_selectionVC;
  FBPayComponentPaymentMethodFormViewModel *_nuxFormViewModel;
  FBPayExpressCheckoutBaseViewController *_componentFormViewControllerForMenuAction;
  FBPayLoadingAnimationButton *_linkNewCredentialButton;
  FBPayNewPaymentCredentialOption *_currentlySelectedNewCredential;
  FBPayExpressCheckoutLogger *_logger;
  BOOL _didAlreadyLogInitialLoad;
  NSString *_userId;
  NSObject<FBPaySecurityStaticAuthenticating> *_staticAuthenticationFlowManager;
  BOOL _isUnfilled;
  BOOL _isTempFirstUnfilledSection;
  BOOL _isUserInteractionEnabled;
  BOOL _isSelectedPaymentMethodUsingShippingAsBilling;
  BOOL _shouldOrderNewOptionsFirst;
  BOOL _shouldDeprioritizeCreditCards;
  BOOL _didAlreadyRenderNUXForm;
  BOOL _shouldEnableMissingBillingOptimization;
  NSObject<FBPayComponentFormViewControllerUpdateMutatingRequestDelegate> *_mutatingRequestDelegate;
}

@property (weak, nonatomic) NSObject<FBPayPaymentMethodComponentDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) FBPayExpressCheckoutErrorHandler *errorHandler;
@property (weak, nonatomic) NSObject<FBPayComponentCellResizingDelegate> *cellResizingDelegate;
@property (weak, nonatomic) NSObject<FBPayComponentMenuActionFormProviding> *menuActionFormProvidingDelegate;
@property (weak, nonatomic) NSObject<FBPayComponentResetExpandedCellMaskedCornersDelegate> *resetExpandedCellMaskedCornersDelegate;
@property (weak, nonatomic) NSObject<FBPayComponentUpdateUnfilledComponentsDelegate> *updateUnfilledComponentDelegate;
@property (weak, nonatomic) NSObject<FBPayComponentExpandedCellFocusDelegate> *focusDelegate;
@property (nonatomic) BOOL isFirstUnfilledSection;

/* instance methods */
- (id)initWithPaymentRequest:(id)request ecpContext:(id)context;
- (void)updateBillingAndPayOrTriggerInputFieldErrors;
- (void)_updateInlineCellViewModel;
- (id)_getInlineCellSecondaryTextForShippingAsBillingOptimization;
- (BOOL)_canAllowSaveShippingAsBillingForPaymentMethod:(id)method;
- (BOOL)_areAllCardsMissingBillingAddress;
- (BOOL)_isAtLeastOnePaymentMethodMissingBillingAddress;
- (void)_startPaymentProcessing;
- (BOOL)_shouldDisplayMissingBillingOptimizationExperience;
- (void)_maybeLogExposureForMissingBillingOptimization;
- (long long)componentType;
- (id)componentCellForUXStatus:(BOOL)uxstatus;
- (void)initiateComponentDataFetchFromTriggeringSource:(long long)source;
- (void)updateWithPaymentRequest:(id)request;
- (BOOL)isUnfilled;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (BOOL)hasInlineError;
- (id)provideComponentSelectionOrFormViewController;
- (void)logComponentLoadInitWithUXStatus:(long long)uxstatus;
- (void)logComponentLoadFailWithUXStatus:(long long)uxstatus;
- (void)logComponentLoadSuccessWithUXStatus:(long long)uxstatus;
- (void)cleanupInlineCellForPUX;
- (void)reloadAutoAdvanceCTAButton;
- (void)triggerNuxFormFieldErrorStates;
- (void)fbpayLoadingAnimationButtonDidTap:(id)tap;
- (void)fbpayLoadingAnimationPausedAtSpinningLock:(id)lock;
- (void)presentSlowProcessingDialog:(id)dialog;
- (void)paymentMethodSelectionViewController:(id)controller didSelectNewPaymentMethod:(id)method updatedAllPaymentMethods:(id)methods;
- (void)paymentMethodSelectionViewController:(id)controller didNeedToPerformMutationWithRequest:(id)request mutatingCallback:(id /* block */)callback;
- (void)paymentMethodSelectionViewController:(id)controller didClickOnAddNewCredentialWithNewCredential:(id)credential completionCallback:(id /* block */)callback;
- (void)paymentMethodSelectionViewController:(id)controller didReceiveUserFacingError:(id)error;
- (id)paymentMethodSelectionViewControllerBillingAddressSuggestions;
- (void)fbpayComponentFormViewController:(id)controller didHaveComponentDataMutatingRequest:(id)request mutatingCallback:(id /* block */)callback;
- (void)fbpayComponentFormViewController:(id)controller presentUserFacingError:(id)error;
- (void)fbpayFormCellViewModel:(id)model changedFocusTo:(BOOL)to;
- (void)fbpayFormViewControllerDidUpdate:(id)update isReadyToSave:(BOOL)save;
- (void)detailedViewDidProvideFormViewModel:(id)model;
- (void)didToggleCellExpandedWithState:(BOOL)state;
- (void)expandedCellDidHaveNewHeight;
- (void)expandedCellDidReceiveFocus;
- (void)paymentMethodSelectionDetailedViewController:(id)controller didSelectNewPaymentMethod:(id)method updatedAllPaymentMethods:(id)methods;
- (void)paymentMethodSelectionDetailedViewController:(id)controller didRemovePaymentMethod:(id)method completionCallback:(id /* block */)callback loadingCallback:(id /* block */)callback;
- (void)paymentMethodSelectionDetailedViewController:(id)controller didClickOnAddNewCredentialWithNewCredential:(id)credential completionCallback:(id /* block */)callback;
- (id)paymentMethodSelectionDetailedViewBillingAddressSuggestions;
- (void)updateCurrentPaymentMethodToBeEdited:(id)edited;
- (BOOL)paymentMethodSelectionDetailedViewShouldSetSaveShippingAsBillingCheckboxValueForPaymentMethod:(id)method;
- (void)paymentMethodSelectionDetailedViewShouldPresentUserFacingError:(id)error;
- (void)paymentMethodSelectionDetailedViewDidUpdateBillingAddressWithDataMutatingRequest:(id)request mutatingCallback:(id /* block */)callback;
- (void)fbpayComponentFormViewControllerShouldPresentURL:(id)url;
- (void)fbpayComponentFormViewControllerShouldPresentViewController:(id)controller;
- (void)fbpayComponentFormViewController:(id)controller dataMutatingRequest:(id)request;
- (void)detailedViewShouldTriggerAutoAdvance;
- (BOOL)isCurrentlyInAPMFlow;
- (void)didTapAPMChangeMethodButton;
- (void)didSelectBillingCheckboxWithValue:(BOOL)value;
- (id)getUserSelectedShippingAddress;
@end

#endif /* FBPayPaymentMethodComponent_h */