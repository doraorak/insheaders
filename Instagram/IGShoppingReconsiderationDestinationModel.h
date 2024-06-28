//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingReconsiderationDestinationModel_h
#define IGShoppingReconsiderationDestinationModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGShoppingFBProductTileViewModel.h"
#include "IGShoppingMediaTileViewModel.h"
#include "IGShoppingProductTileViewModel.h"

@interface IGShoppingReconsiderationDestinationModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGShoppingProductTileViewModel *_productCard;
  IGShoppingFBProductTileViewModel *_fbProductCard;
  IGShoppingMediaTileViewModel *_mediaCard;
}

/* class methods */
+ (id)fbProductCard:(id)card;
+ (id)mediaCard:(id)card;
+ (id)productCard:(id)card;

/* instance methods */
@end

#endif /* IGShoppingReconsiderationDestinationModel_h */