//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFFrameDropObserver_h
#define FNFFrameDropObserver_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol FNFAssetEventListener, OS_dispatch_queue;

@interface FNFFrameDropObserver : NSObject<NSObject> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NSObject<FNFAssetEventListener> *_listener;
  double _frameDropLastTimestamp;
  double _frameDropTimeBetweenFrames;
  unsigned long long _warningMinTotalFrames;
  double _warningRatioThreshold;
  unsigned int _frameRate;
  struct FNFFrameDropInfo { unsigned long long totalFrames; unsigned long long droppedFrames; unsigned long long droppedFramesLarge; unsigned long long droppedFramesVeryLarge; } _info;
  BOOL _isPlaying;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithListener:(id)listener warningMinTotalFrames:(unsigned long long)frames warningRatioThreshold:(double)threshold;
- (void)didStartPlaying:(unsigned int)playing;
- (void)didRenderFrame;
- (void)didPauseFrameDropCounter:(struct FNFPlayerInternalState { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; struct { long long x0; int x1; unsigned int x2; long long x3; } x17; struct { long long x0; int x1; unsigned int x2; long long x3; } x18; struct { long long x0; int x1; unsigned int x2; long long x3; } x19; struct { long long x0; int x1; unsigned int x2; long long x3; } x20; struct { long long x0; int x1; unsigned int x2; long long x3; } x21; double x22; float x23; struct { long long x0; int x1; unsigned int x2; long long x3; } x24; float x25; id x26; id x27; id x28; id x29; id x30; id x31; struct { long long x0; int x1; unsigned int x2; long long x3; } x32; unsigned int x33; id x34; id x35; id x36; id x37; long long x38; struct opaqueCMFormatDescription * x39; unsigned long long x40; long long x41; struct FNFPlayerStallState { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; unsigned long long x6; BOOL x7; } x42; struct FNFPlayerSeekState { BOOL x0; BOOL x1; int x2; } x43; int x44; int x45; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x46; id /* block */ x47; id x48; id x49; id x50; id x51; id x52; id x53; id x54; struct { long long x0; int x1; unsigned int x2; long long x3; } x55; struct FNFFrameDisplayState { double x0; double x1; double x2; } x56; struct FNFAVSyncStatus { double x0; long long x1; } x57; struct FNFDisplayedFrameInfo { double x0; double x1; double x2; } x58; struct FNFRenderedFrameInfo { double x0; double x1; BOOL x2; } x59; id x60; id x61; unsigned long long x62; unsigned long long x63; unsigned long long x64; unsigned long long x65; id x66; BOOL x67; BOOL x68; BOOL x69; struct FNFFrameDropInfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x70; int x71; })counter;
- (struct FNFFrameDropInfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })info;
@end

#endif /* FNFFrameDropObserver_h */
