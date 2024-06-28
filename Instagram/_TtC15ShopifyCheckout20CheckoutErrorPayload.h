//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15ShopifyCheckout20CheckoutErrorPayload_h
#define _TtC15ShopifyCheckout20CheckoutErrorPayload_h
@import Foundation;

#include "_TtP15ShopifyCheckout12ErrorPayload_-Protocol.h"

@class NSString;

@interface _TtC15ShopifyCheckout20CheckoutErrorPayload : NSObject<_TtP15ShopifyCheckout12ErrorPayload_> // (Swift)

@property (nonatomic) long long group;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *flowType;
@property (nonatomic, copy) NSString *reason;

/* instance methods */
- (id)initWithGroup:(long long)group type:(long long)type flowType:(id)type reason:(id)reason;
- (id)init;
@end

#endif /* _TtC15ShopifyCheckout20CheckoutErrorPayload_h */