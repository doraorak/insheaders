//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryNetegoBakeoffView_h
#define IGStoryNetegoBakeoffView_h
@import Foundation;

#include "UIView.h"
#include "IGStoryPlayerMediaViewDelegate-Protocol.h"
#include "IGStoryPlayerMediaViewType-Protocol.h"
#include "IGStoryStaticMediaProgressManager.h"
#include "IGStoryStaticMediaProgressManagerDelegate-Protocol.h"
#include "IGVPVDImpressionHelper.h"

@class IGStoryNetegoModel, NSString, UIImageView, UITextView, UIVisualEffectView;
@protocol IGStoryItemType><IGUnitItemInformationProviding, IGStoryNetegoBakeoffViewDelegate, UIView<IGStoryPlayerMediaViewType;

@interface IGStoryNetegoBakeoffView : UIView<IGStoryStaticMediaProgressManagerDelegate, IGStoryPlayerMediaViewType> {
  /* instance variables */
  NSObject<IGStoryPlayerMediaViewDelegate> *_playerMediaViewdelegate;
  NSObject<IGStoryNetegoBakeoffViewDelegate> *_netegoViewDelegate;
  IGStoryStaticMediaProgressManager *_progressManager;
  IGStoryNetegoModel *_storyNetegoModel;
  UIView<IGStoryPlayerMediaViewType> *_mediaView;
  NSObject<IGStoryItemType><IGUnitItemInformationProviding> *_backgroundMediaItem;
  UIVisualEffectView *_blurView;
  UITextView *_title;
  UITextView *_message;
  UIImageView *_iconImageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IGVPVDImpressionHelper *vpvdImpressionHelper;
@property (retain, nonatomic) IGVPVDImpressionHelper *merlinVpvdImpressionHelper;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame netegoViewDelegate:(id)delegate netegoModel:(id)model;
- (void)layoutSubviews;
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
- (id)item;
- (void)setAudioEnabled:(BOOL)enabled reason:(long long)reason;
- (struct CGSize { double x0; double x1; })mediaSize;
- (double)mediaCurrentTime;
- (double)mediaCurrentFrameTime;
- (double)cellPlayTime;
- (BOOL)isViewFinishedLoading;
- (BOOL)isShowingContent;
- (void)storyStaticMediaProgressManager:(id)manager didUpdateProgress:(double)progress;
- (void)storyStaticMediaProgressManagerDidPlayToEnd:(id)end;
@end

#endif /* IGStoryNetegoBakeoffView_h */
