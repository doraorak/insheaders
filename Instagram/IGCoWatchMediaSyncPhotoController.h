//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoWatchMediaSyncPhotoController_h
#define IGCoWatchMediaSyncPhotoController_h
@import Foundation;

#include "UIViewController.h"
#include "IGImageProgressViewDelegate-Protocol.h"

@class IGImageProgressView, NSString;
@protocol IGCoWatchPlaybackLoggingListener, IGCoWatchableMedia;

@interface IGCoWatchMediaSyncPhotoController : UIViewController<IGImageProgressViewDelegate> {
  /* instance variables */
  IGImageProgressView *_photoView;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _overlayInsets;
  NSObject<IGCoWatchPlaybackLoggingListener> *_logger;
  NSObject<IGCoWatchableMedia> *_media;
  NSString *_tabSource;
  double _startLoadingTime;
  double _startPlayingTime;
  BOOL _isCarousel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLogger:(id)logger;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)playMedia:(id)media syncedClock:(id)clock startTimeMillis:(struct duration<long long, std::ratio<1, 1000>> { long long x0; })millis surfaceId:(id)id playbackState:(long long)state tabSource:(id)source isCarouselItem:(BOOL)item initialAudioModel:(id)model;
- (void)stop;
- (long long)playbackState;
- (void)updatePlayerOriginY:(double)y chicletOriginY:(double)y;
- (void)configureWithOverlayViewModel:(id)model;
- (void)chromeDidShowWithAnimationDuration:(double)duration isChromeVisible:(BOOL)visible isInPipMode:(BOOL)mode overlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets tearingDownCowatch:(BOOL)cowatch;
- (BOOL)layoutNeededWhenRecievingNewMedia;
- (void)progressImageView:(id)view didLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)progressImageView:(id)view didUpdateLoadingState:(id)state;
- (void)progressImageView:(id)view didFailLoadWithError:(id)error networkRequestSummary:(id)summary;
- (void)_onAppDidEnterBackground:(id)background;
- (void)_onAppWillEnterForeground:(id)foreground;
@end

#endif /* IGCoWatchMediaSyncPhotoController_h */