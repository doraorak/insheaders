//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSystemicNavigationLatencyMediaRender_h
#define IGSystemicNavigationLatencyMediaRender_h
@import Foundation;

#include "IGBaseViewController.h"
#include "IGFNFVideoPlayerListener-Protocol.h"
#include "IGImageViewListener-Protocol.h"
#include "IGSystemicNavigationLatencyIdleScheduler.h"
#include "IGUserFlowStateSet.h"

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol IGSystemicNavigationLatencyMediaRenderDelegate;

@interface IGSystemicNavigationLatencyMediaRender : NSObject<IGImageViewListener, IGFNFVideoPlayerListener> {
  /* instance variables */
  IGBaseViewController *_viewController;
  IGSystemicNavigationLatencyIdleScheduler *_idleScheduler;
  unsigned long long _options;
  IGUserFlowStateSet *_imageStates;
  IGUserFlowStateSet *_videoStates;
  BOOL _isStarted;
  BOOL _isFinished;
  double _lastEventTimestamp;
  NSMutableDictionary *_mediaProperties;
  NSMutableDictionary *_imageKeysToIdentifiers;
  NSMutableSet *_allImageIdentifiers;
  NSMutableSet *_observedImageKeys;
  NSMapTable *_keysForImageViews;
  NSMutableDictionary *_videoKeysToIdentifiers;
  NSMutableSet *_allVideoIdentifiers;
  NSMutableSet *_observedVideoKeys;
  NSMapTable *_videoPlayersForKeys;
  NSMapTable *_keysForVideoPlayers;
  NSMutableArray *_observedErrors;
}

@property (weak, nonatomic) NSObject<IGSystemicNavigationLatencyMediaRenderDelegate> *delegate;
@property (retain, nonatomic) IGUserFlowStateSet *states;
@property (readonly, nonatomic) unsigned long long countOfImagesToDisplay;
@property (readonly, nonatomic) unsigned long long countOfVideosToPlay;
@property (readonly, nonatomic) unsigned long long countOfImagesFinished;
@property (readonly, nonatomic) unsigned long long countOfVideosFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewController:(id)controller idleScheduler:(id)scheduler options:(unsigned long long)options;
- (void)removeListeners;
- (void)recordStateInAnnotations:(id)annotations;
- (id)_imageKeyFromURL:(id)url inView:(id)view;
- (void)imageDidStartTrackingWithURL:(id)url inView:(id)view atTimestamp:(double)timestamp;
- (void)imageDidComeOnScreenWithURL:(id)url inView:(id)view atTimestamp:(double)timestamp;
- (void)imageDidGoOffScreenWithURL:(id)url inView:(id)view atTimestamp:(double)timestamp;
- (void)videoDidStartTrackingWithKey:(id)key inPlayer:(id)player atTimestamp:(double)timestamp;
- (void)videoDidComeOnScreenWithKey:(id)key atTimestamp:(double)timestamp;
- (void)videoDidGoOffScreenWithKey:(id)key atTimestamp:(double)timestamp;
- (void)_observeImageWithKey:(id)key inView:(id)view atTimestamp:(double)timestamp;
- (void)_unobserveImageWithKey:(id)key inView:(id)view withAction:(unsigned long long)action atTimestamp:(double)timestamp;
- (void)_observeVideoWithKey:(id)key inPlayer:(id)player atTimestamp:(double)timestamp;
- (void)_unobserveVideoWithKey:(id)key withAction:(unsigned long long)action atTimestamp:(double)timestamp;
- (void)_observeError:(id)error forMediaType:(unsigned long long)type withKey:(id)key atTimestamp:(double)timestamp;
- (void)_mediaRenderStateWillChangeWithEvent:(unsigned long long)event atTimestamp:(double)timestamp;
- (void)_mediaRenderStateDidChange:(unsigned long long)change;
- (BOOL)possiblyFinish;
- (id)_superviewOfVideoPlayer:(id)player;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)_imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary atTimestamp:(double)timestamp;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)_imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary atTimestamp:(double)timestamp;
- (void)videoPlayer:(id)player willLoadVideoInView:(id)view playbackReason:(long long)reason;
- (void)videoPlayer:(id)player didLoadVideoInView:(id)view playbackReason:(long long)reason;
- (void)videoPlayerDidPlay:(id)play;
- (void)_videoPlayerDidPlay:(id)play atTimestamp:(double)timestamp;
- (void)videoPlayer:(id)player didFailToPlaybackWithError:(id)error;
- (void)_videoPlayer:(id)player didFailToPlaybackWithError:(id)error atTimestamp:(double)timestamp;
@end

#endif /* IGSystemicNavigationLatencyMediaRender_h */