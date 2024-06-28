//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBStyledStringRequirementsWithCustomTokenDEPRECATED_h
#define FBStyledStringRequirementsWithCustomTokenDEPRECATED_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface FBStyledStringRequirementsWithCustomTokenDEPRECATED : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSString *replacement;
@property (readonly, copy, nonatomic) NSDictionary *attributes;

/* instance methods */
- (id)initWithToken:(id)token replacement:(id)replacement attributes:(id)attributes;
@end

#endif /* FBStyledStringRequirementsWithCustomTokenDEPRECATED_h */