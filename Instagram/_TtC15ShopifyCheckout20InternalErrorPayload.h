//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15ShopifyCheckout20InternalErrorPayload_h
#define _TtC15ShopifyCheckout20InternalErrorPayload_h
@import Foundation;

#include "_TtP15ShopifyCheckout12ErrorPayload_-Protocol.h"

@class NSError, NSString;

@interface _TtC15ShopifyCheckout20InternalErrorPayload : NSObject<_TtP15ShopifyCheckout12ErrorPayload_> // (Swift)

@property (nonatomic) long long group;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) long long code;
@property (nonatomic, copy) NSError *underlyingError;

/* instance methods */
- (id)initWithReason:(id)reason code:(long long)code underlyingError:(id)error;
- (id)init;
@end

#endif /* _TtC15ShopifyCheckout20InternalErrorPayload_h */