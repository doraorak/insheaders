//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNPlayerController_h
#define SNPlayerController_h
@import Foundation;

#include "SNAnalyticsData.h"
#include "SNAnalyticsManager.h"
#include "SNAnimationInteractionManager.h"
#include "SNAnimationInteractivityStateManager.h"
#include "SNAnimationModel.h"
#include "SNAnimationModelProviding-Protocol.h"
#include "SNPlaybackItem.h"
#include "SNPlaybackOptions.h"
#include "SNPlaybackWatchdog.h"
#include "SNPlayerPlaybackListener-Protocol.h"
#include "SNPlayerView.h"
#include "SNRenderingFallbackManager.h"
#include "SNRenderingInfoProviding-Protocol.h"
#include "SRAnimationModelProvidingStateListenerAnnouncer.h"
#include "SRController-Protocol.h"
#include "SRPlaybackStateListenerAnnouncer.h"
#include "SRPlayerExtensionsHandler.h"
#include "SRRenderingFallbackListenerAnnouncer.h"
#include "SRTouchEventHandlingListenerAnnouncer.h"
#include "ShowreelGlobalConfig.h"

@class FBStateMachine, NSString, UIView;

@interface SNPlayerController : NSObject<SNPlayerPlaybackListener, SRController> {
  /* instance variables */
  UIView *_playerContainerView;
  NSObject<SNRenderingInfoProviding> *_renderingInfoProvider;
  NSString *_sessionId;
  SNPlaybackOptions *_options;
  FBStateMachine *_stateMachine;
  NSObject<SNAnimationModelProviding> *_modelProvider;
  SNAnalyticsManager *_analyticsManager;
  SNAnimationInteractionManager *_interactionManager;
  SNAnimationInteractivityStateManager *_interactivityStateManager;
  SNRenderingFallbackManager *_renderingFallbackManager;
  BOOL _isPrefetch;
  BOOL _postImpressionDetectionIsEnabled;
  BOOL _keyframesV3PrepareAsyncIsEnabled;
  SRPlayerExtensionsHandler *_playerExtensionsHandler;
  BOOL _impressionIsRegistered;
  BOOL _manualPlaybackMonitoringEnabled;
  SNPlaybackWatchdog *_playbackMonitor;
  BOOL _hasLoggedFullImpression;
  BOOL _hasLoggedPartialImpression;
}

@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) SNPlaybackItem *playbackItem;
@property (readonly, nonatomic) SNAnalyticsData *analyticsData;
@property (readonly, nonatomic) SNAnimationModel *animationModel;
@property (readonly, nonatomic) unsigned long long playbackState;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicPlayerViewSize;
@property (readonly, nonatomic) SRAnimationModelProvidingStateListenerAnnouncer *modelProvidingStateAnnouncer;
@property (readonly, nonatomic) SRPlaybackStateListenerAnnouncer *playbackStateAnnouncer;
@property (readonly, nonatomic) SRTouchEventHandlingListenerAnnouncer *touchEventAnnouncer;
@property (readonly, nonatomic) SRRenderingFallbackListenerAnnouncer *renderingFallbackAnnouncer;
@property (readonly, nonatomic) ShowreelGlobalConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) double playbackDuration;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isFinished;

/* instance methods */
- (id)initWithModelProvider:(id)provider playbackItem:(id)item analyticsData:(id)data options:(id)options analyticsLogger:(id)logger objectSet:(id)set;
- (id)initWithModelProvider:(id)provider playbackItem:(id)item analyticsData:(id)data options:(id)options analyticsLogger:(id)logger config:(id)config;
- (void)dealloc;
- (id)_containerView;
- (void)prepareForPlayback;
- (void)reload;
- (void)reset;
- (void)resetInteractivity;
- (void)logImpressionStart;
- (void)logActiveRequestReused;
- (id)newRenderInstanceWithCustomLoggingInfo:(id)info;
- (void)finishLogging:(id)logging;
- (void)touchAtPoint:(struct CGPoint { double x0; double x1; })point inView:(id)view;
- (void)handleTouchWithContext:(id)context;
- (void)touchableRegionsInView:(id)view onComplete:(id /* block */)complete;
- (id)touchableRegionsWithLayerTags:(id)tags inView:(id)view;
- (id)interactiveRegions;
- (void)fetchRenderingComponentInfos:(id /* block */)infos;
- (id)initWithModelProvider:(id)provider playbackItem:(id)item analyticsData:(id)data options:(id)options analyticsLogger:(id)logger interactionManager:(id)manager config:(id)config;
- (id)_createQPLLogger;
- (id)animationDocumentWithName:(id)name;
- (id)animationAdditionalPartWithName:(id)name;
- (id)playerControllerForDocumentNamed:(id)named playerControllerCreator:(id)creator;
- (id)playerControllerForAdditionalPartNamed:(id)named playerControllerCreator:(id)creator;
- (void)fireInteractivityEvent:(id)event;
- (id)interactionEventActions;
- (id)animationLayerWithLayerTag:(id)tag;
- (id)animationLayersWithLayerTag:(id)tag;
- (id)modelProvider;
- (id)interactionManager;
- (void)setIsPrefetch:(BOOL)prefetch;
- (id)renderingInfoProvider;
- (void)setRenderingInfoProvider:(id)provider;
- (BOOL)postImpressionDetectionIsEnabled;
- (void)setPostImpressionDetectionIsEnabled:(BOOL)enabled;
- (id)renderingFallbackManager;
- (void)_prepareForPlayback;
- (void)_updatePlayerAnimation:(id)animation;
- (void)_startPrefetchAdditionalParts;
- (unsigned long long)_currentState;
- (BOOL)_shouldPrepareForAnimation:(id)animation;
- (void)_tryPlaybackStateTransitionToState:(unsigned long long)state;
- (void)_tryPlaybackStateTransitionToState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_performPlaybackStateTransitionSuccessFromState:(unsigned long long)state toState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_performPlaybackStateTransitionFailureFromState:(unsigned long long)state toState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_performPlaybackStateTransitionToUnpreparedFromState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_performPlaybackStateTransitionToPreparingFromState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_performPlaybackStateTransitionToPreparedFromState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_tryPlaybackStateTransitionToPlayingFromState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_performPlaybackStateTransitionToPlayingFromState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_tryPlaybackStateTransitionToPausedFromState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_performPlaybackStateTransitionToPausedFromState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)_performPlaybackStateTransitionToErrorFromState:(unsigned long long)state withContext:(struct SNPlaybackStateTransitionContext { struct { double x0; } x0; struct { BOOL x0; BOOL x1; } x1; struct { id x0; } x2; })context;
- (void)play;
- (void)playFromProgress:(double)progress;
- (void)pause;
- (void)wait;
- (void)seekToProgress:(double)progress;
- (void)stop;
- (void)player:(id)player didEndPlaybackWithLoopCountRemaining:(long long)remaining;
- (void)_configureViewpointTracking;
- (BOOL)_trackPlayerVisibility:(double)visibility state:(long long)state hasSeenBefore:(BOOL)before hasBeenViewedCompletely:(BOOL)completely;
- (void)_cleanupWhenImpressionEnd;
- (void)provideMetadataForCollector:(id)collector;
- (id)templateName;
- (id)clientName;
- (void)_handleTouchableRegionsWithParameters:(id)parameters;
- (BOOL)_hasAnimationPrepared;
- (void)setPlayerExtensionsContext:(id)context;
- (long long)downloadedBytes;
- (void)setAudioEnabled:(BOOL)enabled userInitiated:(BOOL)initiated;
- (BOOL)hasRenderableModel;
- (id)bloksRendering;
- (void)addModelProviderListener:(id)listener;
- (id)qplLogger;
@end

#endif /* SNPlayerController_h */