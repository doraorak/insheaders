//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPaymentReceiverComponent_h
#define FBPayPaymentReceiverComponent_h
@import Foundation;

#include "FBPayComponentCellViewModel.h"
#include "FBPayComponentInlineCell.h"
#include "FBPayExpressCheckoutContext.h"
#include "FBPayExpressCheckoutErrorHandler.h"
#include "FBPayExpressCheckoutLogger.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol FBPayComponentCellResizingDelegate, FBPayComponentExpandedCellFocusDelegate, FBPayComponentMenuActionFormProviding, FBPayComponentResetExpandedCellMaskedCornersDelegate, FBPayComponentUpdateUnfilledComponentsDelegate, FBPayPaymentReceiverComponentDelegate;

@interface FBPayPaymentReceiverComponent : NSObject<NSObject> {
  /* instance variables */
  FBPayExpressCheckoutContext *_ecpContext;
  FBPayComponentCellViewModel *_inlineCellViewModel;
  FBPayComponentInlineCell *_inlineCell;
  BOOL _isLoading;
  FBPayExpressCheckoutLogger *_logger;
  BOOL _didAlreadyLogInitialLoad;
}

@property (weak, nonatomic) NSObject<FBPayPaymentReceiverComponentDelegate> *delegate;
@property (retain, nonatomic) FBPayExpressCheckoutErrorHandler *errorHandler;
@property (weak, nonatomic) NSObject<FBPayComponentCellResizingDelegate> *cellResizingDelegate;
@property (weak, nonatomic) NSObject<FBPayComponentMenuActionFormProviding> *menuActionFormProvidingDelegate;
@property (weak, nonatomic) NSObject<FBPayComponentResetExpandedCellMaskedCornersDelegate> *resetExpandedCellMaskedCornersDelegate;
@property (weak, nonatomic) NSObject<FBPayComponentUpdateUnfilledComponentsDelegate> *updateUnfilledComponentDelegate;
@property (weak, nonatomic) NSObject<FBPayComponentExpandedCellFocusDelegate> *focusDelegate;
@property (nonatomic) BOOL isFirstUnfilledSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEcpContext:(id)context;
- (long long)componentType;
- (id)componentCellForUXStatus:(BOOL)uxstatus;
- (void)initiateComponentDataFetchFromTriggeringSource:(long long)source;
- (void)updateWithPaymentRequest:(id)request;
- (BOOL)isUnfilled;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (void)_updateCellWithInlineCellViewModel:(id)model;
- (void)_logComponentInit;
- (void)_logComponentInitialLoadDidSucceed:(BOOL)succeed;
@end

#endif /* FBPayPaymentReceiverComponent_h */
