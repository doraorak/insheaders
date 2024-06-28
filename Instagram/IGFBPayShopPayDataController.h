//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBPayShopPayDataController_h
#define IGFBPayShopPayDataController_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSString;

@interface IGFBPayShopPayDataController : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIGUserSession:(id)session;
- (void)authenticationLinkMutationWithLoggingId:(id)id paymentType:(id)type success:(id /* block */)success failure:(id /* block */)failure;
- (void)fetchBottomSheetWithLoggingSessionID:(id)id paymentType:(id)type success:(id /* block */)success error:(id /* block */)error;
- (void)finalizeAccountLinkingWithLoggingId:(id)id paymentType:(id)type state:(id)state code:(id)code success:(id /* block */)success failure:(id /* block */)failure;
- (void)removeShopPayWithLoggingId:(id)id paymentType:(id)type shopPayId:(id)id success:(id /* block */)success failure:(id /* block */)failure;
@end

#endif /* IGFBPayShopPayDataController_h */
