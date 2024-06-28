//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectGroupsCreationVideoCarouselPageViewController_h
#define IGDirectGroupsCreationVideoCarouselPageViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGDirectGroupsCreationCarouselNUXContentView.h"
#include "IGDirectGroupsCreationVideoCarouselViewModel.h"
#include "IGFNFVideoPlayable-Protocol.h"
#include "IGFNFVideoPlayerDelegate-Protocol.h"

@class IGUserSession, NSString, UIView;
@protocol IGDirectGroupsCreationVideoCarouselPageViewControllerDelegate;

@interface IGDirectGroupsCreationVideoCarouselPageViewController : IGViewController<IGFNFVideoPlayerDelegate, IGCoreTextLinkHandler> {
  /* instance variables */
  IGDirectGroupsCreationVideoCarouselViewModel *_viewModel;
  IGUserSession *_userSession;
  NSObject<IGFNFVideoPlayable> *_player;
  UIView *_videoView;
  IGDirectGroupsCreationCarouselNUXContentView *_contentView;
}

@property (weak, nonatomic) NSObject<IGDirectGroupsCreationVideoCarouselPageViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)videoPlayer:(id)player willLoadVideoInView:(id)view playbackReason:(long long)reason;
- (void)videoPlayer:(id)player didLoadVideoInView:(id)view playbackReason:(long long)reason;
- (void)videoPlayerDidPlay:(id)play;
- (void)videoPlayer:(id)player didUpdateLoadingProgress:(double)progress;
- (void)videoPlayerDidPlayToEnd:(id)end;
- (void)videoPlayerItemTimeFullyLoaded:(id)loaded;
- (void)videoPlayerDidLoop:(id)loop;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)playback;
- (void)videoPlayerBufferEmpty:(id)empty;
- (void)videoPlayer:(id)player didFailToPlaybackWithError:(id)error;
- (void)videoPlayer:(id)player didGenerateWarningWithError:(id)error;
- (void)videoPlayerDidPause:(id)pause reason:(long long)reason;
- (void)videoPlayer:(id)player didUpdatePlaybackProgress:(double)progress;
- (void)videoPlayer:(id)player didBeginSeekingToTime:(double)time;
- (void)videoPlayerDidFinishSeeking:(id)seeking;
- (void)videoPlayerDidUpdateAvailableAudioAutoTranslateLanguages:(id)languages;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGDirectGroupsCreationVideoCarouselPageViewController_h */
