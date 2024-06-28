//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAInAppPurchaseProduct_h
#define METAInAppPurchaseProduct_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDecimalNumber, NSString;

@interface METAInAppPurchaseProduct : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *productIdentifier;
@property (readonly, copy, nonatomic) NSString *externalProductId;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSString *formattedPrice;
@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSArray *subscriptionOffers;

/* instance methods */
- (id)initWithProductIdentifier:(id)identifier externalProductId:(id)id localizedName:(id)name localizedDescription:(id)description formattedPrice:(id)price amount:(id)amount currencyCode:(id)code countryCode:(id)code subscriptionOffers:(id)offers;
@end

#endif /* METAInAppPurchaseProduct_h */