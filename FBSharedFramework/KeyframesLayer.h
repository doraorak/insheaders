//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KeyframesLayer_h
#define KeyframesLayer_h
@import Foundation;

#include "CALayer.h"
#include "KFFrameUpdateListenerProtocol-Protocol.h"
#include "KFFrameUpdateTimer.h"
#include "KFInstance.h"
#include "KFInstanceDelegateProtocol-Protocol.h"
#include "KFLayerProtocol-Protocol.h"
#include "KFPlaybackControllerDelegate-Protocol.h"

@class CALayer, NSString;

@interface KeyframesLayer : CALayer<KFInstanceDelegateProtocol, KFPlaybackControllerDelegate, KFFrameUpdateListenerProtocol, KFLayerProtocol> {
  /* instance variables */
  KFInstance *_instance;
  CALayer *_rootLayer;
  long long _preparationMode;
  KFFrameUpdateTimer *_updateTimer;
}

@property (readonly, nonatomic) long long renderingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long kfLayerVersion;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isCurrentlyPlaying;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) long long playCountRemaining;
@property (readonly, nonatomic) double progress;
@property (copy, nonatomic) id /* block */ onPlayEnd;
@property (copy, nonatomic) id /* block */ onReadyForPlayback;
@property (nonatomic) BOOL allowQueuedCommands;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicSize;
@property (readonly, nonatomic) double animationDuration;
@property (readonly, nonatomic) double frameRate;

/* instance methods */
- (id)initWithData:(id)data;
- (id)initWithData:(id)data renderingMode:(long long)mode;
- (id)initWithDataController:(id)controller;
- (id)initWithDataController:(id)controller renderingMode:(long long)mode;
- (id)initWithDataController:(id)controller mutator:(id)mutator;
- (id)initWithDataController:(id)controller mutator:(id)mutator renderingMode:(long long)mode;
- (id)initWithData:(id)data mutator:(id)mutator;
- (id)initWithData:(id)data mutator:(id)mutator renderingMode:(long long)mode;
- (id)initWithDataController:(id)controller mutateBlock:(id /* block */)block;
- (id)initWithData:(id)data mutateBlock:(id /* block */)block;
- (id)initWithDataController:(id)controller mutateBlock:(id /* block */)block renderingMode:(long long)mode;
- (id)initWithData:(id)data mutateBlock:(id /* block */)block renderingMode:(long long)mode;
- (id)initWithDataController:(id)controller kf2Mutator:(id)mutator;
- (id)initWithDataController:(id)controller kf2Mutator:(id)mutator renderingMode:(long long)mode;
- (void)initCommon;
- (void)layoutSublayers;
- (BOOL)prepareSyncWithError:(out id *)error;
- (void)prepareAsyncWithCompletionQueue:(id)queue success:(id /* block */)success failure:(id /* block */)failure;
- (void)populateWorldSystemsForInstance:(id)instance;
- (void)instancePreparationDidComplete:(id)complete completion:(id /* block */)completion queue:(id)queue;
- (void)instancePreparationDidComplete:(id)complete reset:(BOOL)reset;
- (void)_onAsyncInstancePreparationDidComplete:(id)complete;
- (void)instanceMutateDidComplete:(id)complete;
- (void)caSystem:(id)system didRegisterRootLayer:(id)layer;
- (void)beginFrameUpdates;
- (void)endFrameUpdates;
- (void)onFrameTick:(double)tick;
- (void)_extractDocumentProperties;
- (void)_configureSystemPassesForInstance:(id)instance;
- (id)_createPlaybackController;
- (void)playbackController:(id)controller playCountDidChange:(long long)change resetupWorld:(BOOL)world;
- (void)playbackController:(id)controller playCountRemainingDidChange:(long long)change;
- (BOOL)playbackController:(id)controller processPlayCountImmediatelyIfPossible:(long long)possible;
- (void)playbackController:(id)controller didPerformPlaybackOperation:(long long)operation progress:(double)progress;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seekToProgress:(double)progress;
- (void)seekToFinished;
- (void)seekToProgressInNextRunLoopOnMainQueue:(double)queue;
- (void)playCount:(long long)count;
- (void)playForever;
- (id)playbackAnnouncer;
- (void)updateWithTimeDelta:(double)delta;
@end

#endif /* KeyframesLayer_h */
