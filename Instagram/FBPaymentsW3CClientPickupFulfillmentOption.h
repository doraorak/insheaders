//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPaymentsW3CClientPickupFulfillmentOption_h
#define FBPaymentsW3CClientPickupFulfillmentOption_h
@import Foundation;

#include "FBPaymentsW3CClientFulfillmentOption.h"
#include "FBPaymentsW3CClientAddress.h"
#include "FBPaymentsW3CClientDistance.h"

@interface FBPaymentsW3CClientPickupFulfillmentOption : FBPaymentsW3CClientFulfillmentOption

@property (retain, nonatomic) FBPaymentsW3CClientAddress *pickupLocationAddress;
@property (nonatomic) BOOL pickupStoreAvailability;
@property (retain, nonatomic) FBPaymentsW3CClientDistance *pickupStoreDistance;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
@end

#endif /* FBPaymentsW3CClientPickupFulfillmentOption_h */
