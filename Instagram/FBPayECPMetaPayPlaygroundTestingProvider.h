//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayECPMetaPayPlaygroundTestingProvider_h
#define FBPayECPMetaPayPlaygroundTestingProvider_h
@import Foundation;

#include "FBPayExpressCheckoutShippingOptions.h"
#include "NSObject-Protocol.h"

@class FBTimer, NSArray, NSString;

@interface FBPayECPMetaPayPlaygroundTestingProvider : NSObject<NSObject> {
  /* instance variables */
  BOOL _isPaymentEnvTest;
  FBPayExpressCheckoutShippingOptions *_shippingOptions;
  NSArray *_lineItems;
  FBTimer *_timer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIsPaymentEnvTest:(BOOL)test;
- (id)providePaymentRequest;
- (struct BKCdsBottomSheetScreenModel { id x0; id x1; id x2; BOOL x3; id x4; id x5; unsigned long long x6; long long x7; id x8; id x9; id x10; id x11; id x12; })provideBloksCheckoutModel;
- (void)isECPAvailable;
- (void)showCheckoutBottomSheetWithHostViewController:(id)controller;
- (void)handleCheckoutUpdateEvent:(id)event callback:(id /* block */)callback;
- (void)handleCheckoutCancelledEvent:(long long)event;
- (void)handlePaymentResponse:(id)response ecpContext:(id)context orderId:(id)id paymentMethod:(id)method error:(id)error callback:(id /* block */)callback;
@end

#endif /* FBPayECPMetaPayPlaygroundTestingProvider_h */
