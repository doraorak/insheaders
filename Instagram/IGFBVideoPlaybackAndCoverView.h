//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBVideoPlaybackAndCoverView_h
#define IGFBVideoPlaybackAndCoverView_h
@import Foundation;

#include "UIView.h"
#include "IGFBVideoPlaybackView.h"
#include "NSObject-Protocol.h"

@class IGVideoComposition, IGVideoPlayButton, NSString, UIImageView;
@protocol IGVideoPlaybackViewDelegate, UIView<IGVideoPlaybackViewType;

@interface IGFBVideoPlaybackAndCoverView : UIView<NSObject> {
  /* instance variables */
  IGVideoPlayButton *_playButton;
  struct CGSize { double width; double height; } _aspectRatio;
  UIView<IGVideoPlaybackViewType> *_playbackView;
  IGFBVideoPlaybackView *_fbVideoPlaybackView;
}

@property (nonatomic) long long mode;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) NSString *filterName;
@property (weak, nonatomic) NSObject<IGVideoPlaybackViewDelegate> *delegate;
@property (retain, nonatomic) IGVideoComposition *video;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) double effectivePlaybackRate;
@property (nonatomic) double filterStrength;
@property (nonatomic) BOOL presentsWithTransaction;
@property (nonatomic) BOOL looping;
@property (nonatomic) BOOL muted;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } playableRange;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (copy, nonatomic) id /* block */ didReceivePixelBuffer;
@property (nonatomic) BOOL supportCurrentFrameRerenders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoAspectRatio:(struct CGSize { double x0; double x1; })ratio fbVideoPlaybackView:(id)view showPlayButton:(BOOL)button;
- (void)layoutSubviews;
- (BOOL)isLooping;
- (BOOL)isMuted;
- (void)makeKey;
- (void)seekToPosition:(double)position;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)playFromStart;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)stop;
- (void)play;
- (void)playInReverse;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (void)togglePlayback;
- (void)rerenderCurrentFrame;
@end

#endif /* IGFBVideoPlaybackAndCoverView_h */
