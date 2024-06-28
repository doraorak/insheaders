//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPivotsItemRepresentation_h
#define IGShoppingPivotsItemRepresentation_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGShoppingMerchantTileDataModel.h"

@class IGAPIProductDetailsProductItemDict, IGShoppingProductTileDataModel;

@interface IGShoppingPivotsItemRepresentation : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGAPIProductDetailsProductItemDict *_product;
  IGShoppingProductTileDataModel *_productTile;
  IGShoppingMerchantTileDataModel *_brandTile;
}

/* class methods */
+ (id)brandTile:(id)tile;
+ (id)product:(id)product;
+ (id)productTile:(id)tile;
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
@end

#endif /* IGShoppingPivotsItemRepresentation_h */