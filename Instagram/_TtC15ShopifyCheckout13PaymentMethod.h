//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15ShopifyCheckout13PaymentMethod_h
#define _TtC15ShopifyCheckout13PaymentMethod_h
@import Foundation;

@class NSString;

@interface _TtC15ShopifyCheckout13PaymentMethod : NSObject // (Swift)

@property (nonatomic, readonly) NSString *referenceId;
@property (nonatomic, readonly) NSString *cardType;
@property (nonatomic, readonly) NSString *lastFourDigits;
@property (nonatomic, readonly) NSString *expirationMonth;
@property (nonatomic, readonly) NSString *expirationYear;
@property (nonatomic, readonly) _TtC15ShopifyCheckout7Address *billingAddress;

/* instance methods */
- (id)initWithReferenceId:(id)id cardType:(id)type lastFourDigits:(id)digits expirationMonth:(id)month expirationYear:(id)year billingAddress:(id)address;
- (id)init;
@end

#endif /* _TtC15ShopifyCheckout13PaymentMethod_h */