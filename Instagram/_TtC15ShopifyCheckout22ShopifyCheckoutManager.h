//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15ShopifyCheckout22ShopifyCheckoutManager_h
#define _TtC15ShopifyCheckout22ShopifyCheckoutManager_h
@import Foundation;

#include "_TtP15ShopifyCheckout23ShopifyCheckoutDelegate_-Protocol.h"

@interface _TtC15ShopifyCheckout22ShopifyCheckoutManager : NSObject { // (Swift)
  /* instance variables */
   webViewController;
   messageAdapter;
}

@property (nonatomic, retain) _TtC15ShopifyCheckout13MessageParser *messageParser;
@property (nonatomic, weak) NSObject<_TtP15ShopifyCheckout23ShopifyCheckoutDelegate_> *delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)presentCheckoutWithUrl:(id)url viewRef:(id)ref;
- (void)presentCheckoutWithUrl:(id)url viewRef:(id)ref options:(id)options;
- (void)completeCheckout;
- (void)completeCheckoutWithOneTimeVaultedToken:(id)token;
- (void)updateCartWithLineId:(id)id quantity:(long long)quantity;
- (id)version;
- (void)onWebViewError:(id)error;
- (id)init;
@end

#endif /* _TtC15ShopifyCheckout22ShopifyCheckoutManager_h */
