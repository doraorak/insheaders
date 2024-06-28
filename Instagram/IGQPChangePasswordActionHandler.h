//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPChangePasswordActionHandler_h
#define IGQPChangePasswordActionHandler_h
@import Foundation;

#include "IGQPActionHandlerProtocol-Protocol.h"

@class IGUserSession, NSString;

@interface IGQPChangePasswordActionHandler : NSObject<IGQPActionHandlerProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)handleActionURL:(id)url successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
@end

#endif /* IGQPChangePasswordActionHandler_h */
