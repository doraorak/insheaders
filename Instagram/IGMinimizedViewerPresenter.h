//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMinimizedViewerPresenter_h
#define IGMinimizedViewerPresenter_h
@import Foundation;

#include "IGIntentNavigating-Protocol.h"
#include "IGMinimizedViewerSafeAreaHandler.h"
#include "IGMinimizedViewerStatusBarHandler.h"
#include "IGScopeEnding-Protocol.h"

@class IGPassthroughWindow, IGUserIntentHandler, NSString, UIWindow;
@protocol IGMinimizedViewerPresenterAnnouncer, IGMinimizedViewerPresenterCoverAnnouncer, IGViewController<IGMinimizableViewController;

@interface IGMinimizedViewerPresenter : NSObject<IGScopeEnding, IGIntentNavigating> {
  /* instance variables */
  IGUserIntentHandler *_intentHandler;
  IGViewController<IGMinimizableViewController> *_minimizedStatusBarViewController;
  IGViewController<IGMinimizableViewController> *_maximizedViewController;
  IGPassthroughWindow *_maximizedWindow;
  IGPassthroughWindow *_minimizedWindow;
  IGPassthroughWindow *_minimizedStatusBarWindow;
  UIWindow *_mainWindow;
  NSObject<IGMinimizedViewerPresenterAnnouncer> *_announcer;
  NSObject<IGMinimizedViewerPresenterCoverAnnouncer> *_coverAnnouncer;
  IGMinimizedViewerSafeAreaHandler *_safeAreaHandler;
  IGMinimizedViewerStatusBarHandler *_statusBarHandler;
  unsigned long long _minimizedDismissalState;
  unsigned long long _maximizedDismissalState;
}

@property (readonly, nonatomic) IGViewController<IGMinimizableViewController> *minimizedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserIntentHandler:(id)handler;
- (void)dealloc;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)navigateToIntent:(id)intent withNavigationInfo:(id)info;
- (id)currentMode;
- (void)presentViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)dismissViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)notificationBarTapped:(id)tapped;
- (void)scopeWillEnd;
@end

#endif /* IGMinimizedViewerPresenter_h */
