//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21IGStoryNetegoTISUView21IGStoryNetegoTISUView_h
#define _TtC21IGStoryNetegoTISUView21IGStoryNetegoTISUView_h
@import Foundation;

#include "IGBaseView.h"
#include "IGStoryPlayerMediaViewType-Protocol.h"
#include "IGVPVDImpressionHelper.h"

@interface _TtC21IGStoryNetegoTISUView21IGStoryNetegoTISUView : IGBaseView<IGStoryPlayerMediaViewType> { // (Swift)
  /* instance variables */
   postViews;
   analyticsModule;
   postViewModels;
   postMedia;
   userSession;
   igLayout;
   progressManager;
   delegate;
}

@property (nonatomic, retain) IGVPVDImpressionHelper *vpvdImpressionHelper;
@property (nonatomic, retain) IGVPVDImpressionHelper *merlinVpvdImpressionHelper;

/* instance methods */
- (void)layoutSubviews;
- (id)overlayTapModels;
- (void)configureWithItem:(id)item delegate:(id)delegate videoLogger:(id)logger videoLoggingConfig:(id)config userSession:(id)session module:(id)module;
- (void)retryLoadItem:(id)item currentLoadingError:(id)error;
- (void)play;
- (void)pauseWithReason:(long long)reason;
- (void)stopWithReason:(long long)reason pauseReasonDebugString:(id)string;
- (BOOL)isPlaying;
- (void)seekToBeginning;
- (void)seekToBeginningAndPause;
- (void)seekToTime:(double)time;
- (void)prepareForReuse;
- (BOOL)isViewFinishedLoading;
- (BOOL)isShowingContent;
- (id)item;
- (void)setAudioEnabled:(BOOL)enabled reason:(long long)reason;
- (struct CGSize { double x0; double x1; })mediaSize;
- (double)mediaCurrentTime;
- (double)mediaCurrentFrameTime;
- (double)cellPlayTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC21IGStoryNetegoTISUView21IGStoryNetegoTISUView_h */