//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPLightboxFeedItemSectionController_h
#define IGShoppingPDPLightboxFeedItemSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGFNFVideoPlayable-Protocol.h"
#include "IGFNFVideoPlayerDelegate-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"
#include "IGShoppingPDPLightboxFeedItemViewModel.h"

@class IGSessionTracker, IGUserSession, NSString;
@protocol IGShoppingPDPLightboxFeedItemSectionControllerDelegate;

@interface IGShoppingPDPLightboxFeedItemSectionController : IGListSectionController<IGFNFVideoPlayerDelegate, IGListDisplayDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGShoppingPDPLightboxFeedItemViewModel *_viewModel;
  NSString *_analyticsModule;
  IGSessionTracker *_shoppingSessionTracker;
}

@property (retain, nonatomic) NSObject<IGFNFVideoPlayable> *videoPlayer;
@property (readonly, nonatomic) BOOL audioEnabled;
@property (readonly, nonatomic) NSString *itemType;
@property (weak, nonatomic) NSObject<IGShoppingPDPLightboxFeedItemSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module shoppingSessionTracker:(id)tracker;
- (void)setAudioEnabled:(BOOL)enabled reason:(long long)reason;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)videoPlayer:(id)player willLoadVideoInView:(id)view playbackReason:(long long)reason;
- (void)videoPlayer:(id)player didLoadVideoInView:(id)view playbackReason:(long long)reason;
- (void)videoPlayerDidPlay:(id)play;
- (void)videoPlayerDidPlayToEnd:(id)end;
- (void)videoPlayerItemTimeFullyLoaded:(id)loaded;
- (void)videoPlayer:(id)player didUpdateLoadingProgress:(double)progress;
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
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)shoppingPDPLightboxMediaCell:(id)cell didTapAttributionButton:(id)button;
- (void)shoppingPDPLightboxMediaCell:(id)cell didTapViewMediaButton:(id)button;
- (void)shoppingPDPLightboxMediaCell:(id)cell didSetAudioEnabled:(BOOL)enabled;
@end

#endif /* IGShoppingPDPLightboxFeedItemSectionController_h */
