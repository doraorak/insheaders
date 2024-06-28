//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPickupFulfillmentOptionsComponent_h
#define FBPayPickupFulfillmentOptionsComponent_h
@import Foundation;

#include "FBPayFulfillmentOptionsComponent.h"
#include "FBPayComponentCellViewModel.h"
#include "FBPayComponentExpandedCell.h"
#include "FBPayComponentFormViewController.h"
#include "FBPayComponentInlineCell.h"
#include "FBPayComponentInlineCellViewConfig.h"
#include "FBPayComponentPickupOptionFormViewModel.h"
#include "FBPayComponentPickupOptionsSelectionDetailedViewController.h"
#include "FBPayExpressCheckoutContext.h"
#include "FBPayExpressCheckoutErrorHandler.h"
#include "FBPayExpressCheckoutLogger.h"
#include "FBPayExpressCheckoutPickupFulfillmentOption.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol FBPayComponentCellResizingDelegate, FBPayComponentExpandedCellFocusDelegate, FBPayComponentMenuActionFormProviding, FBPayComponentResetExpandedCellMaskedCornersDelegate, FBPayComponentUpdateUnfilledComponentsDelegate;

@interface FBPayPickupFulfillmentOptionsComponent : FBPayFulfillmentOptionsComponent<NSObject> {
  /* instance variables */
  FBPayExpressCheckoutContext *_ecpContext;
  FBPayComponentPickupOptionFormViewModel *_pickupOptionFormViewModel;
  FBPayComponentFormViewController *_changePickupOptionViewController;
  FBPayComponentCellViewModel *_inlineCellViewModel;
  FBPayComponentExpandedCell *_expandedCell;
  FBPayComponentInlineCellViewConfig *_inlineCellViewConfig;
  FBPayComponentPickupOptionsSelectionDetailedViewController *_pickupByDetailedViewController;
  NSArray *_pickupOptions;
  NSString *_pickupRadiusZipCode;
  FBPayExpressCheckoutPickupFulfillmentOption *_selectedPickupOption;
  BOOL _shouldShowPrice;
  BOOL _didHandleInitialPickupRadiusZipCode;
  FBPayComponentInlineCell *_inlineCellForItemList;
  FBPayComponentCellViewModel *_inlineCellViewModelForItemList;
  FBPayComponentInlineCellViewConfig *_inlineCellViewConfigForItemList;
  FBPayExpressCheckoutLogger *_logger;
  BOOL _isFirstUnfilledSection;
  NSObject<FBPayComponentResetExpandedCellMaskedCornersDelegate> *_resetExpandedCellMaskedCornersDelegate;
  NSObject<FBPayComponentUpdateUnfilledComponentsDelegate> *_updateUnfilledComponentDelegate;
  NSObject<FBPayComponentCellResizingDelegate> *_cellResizingDelegate;
  FBPayExpressCheckoutErrorHandler *_errorHandler;
  NSObject<FBPayComponentMenuActionFormProviding> *_menuActionFormProvidingDelegate;
  NSObject<FBPayComponentExpandedCellFocusDelegate> *_focusDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPaymentRequest:(id)request ecpContext:(id)context;
- (BOOL)isUnfilled;
- (void)setIsFirstUnfilledSection:(BOOL)section;
- (id)componentCellForUXStatus:(BOOL)uxstatus;
- (void)_updateExpandedCell:(BOOL)cell;
- (id)componentCellForItemList;
- (void)_updateInlineCellForItemListWithMerchantText:(id)text;
- (void)updateWithPaymentRequest:(id)request;
- (void)_handleInitialPickupRadiusZipCodeSelection;
- (void)_updatePickupRadiusZipCodeWithCurrentLocation;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (void)triggerNuxFormFieldErrorStates;
- (void)didToggleCellExpandedWithState:(BOOL)state;
- (void)expandedCellDidReceiveFocus;
- (id)provideComponentSelectionOrFormViewController;
- (void)changeButtonWasTapped;
- (void)fbPayComponentPickupOptionSelectionFormViewModel:(id)model didSelectNewFulfillmentOption:(id)option;
- (void)fbPayComponentPickupOptionSelectionFormViewModel:(id)model didSelectNewPickupRadiusZipCode:(id)code;
- (BOOL)isFirstUnfilledSection;
- (id)resetExpandedCellMaskedCornersDelegate;
- (void)setResetExpandedCellMaskedCornersDelegate:(id)delegate;
- (id)updateUnfilledComponentDelegate;
- (void)setUpdateUnfilledComponentDelegate:(id)delegate;
- (id)cellResizingDelegate;
- (void)setCellResizingDelegate:(id)delegate;
- (id)errorHandler;
- (void)setErrorHandler:(id)handler;
- (id)menuActionFormProvidingDelegate;
- (void)setMenuActionFormProvidingDelegate:(id)delegate;
- (id)focusDelegate;
- (void)setFocusDelegate:(id)delegate;
@end

#endif /* FBPayPickupFulfillmentOptionsComponent_h */