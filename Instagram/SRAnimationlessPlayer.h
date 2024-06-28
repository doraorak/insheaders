//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SRAnimationlessPlayer_h
#define SRAnimationlessPlayer_h
@import Foundation;

#include "SRAnimationModelProvidingStateListenerAnnouncer.h"
#include "SRController-Protocol.h"
#include "SRPlaybackExtendable-Protocol.h"
#include "SRPlaybackStateListenerAnnouncer.h"
#include "SRRenderingFallbackListenerAnnouncer.h"
#include "SRTouchEventHandlingListenerAnnouncer.h"

@class NSArray, NSString, UIView;

@interface SRAnimationlessPlayer : NSObject<SRController> {
  /* instance variables */
  NSObject<SRPlaybackExtendable> *_extendablePlayback;
  SRAnimationModelProvidingStateListenerAnnouncer *_stateAnnouncer;
  SRTouchEventHandlingListenerAnnouncer *_eventListenerAnnouncer;
  NSArray *_playbackExtensions;
}

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) SRPlaybackStateListenerAnnouncer *playbackStateAnnouncer;
@property (readonly, nonatomic) SRAnimationModelProvidingStateListenerAnnouncer *modelProvidingStateAnnouncer;
@property (readonly, nonatomic) SRRenderingFallbackListenerAnnouncer *renderingFallbackAnnouncer;
@property (readonly, nonatomic) unsigned long long playbackState;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicPlayerViewSize;
@property (readonly, nonatomic) SRTouchEventHandlingListenerAnnouncer *touchEventAnnouncer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) double playbackDuration;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isFinished;

/* instance methods */
- (id)init;
- (void)setPlayerExtensionsContext:(id)context;
- (BOOL)hasRenderableModel;
- (void)prepareForPlayback;
- (void)play;
- (void)pause;
- (void)reload;
- (void)setAudioEnabled:(BOOL)enabled userInitiated:(BOOL)initiated;
- (long long)downloadedBytes;
- (void)fetchRenderingComponentInfos:(id /* block */)infos;
- (id)bloksRendering;
- (void)resetInteractivity;
- (void)touchAtPoint:(struct CGPoint { double x0; double x1; })point inView:(id)view;
- (void)handleTouchWithContext:(id)context;
- (void)playFromProgress:(double)progress;
- (void)wait;
- (void)seekToProgress:(double)progress;
- (void)stop;
- (void)addModelProviderListener:(id)listener;
- (id)qplLogger;
- (void)provideMetadataForCollector:(id)collector;
- (id)templateName;
- (id)clientName;
@end

#endif /* SRAnimationlessPlayer_h */