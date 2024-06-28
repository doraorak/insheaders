//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayContactInformationComponent_h
#define FBPayContactInformationComponent_h
@import Foundation;

#include "FBPayComponentCellViewModel.h"
#include "FBPayComponentContactInfoGeneralFormViewModel.h"
#include "FBPayComponentContactInfoSelectionDetailedViewController.h"
#include "FBPayComponentContactInfoSelectionDetailedViewViewModel.h"
#include "FBPayComponentDataFetchingResponse.h"
#include "FBPayComponentExpandedCell.h"
#include "FBPayComponentInlineCell.h"
#include "FBPayComponentInlineCellViewConfig.h"
#include "FBPayExpressCheckoutBaseViewController.h"
#include "FBPayExpressCheckoutContext.h"
#include "FBPayExpressCheckoutErrorHandler.h"
#include "FBPayExpressCheckoutLogger.h"
#include "FBPayExpressCheckoutPaymentRequest.h"
#include "FBPayExpressCheckoutReturnFields.h"
#include "FBPayFormField.h"
#include "FBPaymentsContactInfoEmailDataModel.h"
#include "FBPaymentsContactInfoPhoneNumberDataModel.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol FBPayComponentCellResizingDelegate, FBPayComponentExpandedCellFocusDelegate, FBPayComponentFormViewControllerUpdateMutatingRequestDelegate, FBPayComponentMenuActionFormProviding, FBPayComponentResetExpandedCellMaskedCornersDelegate, FBPayComponentUpdateUnfilledComponentsDelegate, FBPayContactInformationComponentDelegate;

@interface FBPayContactInformationComponent : NSObject<NSObject> {
  /* instance variables */
  FBPayExpressCheckoutPaymentRequest *_paymentRequest;
  FBPayExpressCheckoutContext *_ecpContext;
  FBPayComponentCellViewModel *_inlineCellViewModel;
  FBPayComponentInlineCellViewConfig *_inlineCellViewConfig;
  FBPayComponentInlineCell *_inlineCell;
  FBPayExpressCheckoutLogger *_logger;
  BOOL _didAlreadyLogComponentLoad;
  FBPayComponentDataFetchingResponse *_componentDataResponse;
  NSString *_payerName;
  FBPaymentsContactInfoEmailDataModel *_selectedEmail;
  FBPaymentsContactInfoPhoneNumberDataModel *_selectedPhoneNumber;
  NSArray *_allEmails;
  NSArray *_allPhones;
  FBPayFormField *_payerNameFormFieldConfig;
  FBPayFormField *_emailFormFieldConfig;
  FBPayFormField *_phoneFormFieldConfig;
  FBPayExpressCheckoutReturnFields *_returnFields;
  BOOL _isUnfilled;
  BOOL _isTempFirstUnfilledSection;
  BOOL _isUserInteractionEnabled;
  BOOL _didAlreadyRenderNUXForm;
  FBPayComponentExpandedCell *_expandedCell;
  FBPayComponentContactInfoSelectionDetailedViewController *_contactInfoSelectionDetailedViewController;
  FBPayComponentContactInfoGeneralFormViewModel *_nuxFormViewModel;
  FBPayComponentContactInfoSelectionDetailedViewViewModel *_detailedViewViewModel;
  FBPayExpressCheckoutBaseViewController *_componentFormViewControllerForMenuAction;
  NSObject<FBPayComponentFormViewControllerUpdateMutatingRequestDelegate> *_mutatingRequestDelegate;
}

@property (weak, nonatomic) NSObject<FBPayContactInformationComponentDelegate> *delegate;
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
- (long long)_numberOfMissingFields;
- (long long)componentType;
- (id)componentCellForUXStatus:(BOOL)uxstatus;
- (void)initiateComponentDataFetchFromTriggeringSource:(long long)source;
- (void)updateWithPaymentRequest:(id)request;
- (BOOL)isUnfilled;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (id)provideComponentSelectionOrFormViewController;
- (void)reloadAutoAdvanceCTAButton;
- (void)triggerNuxFormFieldErrorStates;
- (void)contactInfoSelectionViewController:(id)controller didHaveUpdatedPayerName:(id)name selectedEmail:(id)email selectedPhone:(id)phone updatedAllEmails:(id)emails updatedallPhones:(id)phones;
- (void)contactInfoSelectionViewController:(id)controller didNeedToPerformMutationWithRequest:(id)request mutatingCallback:(id /* block */)callback;
- (void)fbpayComponentFormViewController:(id)controller didHaveComponentDataMutatingRequest:(id)request mutatingCallback:(id /* block */)callback;
- (void)didToggleCellExpandedWithState:(BOOL)state;
- (void)expandedCellDidReceiveFocus;
- (void)detailedViewDidProvideFormViewModel:(id)model;
- (void)contactInfoSelectionDetailedViewController:(id)controller didHaveUpdatedPayerName:(id)name selectedEmail:(id)email selectedPhone:(id)phone updatedAllEmails:(id)emails updatedAllPhones:(id)phones;
- (void)contactInfoSelectionDetailedViewController:(id)controller didRemovePayerName:(id)name completionCallback:(id /* block */)callback;
- (void)contactInfoSelectionDetailedViewController:(id)controller didRemoveEmail:(id)email completionCallback:(id /* block */)callback loadingCallback:(id /* block */)callback;
- (void)contactInfoSelectionDetailedViewController:(id)controller didRemovePhoneNumber:(id)number completionCallback:(id /* block */)callback loadingCallback:(id /* block */)callback;
- (void)fbpayComponentFormViewControllerShouldPresentURL:(id)url;
- (void)fbpayComponentFormViewControllerShouldPresentViewController:(id)controller;
- (void)fbpayComponentFormViewController:(id)controller dataMutatingRequest:(id)request;
- (void)detailedViewShouldTriggerAutoAdvance;
@end

#endif /* FBPayContactInformationComponent_h */