//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedVideoAdWatchAndBrowseVideoPlaybackViewController_h
#define IGFeedVideoAdWatchAndBrowseVideoPlaybackViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAudioStatusChangeListener-Protocol.h"
#include "IGFeedVideoAdViewerTransitionPlaybackType.h"
#include "IGFeedVideoAdWatchAndBrowseVideoPlaybackSession.h"
#include "IGFeedVideoAdWatchAndBrowseVideoPlaybackView.h"
#include "IGSponsoredInfoProviding-Protocol.h"

@class IGMedia, IGPlaybackCoordinator, IGSponsoredSupportConfiguration, IGUserSession, IGVideoView, NSString, UIView;

@interface IGFeedVideoAdWatchAndBrowseVideoPlaybackViewController : IGViewController<IGAudioStatusChangeListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_viewerSessionId;
  NSString *_analyticsModule;
  IGMedia *_media;
  IGFeedVideoAdWatchAndBrowseVideoPlaybackView *_playbackView;
  IGPlaybackCoordinator *_playbackCoordinator;
  IGFeedVideoAdWatchAndBrowseVideoPlaybackSession *_playbackSession;
  IGFeedVideoAdViewerTransitionPlaybackType *_viewerTransitionPlaybackType;
  NSObject<IGSponsoredInfoProviding> *_sponsoredInfoProvider;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
}

@property (readonly, nonatomic) IGVideoView *videoView;
@property (readonly, nonatomic) UIView *audioIndicator;
@property (readonly, nonatomic) UIView *overlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session viewerSessionId:(id)id media:(id)media viewerTransitionPlaybackType:(id)type sponsoredInfoProvider:(id)provider sponsoredSupportConfiguration:(id)configuration analyticsModule:(id)module;
- (void)loadView;
- (void)viewDidLoad;
- (void)audioStatusDidChangeIsAudioEnabled:(BOOL)enabled forReason:(long long)reason;
@end

#endif /* IGFeedVideoAdWatchAndBrowseVideoPlaybackViewController_h */
