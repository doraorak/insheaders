//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPriceTableComponent_h
#define FBPayPriceTableComponent_h
@import Foundation;

#include "FBPayComponentPriceTableCell.h"
#include "FBPayComponentPriceTableCellViewModel.h"
#include "FBPayExpressCheckoutContext.h"
#include "FBPayExpressCheckoutErrorHandler.h"
#include "FBPayExpressCheckoutEventHandlingErrors.h"
#include "FBPayExpressCheckoutLogger.h"
#include "FBPayExpressCheckoutPaymentRequest.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol FBPayComponentCellResizingDelegate, FBPayComponentExpandedCellFocusDelegate, FBPayComponentMenuActionFormProviding, FBPayComponentResetExpandedCellMaskedCornersDelegate, FBPayComponentUpdateUnfilledComponentsDelegate, FBPayOrderSummarySubcomponentDelegate, FBPayPriceTableComponentDelegate;

@interface FBPayPriceTableComponent : NSObject<NSObject> {
  /* instance variables */
  FBPayExpressCheckoutContext *_ecpContext;
  FBPayExpressCheckoutPaymentRequest *_paymentRequest;
  FBPayComponentPriceTableCell *_priceTableCell;
  FBPayComponentPriceTableCellViewModel *_cellViewModel;
  FBPayExpressCheckoutEventHandlingErrors *_currentEventHandlingErrors;
  FBPayExpressCheckoutLogger *_logger;
  BOOL _didAlreadyLogInitialLoad;
  NSObject<FBPayOrderSummarySubcomponentDelegate> *_orderSummarySubComponentDelegate;
}

@property (weak, nonatomic) NSObject<FBPayPriceTableComponentDelegate> *delegate;
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
- (id)initWithEcpContext:(id)context;
- (long long)componentType;
- (id)componentCellForUXStatus:(BOOL)uxstatus;
- (void)initiateComponentDataFetchFromTriggeringSource:(long long)source;
- (void)updateWithPaymentRequest:(id)request;
- (BOOL)isUnfilled;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (void)priceTableCellDidUpdateHeight:(id)height;
@end

#endif /* FBPayPriceTableComponent_h */