//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTVideoView_h
#define RCTVideoView_h
@import Foundation;

#include "RCTView.h"
#include "CAAnimationDelegate-Protocol.h"
#include "CALayerDelegate-Protocol.h"
#include "RCTImageRedirectProtocol-Protocol.h"
#include "RCTVideoViewDelegate-Protocol.h"

@class AVAsset, AVAssetImageGenerator, AVAudioSession, AVPlayer, AVPlayerItem, AVPlayerLayer, CALayer, NSObject, NSString, NSURL;

@interface RCTVideoView : RCTView<CAAnimationDelegate, CALayerDelegate> {
  /* instance variables */
  AVAsset *_asset;
  struct CGSize { double width; double height; } _assetSize;
  int _requestID;
  AVPlayer *_player;
  AVPlayerLayer *_playerLayer;
  AVPlayerItem *_item;
  AVAudioSession *_session;
  double _currentTime;
  AVAssetImageGenerator *generator;
  struct CGImage * _image;
  double _imageTime;
  double _imageTimeBeingLoaded;
  CALayer *_imageLayer;
  BOOL _needsUpdate;
  BOOL _pendingSeek;
  BOOL _stateChanged;
  NSObject *_timeObserverToken;
  NSObject<RCTImageRedirectProtocol> *_redirectDelegate;
}

@property (weak, nonatomic) NSObject<RCTVideoViewDelegate> *delegate;
@property (copy, nonatomic) NSURL *src;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) float volume;
@property (nonatomic) int bufferSegmentNum;
@property (copy, nonatomic) NSString *resizeMode;
@property (copy, nonatomic) NSString *silentMode;
@property (copy, nonatomic) id /* block */ onProgress;
@property (copy, nonatomic) id /* block */ onStateChange;
@property (copy, nonatomic) id /* block */ onVideoSizeDetected;
@property (readonly, nonatomic) int state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRedirectDelegate:(id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_reset;
- (void)dealloc;
- (void)seekToTime:(double)time;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_setState:(int)state;
- (void)_update;
- (void)_updateAsset:(id /* block */)asset;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)playerItemDidReachEnd:(id)end;
- (void)_updateImage;
@end

#endif /* RCTVideoView_h */