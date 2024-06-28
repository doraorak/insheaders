//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15ShopifyCheckout8CartLine_h
#define _TtC15ShopifyCheckout8CartLine_h
@import Foundation;

@class NSArray, NSString;

@interface _TtC15ShopifyCheckout8CartLine : NSObject // (Swift)

@property (nonatomic, readonly) _TtC15ShopifyCheckout13CartLineImage *image;
@property (nonatomic, readonly) NSString *merchandiseId;
@property (nonatomic, readonly) NSString *productId;
@property (nonatomic, readonly) long long quantity;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) _TtC15ShopifyCheckout5Money *price;
@property (nonatomic, readonly) NSArray *discounts;

/* instance methods */
- (id)initWithImage:(id)image merchandiseId:(id)id productId:(id)id quantity:(long long)quantity title:(id)title price:(id)price discounts:(id)discounts;
- (id)init;
@end

#endif /* _TtC15ShopifyCheckout8CartLine_h */