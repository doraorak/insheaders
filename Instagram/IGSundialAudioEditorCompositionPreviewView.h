//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAudioEditorCompositionPreviewView_h
#define IGSundialAudioEditorCompositionPreviewView_h
@import Foundation;

#include "UIView.h"
#include "IGAssetPlayerViewDelegate-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGAssetPlayerView, IGSundialComposition, NSString, UIImageView;
@protocol IGSundialAudioEditorCompositionPreviewViewDelegate;

@interface IGSundialAudioEditorCompositionPreviewView : UIView<IGAssetPlayerViewDelegate> {
  /* instance variables */
  UIImageView *_previewImageView;
  IGAssetPlayerView *_videoView;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProviding;
}

@property (weak, nonatomic) NSObject<IGSundialAudioEditorCompositionPreviewViewDelegate> *delegate;
@property (retain, nonatomic) IGSundialComposition *composition;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL muted;
@property (nonatomic) double volume;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) double effectivePlaybackRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame launcherSetProviding:(id)providing;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (void)seekToTime:(double)time;
- (void)seekToTime:(double)time completionHandler:(id /* block */)handler;
- (void)assetPlayerView:(id)view didPlayToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)assetPlayerViewDidPlayToEnd:(id)end;
- (void)assetPlayerView:(id)view effectivePlaybackRateDidChange:(double)change;
- (void)assetPlayerViewAssetLoaded:(id)loaded;
- (void)assetPlayerViewPlayStateDidChange:(id)change;
- (void)assetPlayerView:(id)view readyToSyncAndPlay:(BOOL)play;
@end

#endif /* IGSundialAudioEditorCompositionPreviewView_h */
