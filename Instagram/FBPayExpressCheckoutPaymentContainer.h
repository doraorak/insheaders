//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutPaymentContainer_h
#define FBPayExpressCheckoutPaymentContainer_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayExpressCheckoutPaymentContainer : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *containerId;
@property (readonly, copy, nonatomic) NSString *containerType;
@property (readonly, copy, nonatomic) NSString *containerExternalId;
@property (readonly, copy, nonatomic) NSString *containerData;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, copy, nonatomic) NSString *orderId;

/* instance methods */
- (id)initWithContainerId:(id)id containerType:(id)type containerExternalId:(id)id containerData:(id)data descriptionText:(id)text isLive:(BOOL)live orderId:(id)id;
@end

#endif /* FBPayExpressCheckoutPaymentContainer_h */
