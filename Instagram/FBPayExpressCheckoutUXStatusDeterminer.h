//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutUXStatusDeterminer_h
#define FBPayExpressCheckoutUXStatusDeterminer_h
@import Foundation;

#include "FBPayExpressCheckoutOptionalUXFields.h"
#include "FBPayExpressCheckoutRequestFields.h"

@class NSMutableDictionary, NSString;
@protocol FBPayComponentNetworking, OS_dispatch_group;

@interface FBPayExpressCheckoutUXStatusDeterminer : NSObject {
  /* instance variables */
  id /* block */ _uxStatusCallback;
  FBPayExpressCheckoutOptionalUXFields *_optionalUXFields;
  FBPayExpressCheckoutRequestFields *_requestFields;
  long long _paymentEnvironment;
  NSString *_productId;
  NSString *_receiverId;
  BOOL _shouldOnlyCheckCache;
  NSObject<FBPayComponentNetworking> *_fbpayComponentDataController;
  NSObject<OS_dispatch_group> *_dispatchGroup;
  NSMutableDictionary *_requestedUXComponentsStatuses;
}

/* instance methods */
- (id)initWithFBPayComponentDataController:(id)controller shouldOnlyCheckCache:(BOOL)cache optionalUXFields:(id)uxfields requestFields:(id)fields productId:(id)id receiverId:(id)id paymentEnvironment:(long long)environment determinationCallback:(id /* block */)callback;
@end

#endif /* FBPayExpressCheckoutUXStatusDeterminer_h */