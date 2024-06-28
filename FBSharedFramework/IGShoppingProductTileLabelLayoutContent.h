//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductTileLabelLayoutContent_h
#define IGShoppingProductTileLabelLayoutContent_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "NSCoding-Protocol.h"

@class NSString;

@interface IGShoppingProductTileLabelLayoutContent : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  long long _productName_numLines;
  BOOL _productName_showCheckoutSignaling;
  BOOL _price_showSoldout;
  BOOL _price_showCheckoutSignaling;
  BOOL _price_showCommissionRate;
  BOOL _merchant_showVerifiedBadge;
  BOOL _merchant_showCheckoutSignaling;
  NSString *_featuredProductsInfo_statusText;
  long long _featuredProductsInfo_styleType;
}

/* class methods */
+ (id)featuredProductsInfoWithStatusText:(id)text styleType:(long long)type;
+ (id)merchantWithShowVerifiedBadge:(BOOL)badge showCheckoutSignaling:(BOOL)signaling;
+ (id)priceWithShowSoldout:(BOOL)soldout showCheckoutSignaling:(BOOL)signaling showCommissionRate:(BOOL)rate;
+ (id)productNameWithNumLines:(long long)lines showCheckoutSignaling:(BOOL)signaling;
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGShoppingProductTileLabelLayoutContent_h */