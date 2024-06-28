//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteLoginHelper_h
#define IGPromoteLoginHelper_h
@import Foundation;

#include "IGAccessTokenHandlerManager.h"

@class IGUserSession, NSString, UIViewController;

@interface IGPromoteLoginHelper : NSObject {
  /* instance variables */
  UIViewController *_fromViewController;
  id /* block */ _failedLoginHandler;
  id /* block */ _beforeLoginHandler;
  id /* block */ _successfulLoginHandler;
  id /* block */ _successfulLoginStateHandler;
  IGUserSession *_userSession;
  NSString *_entryPoint;
  NSString *_step;
  IGAccessTokenHandlerManager *_accessTokenHandlerManager;
}

/* instance methods */
- (id)initWithUserSession:(id)session beforeLoginHandler:(id /* block */)handler successfulLoginHandler:(id /* block */)handler failedLoginHandler:(id /* block */)handler fromViewController:(id)controller;
- (id)initWithUserSession:(id)session entryPoint:(id)point step:(id)step beforeLoginHandler:(id /* block */)handler successfulLoginHandler:(id /* block */)handler successfulLoginStateHandler:(id /* block */)handler failedLoginHandler:(id /* block */)handler fromViewController:(id)controller;
@end

#endif /* IGPromoteLoginHelper_h */
