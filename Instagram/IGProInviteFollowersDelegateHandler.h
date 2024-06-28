//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProInviteFollowersDelegateHandler_h
#define IGProInviteFollowersDelegateHandler_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSString, UINavigationController;

@interface IGProInviteFollowersDelegateHandler : NSObject<NSObject> {
  /* instance variables */
  UINavigationController *_navigationController;
  IGUserSession *_userSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNavigationController:(id)controller userSession:(id)session;
- (void)proInviteFollowersDidComplete:(BOOL)complete;
- (void)proInviteFollowersDidTapShareActionWithCompletion:(id /* block */)completion;
@end

#endif /* IGProInviteFollowersDelegateHandler_h */