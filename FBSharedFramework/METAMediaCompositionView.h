//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaCompositionView_h
#define METAMediaCompositionView_h
@import Foundation;

#include "UIView.h"
#include "FBAREngineFilter.h"
#include "IGGLKSession.h"
#include "IGGestureHandler-Protocol.h"
#include "IGPassthroughView.h"
#include "IGPlaybackTimeline.h"
#include "IGPlaybackTimelineDelegate-Protocol.h"
#include "METAAnimationCurve.h"
#include "METABackgroundGradient.h"
#include "METAMediaAsset-Protocol.h"
#include "METAMediaCompositionState.h"
#include "METAMediaCompositionStateGraph.h"
#include "METAMediaCompositionViewDelegate-Protocol.h"
#include "METAMediaCompositionViewDrawingLayer-Protocol.h"
#include "METAMediaCompositionViewPlaybackLoggingDelegate-Protocol.h"
#include "METAMediaCompositionViewStickerLayer-Protocol.h"
#include "METAMediaEffect-Protocol.h"
#include "METAMediaPlayerLogger.h"
#include "METASwipableFilterMediaView.h"

@class NSArray, NSMutableDictionary, NSString, UIColor, UILabel, UIView;
@protocol METAMediaCompositionPerformanceLoggerProtocol, METAMediaContainerAnimator;

@interface METAMediaCompositionView : UIView<IGPlaybackTimelineDelegate, IGGestureHandler> {
  /* instance variables */
  METAMediaCompositionState *_cachedMediaCompositionState;
  IGPlaybackTimeline *_masterPlaybackTimeline;
  BOOL _videoCanResumeWhenEnteringForeground;
  METAMediaPlayerLogger *_mediaPlayerLogger;
  BOOL _waitingToPlay;
  double _defaultColorFiltersStrength;
  IGPassthroughView *_compositionWrapperView;
  IGPassthroughView *_mediaAndDrawingWrapperView;
  UIView *_backgroundAssetOverlayView;
  NSObject<METAMediaCompositionViewDrawingLayer> *_drawingLayer;
  NSObject<METAMediaCompositionViewStickerLayer> *_stickerLayer;
  NSObject<METAMediaCompositionViewStickerLayer> *_burnedInStickerLayer;
  NSMutableDictionary *_playerForAudioTrackWithIdentifier;
  double _requestedPlaybackRate;
  double _requestedPlaybackTime;
  BOOL _isSeeking;
  BOOL _isAppActive;
  METAMediaCompositionStateGraph *_stateDepGraph;
}

@property (nonatomic) BOOL shouldResetImageSourceFromRenderer;
@property (nonatomic) BOOL shouldRenderSkippedImageSource;
@property (nonatomic) BOOL shouldEnableImageSourceWhenNoAsset;
@property (nonatomic) BOOL shouldUseBoundsSizeForMediaSize;
@property (nonatomic) BOOL shouldInsertIntermediateStep;
@property (nonatomic) BOOL shouldReuseAssetRenderer;
@property (nonatomic) BOOL shouldMinimizeImageSourceViewMemory;
@property (nonatomic) BOOL shouldEnforceSingleRendering;
@property (nonatomic) BOOL shouldMinimizeImageSourceViewDrawables;
@property (nonatomic) BOOL shouldDoBackgroundRendering;
@property (nonatomic) BOOL shouldWaitForNewPixelBuffer;
@property (nonatomic) BOOL shouldSeekWhileLoading;
@property (nonatomic) BOOL shouldCacheImageSourceSurfaces;
@property (nonatomic) BOOL shouldCacheImageSourceProcessors;
@property (nonatomic) BOOL shouldResetFilterInputOutputAfterRender;
@property (nonatomic) BOOL shouldUseSeparateTextureCacheForImageSource;
@property (nonatomic) BOOL shouldFlushImageSoureCacheOnPause;
@property (nonatomic) BOOL shouldUpdateHDREnabledForAR;
@property (nonatomic) BOOL shouldRestartAREffectAtVideoEnd;
@property (nonatomic) BOOL shouldUsePrecompiledShader;
@property (nonatomic) BOOL shouldDiffSetState;
@property (nonatomic) BOOL shouldDiffSetAsset;
@property (nonatomic) BOOL shouldDiffAudioTracks;
@property (nonatomic) BOOL shouldDiffSetPlayableRange;
@property (nonatomic) BOOL shouldDiffAddStickerAndAddBurnedInSticker;
@property (nonatomic) BOOL doNotResetPlaybackTimelineObservers;
@property (nonatomic) BOOL shouldUseOriginalAsDefaultFilterName;
@property (retain, nonatomic) NSObject<METAMediaCompositionPerformanceLoggerProtocol> *performanceLogger;
@property (weak, nonatomic) NSObject<METAMediaCompositionViewDelegate> *delegate;
@property (weak, nonatomic) NSObject<METAMediaCompositionViewPlaybackLoggingDelegate> *playbackLoggingDelegate;
@property (retain, nonatomic) METAMediaCompositionState *mediaCompositionState;
@property (readonly, nonatomic) METASwipableFilterMediaView *swipableFilterMediaView;
@property (nonatomic) struct METAMediaTransform { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } mediaTransform;
@property (nonatomic) struct METAMediaTransform { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } delayedMediaTransform;
@property (retain, nonatomic) _TtC25METAMediaFilterParameters25METAMediaFilterParameters *mediaFilterParameters;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } compositionSize;
@property (retain, nonatomic) NSObject<METAMediaAsset> *asset;
@property (readonly, nonatomic) BOOL loading;
@property (nonatomic) BOOL shouldLoop;
@property (readonly, nonatomic) struct __CVBuffer * unfilteredMediaDisplayTexture;
@property (readonly, nonatomic) struct __CVBuffer * displayTexture;
@property (retain, nonatomic) FBAREngineFilter *arEngineFilter;
@property (retain, nonatomic) NSObject<METAMediaEffect> *mediaEffect;
@property (retain, nonatomic) NSArray *postProcessingEffects;
@property (readonly, nonatomic) UIView *stickerContainerView;
@property (readonly, nonatomic) UIView *burnedInStickerContainerView;
@property (readonly, nonatomic) UIView *drawingCanvasView;
@property (readonly, nonatomic) struct METARegion { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; } mediaRegion;
@property (nonatomic) double mediaScale;
@property (readonly, nonatomic) BOOL mediaSupportsUserInteraction;
@property (readonly, nonatomic) BOOL colorFiltersLimitedToMediaRegion;
@property (readonly, nonatomic) NSArray *availableBackgroundGradients;
@property (nonatomic) long long currentBackgroundGradientIndex;
@property (readonly, nonatomic) METABackgroundGradient *customGradient;
@property (readonly, nonatomic) METABackgroundGradient *currentBackgroundGradient;
@property (retain, nonatomic) UIColor *backgroundAssetOverlayColor;
@property (readonly, nonatomic) double currentPlaybackRate;
@property (readonly, nonatomic) double effectivePlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) double currentMediaTime;
@property (readonly, nonatomic) double playbackDuration;
@property (retain, nonatomic) UILabel *centerScreenInstructionsLabel;
@property (copy, nonatomic) NSArray *assetAudioEffects;
@property (nonatomic) double overallCompositionVolume;
@property (nonatomic) double assetVolume;
@property (retain, nonatomic) METAAnimationCurve *assetVolumeCurve;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL mainAssetMuted;
@property (nonatomic) BOOL stickerMediaSynchronizationDisabled;
@property (nonatomic) double stickerPlaybackTime;
@property (nonatomic) double videoAssetTimeStartOffset;
@property (retain, nonatomic) NSObject<METAMediaContainerAnimator> *mediaContainerAnimator;
@property (nonatomic) struct { double x0; double x1; } playableRange;
@property (nonatomic) struct CGPoint { double x0; double x1; } swipeableFiltersMediaScrollViewContentOffset;
@property (readonly, nonatomic) NSArray *colorFilters;
@property (nonatomic) BOOL playAfterStateSet;
@property (readonly, nonatomic) NSArray *audioTrackIdentifiers;
@property (nonatomic) BOOL enableTimeOffsetAdjustment;
@property (nonatomic) BOOL waitForInitialHDRSetBeforeRendering;
@property (nonatomic) BOOL forceRefreshAt30Fps;
@property (readonly, nonatomic) BOOL localLaplacianEnabled;
@property (nonatomic) BOOL luxEnabled;
@property (readonly, nonatomic) IGGLKSession *igglkSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithColorFilters:(id)filters drawingLayer:(id)layer stickerLayer:(id)layer burnedInStickerLayer:(id)layer igglkSession:(id)session;
- (id)initWithColorFilters:(id)filters defaultColorFiltersStrength:(double)strength drawingLayer:(id)layer stickerLayer:(id)layer burnedInStickerLayer:(id)layer igglkSession:(id)session supportHDR:(BOOL)hdr filterChain:(id)chain;
- (void)setUseWorkingTexture:(BOOL)texture;
- (void)setReusePixelBuffer:(BOOL)buffer;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_softResetStateWithMediaCompositionState:(id)state withDiffSet:(id)set isUsingNewState:(BOOL)state;
- (void)setPanGestureMinimumNumberOfTouches:(double)touches;
- (id)metaMediaPlayerLogger;
- (void)setCurrentPlaybackTime:(double)time completionHandler:(id /* block */)handler;
- (void)play;
- (void)pause;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time canWaitForMediaToLoad:(BOOL)load;
- (BOOL)_allMediaLoaded;
- (void)playbackTimelineDidUpdatePlaybackState:(id)state;
- (void)playbackTimeline:(id)timeline didUpdateCurrentTime:(double)time;
- (void)audioTrackPlayerDidUpdatePlayabilityStatus:(id)status;
- (void)_syncPlayableMediaWithMasterTimeline;
- (void)_validateAndSetPlayableRange:(struct { double x0; double x1; })range;
- (void)_playToEndIfNeeded;
- (void)_setupDidPlayToEndObserver;
- (void)_handlePlayToEnd;
- (id)addBoundaryTimeObserverForTime:(double)time usingBlock:(id /* block */)block;
- (void)removeTimeObserver:(id)observer;
- (void)swipableFilterMediaView:(id)view didUpdateMediaDisplayTexture:(struct __CVBuffer *)texture withPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)addBurnedInSticker:(id)sticker withSceneSpaceToMediaSpaceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)addSticker:(id)sticker atIndex:(long long)index withSceneSpaceToMediaSpaceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)swipableFilterMediaViewShouldResetImageSourceFromRenderer:(id)renderer;
- (BOOL)swipableFilterMediaViewShouldRenderSkippedImageSource:(id)source;
- (BOOL)swipableFilterMediaViewShouldEnableImageSourceWhenNoAsset:(id)asset;
- (BOOL)swipableFilterMediaViewShouldUseBoundsSizeForMediaSize:(id)size;
- (BOOL)swipableFilterMediaViewShouldInsertIntermediateStepForAREffect:(id)areffect;
- (BOOL)swipableFilterMediaViewShouldReuseAssetRenderer:(id)renderer;
- (BOOL)swipableFilterMediaViewShouldMinimizeImageSourceViewMemory:(id)memory;
- (BOOL)swipableFilterMediaViewShouldEnforceSingleRendering:(id)rendering;
- (BOOL)swipableFilterMediaViewShouldMinimizeImageSourceViewDrawables:(id)drawables;
- (BOOL)swipableFilterMediaViewShouldUseAdditionalTransformMediaNode:(id)node;
- (BOOL)swipableFilterMediaViewShouldDoBackgroundRendering:(id)rendering;
- (BOOL)swipableFilterMediaViewShouldWaitForNewPixelBuffer:(id)buffer;
- (BOOL)swipableFilterMediaViewShouldCacheImageSourceSurfaces:(id)surfaces;
- (BOOL)swipableFilterMediaViewShouldCacheImageSourceProcessors:(id)processors;
- (BOOL)swipableFilterMediaViewShouldResetFilterInputOutputAfterRender:(id)render;
- (BOOL)swipableFilterMediaViewShoulUseSeparateTextureCacheForImageSource:(id)source;
- (BOOL)swipableFilterMediaViewShouldFlushImageSoureCacheOnPause:(id)pause;
- (BOOL)swipableFilterMediaViewShouldUpdateHDREnabledForAR:(id)ar;
- (void)swipableFilterMediaView:(id)view didUpdateLoadingState:(BOOL)state;
- (BOOL)swipableFilterMediaViewShouldBeginGesture:(id)gesture isColorFilterSwipe:(BOOL)swipe;
- (void)swipableFilterMediaView:(id)view willSettleOnNewColorFilter:(id)filter;
- (void)swipableFilterMediaView:(id)view didSettleOnColorFilter:(id)filter;
- (void)swipableFilterMediaViewDidFinishResizingAndPositioningMedia:(id)media;
- (void)swipableFilterMediaViewDidUpdateMediaSizeAndPosition:(id)position;
- (struct METAMediaTransform { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })swipableFilterMediaView:(id)view additionalMediaTransformAtMediaTime:(double)time;
- (void)swipableFilterMediaViewDidBeginResizingAndPositioningMedia:(id)media;
- (BOOL)swipableFilterMediaView:(id)view shouldBeginResizingAndPositioningMediaWithGesture:(id)gesture;
- (void)swipableFilterMediaView:(id)view didUpdateCurrentTime:(double)time;
- (void)swipableFilterMediaView:(id)view effectivePlaybackRateDidChange:(double)change;
- (void)swipableFilterMediaViewPlaybackDidFail:(id)fail withError:(id)error isFatalError:(BOOL)error;
- (void)swipableFilterMediaView:(id)view didUpdateStallState:(BOOL)state;
- (void)swipableFilterMediaView:(id)view didUpdateHDRVideoRendering:(BOOL)rendering;
- (void)swipableFilterMediaViewDidUpdateContentTransform:(id)transform;
- (void)animateMessageOnScreen:(id)screen;
- (id)addAudioTrack:(id)track withIdentifier:(id)identifier;
- (id)audioTrackWithIdentifier:(id)identifier;
- (void)removeAudioTrackWithIdentifier:(id)identifier;
- (void)setVolume:(double)volume forAudioTrackWithIdentifier:(id)identifier;
- (double)volumeForAudioTrackWithIdentifier:(id)identifier;
- (void)setVolumeCurve:(id)curve forAudioTrackWithIdentifier:(id)identifier;
- (id)volumeCurveForAudioTrackWithIdentifier:(id)identifier;
- (void)removeVolumeCurveForAudioTrackWithIdentifier:(id)identifier;
- (void)setMuted:(BOOL)muted forAudioTrackWithIdentifier:(id)identifier;
- (BOOL)isAudioTrackMuted:(id)muted;
- (void)setStartTime:(double)time forAudioTrackWithIdentifier:(id)identifier;
- (double)currentPlaybackTimeForAudioTrackWithIdentifier:(id)identifier;
- (double)currentPlaybackRateForAudioTrackWithIdentifier:(id)identifier;
- (BOOL)isMuted;
- (BOOL)isMainAssetMuted;
- (id)audioEffectsForAudioTrackWithIdentifier:(id)identifier;
- (void)setAudioEffects:(id)effects forAudioTrackWithIdentifier:(id)identifier;
- (id)generateFilteredMediaDisplayImage;
- (void)redrawMediaScene;
- (void)_applicationWillResignActive:(id)active;
- (void)_applicationDidEnterForeground:(id)foreground;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)setSourceType:(id)type;
- (BOOL)isLocalLaplacianEnabled;
- (BOOL)isLuxEnabled;
- (BOOL)isLoading;
@end

#endif /* METAMediaCompositionView_h */