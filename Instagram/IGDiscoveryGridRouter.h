//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryGridRouter_h
#define IGDiscoveryGridRouter_h
@import Foundation;

@class IGSessionTracker, IGUserSession, NSString;

@interface IGDiscoveryGridRouter : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGSessionTracker *_sessionTracker;
  NSString *_reelsMaxId;
}

/* instance methods */
- (id)initWithUserSession:(id)session sessionTracker:(id)tracker reelsMaxId:(id)id;
- (void)_routeToContextualChainForItem:(id)item navigationController:(id)controller dataController:(id)controller focusCoordinator:(id)coordinator title:(id)title subtitle:(id)subtitle feedItemLogger:(id)logger;
- (void)_routeToImmersiveViewerForItem:(id)item navigationController:(id)controller title:(id)title dataController:(id)controller gridLoggingProvider:(id)provider;
@end

#endif /* IGDiscoveryGridRouter_h */