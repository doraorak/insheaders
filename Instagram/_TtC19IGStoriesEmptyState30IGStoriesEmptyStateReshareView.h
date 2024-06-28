//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC19IGStoriesEmptyState30IGStoriesEmptyStateReshareView_h
#define _TtC19IGStoriesEmptyState30IGStoriesEmptyStateReshareView_h
@import Foundation;

#include "IGBaseView.h"
#include "IGFollowControllerDelegate-Protocol.h"
#include "IGStoryPlayerMediaViewType-Protocol.h"
#include "IGVPVDImpressionHelper.h"

@interface _TtC19IGStoriesEmptyState30IGStoriesEmptyStateReshareView : IGBaseView<IGStoryPlayerMediaViewType, IGFollowControllerDelegate> { // (Swift)
  /* instance variables */
   userSession;
   analyticsModule;
   author;
   onCTAHandleIntent;
   $__lazy_storage_$_followButton;
   $__lazy_storage_$_backgroundView;
   mediaView;
   $__lazy_storage_$_headerView;
   $__lazy_storage_$_followController;
   context;
   mediaId;
   reelType;
   carouselIndex;
   templateId;
}

@property (nonatomic, retain) IGVPVDImpressionHelper *vpvdImpressionHelper;
@property (nonatomic, retain) IGVPVDImpressionHelper *merlinVpvdImpressionHelper;

/* instance methods */
- (void)layoutSubviews;
- (void)onFollowButton:(id)button;
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
- (void)setAudioEnabled:(BOOL)enabled reason:(long long)reason;
- (struct CGSize { double x0; double x1; })mediaSize;
- (double)mediaCurrentTime;
- (double)mediaCurrentFrameTime;
- (double)cellPlayTime;
- (id)item;
- (void)followControllerDidDetectNewButtonState:(id)state;
- (void)followController:(id)controller buttonWasTappedWithAction:(long long)action;
- (void)followController:(id)controller didCompleteAction:(long long)action success:(BOOL)success;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC19IGStoriesEmptyState30IGStoriesEmptyStateReshareView_h */
