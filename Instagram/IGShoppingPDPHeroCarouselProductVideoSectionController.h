//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPHeroCarouselProductVideoSectionController_h
#define IGShoppingPDPHeroCarouselProductVideoSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGFNFVideoPlayable-Protocol.h"
#include "IGFNFVideoPlayerDelegate-Protocol.h"
#include "IGListWorkingRangeDelegate-Protocol.h"
#include "IGShoppingPDPHeroCarouselMediaZoomController.h"
#include "IGShoppingPDPHeroCarouselProductVideoViewModel.h"
#include "IGZoomLoggerProtocol-Protocol.h"
#include "IGZoomViewPresenter.h"

@class IGMediaPreloader, IGShoppingConsumptionFeedItemLogger, IGUserSession, NSMutableDictionary, NSString;
@protocol IGShoppingPDPHeroCarouselProductVideoSectionControllerDelegate;

@interface IGShoppingPDPHeroCarouselProductVideoSectionController : IGListSectionController<IGFNFVideoPlayerDelegate, IGListWorkingRangeDelegate, IGZoomLoggerProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  IGShoppingPDPHeroCarouselProductVideoViewModel *_viewModel;
  IGShoppingConsumptionFeedItemLogger *_logger;
  NSMutableDictionary *_gradientColorCache;
  IGMediaPreloader *_mediaPreloader;
  long long _viewpointLevel;
  IGShoppingPDPHeroCarouselMediaZoomController *_heroCarouselZoomController;
  IGZoomViewPresenter *_zoomViewPresenter;
}

@property (weak, nonatomic) NSObject<IGShoppingPDPHeroCarouselProductVideoSectionControllerDelegate> *delegate;
@property (retain, nonatomic) NSObject<IGFNFVideoPlayable> *videoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session logger:(id)logger viewpointLevel:(long long)level;
- (void)dealloc;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)listAdapter:(id)adapter sectionControllerWillEnterWorkingRange:(id)range;
- (void)listAdapter:(id)adapter sectionControllerDidExitWorkingRange:(id)range;
- (void)shoppingPDPHeroCarouselMediaCellWasTapped:(id)tapped;
- (void)shoppingPDPHeroCarouselMediaCell:(id)cell didTapMoreButton:(id)button;
- (void)shoppingPDPHeroCarouselMediaCell:(id)cell didComputeGradientColors:(id)colors;
- (BOOL)shoppingPDPHeroCarouselMediaCellCanPerformAnimatedImageTransition:(id)transition;
- (void)shoppingPDPHeroCarouselMediaCell:(id)cell didTapCancelButton:(id)button;
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
- (void)logZoomWillBeginWithExtras:(id)extras;
- (void)logZoomDidEndWithExtras:(id)extras;
@end

#endif /* IGShoppingPDPHeroCarouselProductVideoSectionController_h */
