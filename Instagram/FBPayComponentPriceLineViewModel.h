//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentPriceLineViewModel_h
#define FBPayComponentPriceLineViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayComponentPriceLineViewModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *formattedAmount;
@property (readonly, copy, nonatomic) NSString *priceDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long status;

/* instance methods */
- (id)initWithFormattedAmount:(id)amount priceDescription:(id)description type:(long long)type status:(long long)status;
@end

#endif /* FBPayComponentPriceLineViewModel_h */
