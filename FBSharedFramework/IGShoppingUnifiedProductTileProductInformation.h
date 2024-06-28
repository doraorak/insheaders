//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingUnifiedProductTileProductInformation_h
#define IGShoppingUnifiedProductTileProductInformation_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGAPIProductDetailsProductItemDict.h"
#include "IGShoppingUnifiedProductTileProductItem.h"
#include "NSCoding-Protocol.h"

@interface IGShoppingUnifiedProductTileProductInformation : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  IGAPIProductDetailsProductItemDict *_igMicroProductItem;
  IGShoppingUnifiedProductTileProductItem *_unifiedProductItem;
}

/* class methods */
+ (id)igMicroProductItem:(id)item;
+ (id)unifiedProductItem:(id)item;
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGShoppingUnifiedProductTileProductInformation_h */