//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMultiVideoView_h
#define IGMultiVideoView_h
@import Foundation;

#include "IGBaseView.h"
#include "IGMultiVideoViewDelegate-Protocol.h"

@class IGStackLayout, NSArray;

@interface IGMultiVideoView : IGBaseView { // (Swift)
  /* instance variables */
   medias;
   playConfiguration;
   defaultPlayMode;
   $__lazy_storage_$_playMode;
   $__lazy_storage_$_layout;
   $__lazy_storage_$_videoViews;
   $__lazy_storage_$_playbackCornerRadius;
   containerFactory;
   autoPlayEnabled;
   autoPlayReason;
   currentSerialPlayingView;
   containerViewLayout;
   containers;
}

@property (nonatomic) BOOL layoutDisabled;
@property (nonatomic, retain) NSObject<IGMultiVideoViewDelegate> *delegate;
@property (nonatomic, retain) IGStackLayout *layout;
@property (nonatomic) double minimumSpacing;
@property (nonatomic, copy) NSArray *videoViews;
@property (nonatomic) struct CGSize { double x0; double x1; } playbackSize;
@property (nonatomic) double playbackCornerRadius;
@property (nonatomic) long long videoCount;
@property (nonatomic) BOOL clipVideoViewsToBounds;

/* instance methods */
- (id)initWithVideoCount:(long long)count containerFactory:(id)factory;
- (id)initWithVideoCount:(long long)count;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)preparePlayback;
- (void)pausePlaybackWith:(long long)with;
- (void)startPlaybackWith:(long long)with;
- (void)stopPlaybackWith:(long long)with;
- (void)seekTo:(double)to trigger:(long long)trigger;
- (void)setAudioEnabled:(BOOL)enabled with:(long long)with;
- (void)reset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* IGMultiVideoView_h */