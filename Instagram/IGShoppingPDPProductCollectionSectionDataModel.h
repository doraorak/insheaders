//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPProductCollectionSectionDataModel_h
#define IGShoppingPDPProductCollectionSectionDataModel_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGShoppingPDPProductCollectionSectionDataModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *productItems;
@property (readonly, nonatomic) long long layout;
@property (readonly, nonatomic) BOOL isMultiMerchant;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithTitle:(id)title productItems:(id)items layout:(long long)layout isMultiMerchant:(BOOL)merchant;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGShoppingPDPProductCollectionSectionDataModel_h */
