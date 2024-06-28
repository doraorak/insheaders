//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayEmailOptInComponent_h
#define FBPayEmailOptInComponent_h
@import Foundation;

#include "FBPayComponentCellViewModel.h"
#include "FBPayComponentInlineCell.h"
#include "FBPayExpressCheckoutContext.h"
#include "FBPayExpressCheckoutErrorHandler.h"
#include "FBPayExpressCheckoutLogger.h"
#include "FBPayExpressCheckoutPaymentRequest.h"
#include "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol FBPayComponentCellResizingDelegate, FBPayComponentExpandedCellFocusDelegate, FBPayComponentMenuActionFormProviding, FBPayComponentResetExpandedCellMaskedCornersDelegate, FBPayComponentUpdateUnfilledComponentsDelegate, FBPayEmailOptInComponentDelegate;

@interface FBPayEmailOptInComponent : NSObject<NSObject> {
  /* instance variables */
  FBPayExpressCheckoutPaymentRequest *_paymentRequest;
  FBPayComponentInlineCell *_inlineCell;
  FBPayExpressCheckoutLogger *_logger;
  FBPayExpressCheckoutContext *_ecpContext;
  FBPayComponentCellViewModel *_inlineCellViewModel;
  NSURL *_emailOptInUrl;
  BOOL _alreadyLoggedInitialLoad;
  BOOL _optInStatus;
}

@property (weak, nonatomic) NSObject<FBPayEmailOptInComponentDelegate> *delegate;
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
- (long long)componentType;
- (id)componentCellForUXStatus:(BOOL)uxstatus;
- (void)initiateComponentDataFetchFromTriggeringSource:(long long)source;
- (void)updateWithPaymentRequest:(id)request;
- (BOOL)isUnfilled;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (void)logComponentLoadInitWithUXStatus:(long long)uxstatus;
- (void)logComponentLoadSuccessWithUXStatus:(long long)uxstatus;
- (void)logComponentLoadFailWithUXStatus:(long long)uxstatus;
- (void)fbpayInlineCellShouldPresentURL:(id)url;
- (void)fbpayInlineCellDidSetCheckboxValue:(BOOL)value;
@end

#endif /* FBPayEmailOptInComponent_h */