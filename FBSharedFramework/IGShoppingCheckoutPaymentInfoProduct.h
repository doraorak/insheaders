//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingCheckoutPaymentInfoProduct_h
#define IGShoppingCheckoutPaymentInfoProduct_h
@import Foundation;

#include "IGAPICurrencyAmountDict.h"

@class NSString;

@interface IGShoppingCheckoutPaymentInfoProduct : NSObject {
  /* instance variables */
  NSString *_productId;
  unsigned long long _quantity;
  IGAPICurrencyAmountDict *_price;
  NSString *_launchDateUnixTimestamp;
}

/* instance methods */
- (id)initWithId:(id)id quantity:(unsigned long long)quantity price:(id)price launchDateUnixTimestamp:(id)timestamp;
- (id)toDict;
@end

#endif /* IGShoppingCheckoutPaymentInfoProduct_h */
