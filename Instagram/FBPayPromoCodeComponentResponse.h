//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPromoCodeComponentResponse_h
#define FBPayPromoCodeComponentResponse_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayFormField.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray;

@interface FBPayPromoCodeComponentResponse : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) FBPayFormField *promoCodeFormField;
@property (readonly, copy, nonatomic) NSArray *offerOptions;

/* instance methods */
- (id)initWithPromoCodeFormField:(id)field offerOptions:(id)options;
@end

#endif /* FBPayPromoCodeComponentResponse_h */
