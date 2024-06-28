//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryNetegoMetaGalleryToStoryView_h
#define IGStoryNetegoMetaGalleryToStoryView_h
@import Foundation;

#include "UIView.h"
#include "IGStoryNetegoBackgroundView.h"
#include "IGStoryPlayerMediaViewDelegate-Protocol.h"
#include "IGStoryPlayerMediaViewType-Protocol.h"
#include "IGStoryStaticMediaProgressManager.h"
#include "IGStoryStaticMediaProgressManagerDelegate-Protocol.h"
#include "IGVPVDImpressionHelper.h"

@class IGStackLayout, IGStoryNetegoMetaGalleryToStoryModel, IGUserSession, NSMutableArray, NSString;

@interface IGStoryNetegoMetaGalleryToStoryView : UIView<IGStoryStaticMediaProgressManagerDelegate, IGStoryPlayerMediaViewType> {
  /* instance variables */
  IGStackLayout *_layout;
  IGStoryNetegoBackgroundView *_backgroundView;
  IGStoryNetegoMetaGalleryToStoryModel *_viewModel;
  IGStoryStaticMediaProgressManager *_progressManager;
  NSObject<IGStoryPlayerMediaViewDelegate> *_playerMediaViewDelegate;
  NSMutableArray *_mediaImageViews;
  NSMutableArray *_mediaVideoViews;
  IGUserSession *_userSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IGVPVDImpressionHelper *vpvdImpressionHelper;
@property (retain, nonatomic) IGVPVDImpressionHelper *merlinVpvdImpressionHelper;

/* instance methods */
- (id)initWithViewModel:(id)model session:(id)session;
- (id)overlayTapModels;
- (void)layoutSubviews;
- (double)cellPlayTime;
- (void)configureWithItem:(id)item delegate:(id)delegate videoLogger:(id)logger videoLoggingConfig:(id)config userSession:(id)session module:(id)module;
- (BOOL)isPlaying;
- (BOOL)isShowingContent;
- (BOOL)isViewFinishedLoading;
- (id)item;
- (double)mediaCurrentFrameTime;
- (double)mediaCurrentTime;
- (struct CGSize { double x0; double x1; })mediaSize;
- (void)pauseWithReason:(long long)reason;
- (void)play;
- (void)prepareForReuse;
- (void)retryLoadItem:(id)item currentLoadingError:(id)error;
- (void)seekToBeginning;
- (void)seekToBeginningAndPause;
- (void)seekToTime:(double)time;
- (void)setAudioEnabled:(BOOL)enabled reason:(long long)reason;
- (void)stopWithReason:(long long)reason pauseReasonDebugString:(id)string;
- (void)storyStaticMediaProgressManager:(id)manager didUpdateProgress:(double)progress;
- (void)storyStaticMediaProgressManagerDidPlayToEnd:(id)end;
- (void)_createImageViewFromURLString:(id)urlstring index:(int)index;
- (void)_createVideoViewFromURLString:(id)urlstring index:(int)index;
- (void)_pauseAllVideos;
- (void)_playAllVideos;
- (void)simpleVideoPlayerViewAssetLoaded:(id)loaded;
@end

#endif /* IGStoryNetegoMetaGalleryToStoryView_h */
