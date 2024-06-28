//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingCartDataQuery_h
#define IGShoppingCartDataQuery_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGShoppingCartDataQuery : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_merchantCart_merchantPk;
}

/* class methods */
+ (id)cartContents;
+ (id)cartInfos;
+ (id)merchantCartWithMerchantPk:(id)pk;
+ (id)productCollections;
+ (id)totalCount;

/* instance methods */
@end

#endif /* IGShoppingCartDataQuery_h */
