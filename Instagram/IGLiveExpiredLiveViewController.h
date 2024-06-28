//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveExpiredLiveViewController_h
#define IGLiveExpiredLiveViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGLiveExpiredLiveMediaView.h"
#include "IGLiveViewerPostLiveManager.h"
#include "NSObject-Protocol.h"

@class IGLiveBroadcast, IGUserSession, NSString;

@interface IGLiveExpiredLiveViewController : IGViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGLiveBroadcast *_broadcast;
  IGLiveExpiredLiveMediaView *_mediaView;
  IGLiveViewerPostLiveManager *_postLiveManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session broadcast:(id)broadcast entryPoint:(long long)point;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)prefersNavigationBarHidden;
- (void)liveViewerPostLiveManagerWillPresentPostLiveSheet:(id)sheet;
- (void)liveViewerPostLiveManagerDidDismissPostLiveSheet:(id)sheet didTapTrayItem:(id)item didTapPostLiveItemWithIGTVViewerConfig:(id)config channelDataSource:(id)source backgroundViewTapped:(BOOL)tapped;
- (void)_didTapMediaView;
@end

#endif /* IGLiveExpiredLiveViewController_h */