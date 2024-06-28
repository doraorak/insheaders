//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrowserAppStoreSurfaceController_h
#define IGBrowserAppStoreSurfaceController_h
@import Foundation;

#include "FBBrowserIntegrityLoggingController.h"
#include "IABLoggingCoordinator.h"

@class IGUserSession, NSString, UIViewController;

@interface IGBrowserAppStoreSurfaceController : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_browserSessionAdTrackingToken;
  IABLoggingCoordinator *_loggingCoordinator;
  FBBrowserIntegrityLoggingController *_browserIntegrityController;
  UIViewController *_hostViewController;
}

/* instance methods */
- (id)initWithUserSession:(id)session browserSessionAdTrackingToken:(id)token loggingCoordinator:(id)coordinator browserIntegrityController:(id)controller hostViewController:(id)controller;
- (BOOL)isAppStoreSurfaceEnabledForURL:(id)url;
- (void)presentAppStoreSurfaceForURL:(id)url appStoreDismissedCallback:(id /* block */)callback;
- (void)_appStoreDidPresentWithURL:(id)url;
@end

#endif /* IGBrowserAppStoreSurfaceController_h */
