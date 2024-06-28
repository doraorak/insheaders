//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutFulfillmentContext_h
#define FBPayExpressCheckoutFulfillmentContext_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayExpressCheckoutPickupInfo.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBPayExpressCheckoutFulfillmentContext : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *selectedFulfillmentOptionId;
@property (readonly, copy, nonatomic) NSArray *fulfillmentOptions;
@property (readonly, copy, nonatomic) FBPayExpressCheckoutPickupInfo *pickupInfo;

/* instance methods */
- (id)initWithSelectedFulfillmentOptionId:(id)id fulfillmentOptions:(id)options pickupInfo:(id)info;
@end

#endif /* FBPayExpressCheckoutFulfillmentContext_h */
