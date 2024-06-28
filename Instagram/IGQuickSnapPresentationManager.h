//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuickSnapPresentationManager_h
#define IGQuickSnapPresentationManager_h
@import Foundation;

#include "IGInteractiveDismissTransitionControllerDelegate-Protocol.h"
#include "IGPhotoCardFanoutView.h"
#include "IGQuickSnapImmersiveViewerViewControllerDelegate-Protocol.h"
#include "IGScopedListener-Protocol.h"

@class IGQuickSnapFetchResponseQuickSnaps, IGUserSession, NSArray, NSString, UIViewController;

@interface IGQuickSnapPresentationManager : NSObject<IGQuickSnapImmersiveViewerViewControllerDelegate, IGInteractiveDismissTransitionControllerDelegate, IGScopedListener> {
  /* instance variables */
  IGPhotoCardFanoutView *_cardView;
  UIViewController *_previousPresentingVC;
  UIViewController *_currentPresentingVC;
  NSArray *_quickSnapGroupedByAuthor;
  BOOL _isPeekVisible;
  IGUserSession *_userSession;
  BOOL _consumptionDidPresentNux;
  IGQuickSnapFetchResponseQuickSnaps *_quickSnapSubscriptionResponse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)photoCardFanoutViewDidTap:(id)tap;
- (void)quickSnapImmersiveViewerViewControllerDidTapToDismiss:(id)dismiss withNewlySeenSnapIDs:(id)ids;
- (void)quickSnapImmersiveViewerViewControllerDidTapToReply:(id)reply toAuthor:(id)author;
- (void)quickSnapImmersiveViewerViewControllerDidPresentNuxFlow:(id)flow;
- (void)quickSnapImmersiveViewerViewControllerDidCompleteNuxFlow:(id)flow;
- (void)quickSnapImmersiveViewerViewControllerApplicationDidEnterBackground:(id)background withNewlySeenSnapIDs:(id)ids;
- (void)cameraTransitionController:(id)controller didDragToDismissViewController:(id)controller;
- (void)quickSnapSubscriptionDidUpdate:(id)update;
- (void)_didDismissWithSeenIDs:(id)ids;
- (id)_locallyFilterOutSeenQuickSnaps:(id)snaps;
- (void)_reloadCardViewWithQuickSnaps:(id)snaps;
@end

#endif /* IGQuickSnapPresentationManager_h */