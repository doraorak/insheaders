//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAnimatedMediaMp4SectionController_h
#define IGDirectAnimatedMediaMp4SectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGDirectAnimatedMediaLogger.h"
#include "IGDirectAnimatedMediaSectionControllerProtocol-Protocol.h"
#include "IGFNFVideoPlayable-Protocol.h"
#include "IGFNFVideoPlayerDelegate-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoPlayerManaging-Protocol.h"

@class NSString, UIView;
@protocol IGDirectAnimatedMediaSectionControllerDelegate, IGDirectAnimatedMediaViewModel<IGVideoURLProvider;

@interface IGDirectAnimatedMediaMp4SectionController : IGListSectionController<IGFNFVideoPlayerDelegate, IGListDisplayDelegate, IGDirectAnimatedMediaSectionControllerProtocol> {
  /* instance variables */
  UIView *_videoView;
  NSObject<IGFNFVideoPlayable> *_videoPlayer;
  IGDirectAnimatedMediaViewModel<IGVideoURLProvider> *_model;
  IGDirectAnimatedMediaLogger *_logger;
  NSObject<IGVideoPlayerManaging> *_videoPlayerManager;
  NSObject<IGUserLauncherSetProviding> *_featureSetProvider;
}

@property (weak, nonatomic) NSObject<IGDirectAnimatedMediaSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoPlayerManager:(id)manager logger:(id)logger featureSetProvider:(id)provider;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
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
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
@end

#endif /* IGDirectAnimatedMediaMp4SectionController_h */
