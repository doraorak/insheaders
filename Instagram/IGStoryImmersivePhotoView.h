//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryImmersivePhotoView_h
#define IGStoryImmersivePhotoView_h
@import Foundation;

#include "UIView.h"
#include "IGImageProgressViewDelegate-Protocol.h"
#include "IGImmersive3DPhotoView.h"
#include "IGRenderingLoggingProviding-Protocol.h"
#include "IGStoryAdsAudioBehaving-Protocol.h"
#include "IGStoryImageProvider-Protocol.h"
#include "IGStoryPhotoViewRenderingModel.h"
#include "IGStoryPlayerMediaViewDelegate-Protocol.h"
#include "IGStoryPlayerMediaViewType-Protocol.h"
#include "IGStoryStaticMediaProgressManager.h"
#include "IGStoryStaticMediaProgressManagerDelegate-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"
#include "IGVPVDImpressionHelper.h"

@class IGImageProgressView, IGImageSpecifier, NSString, UIImageView;
@protocol IGStoryItemType><IGUnitItemInformationProviding;

@interface IGStoryImmersivePhotoView : UIView<IGImageProgressViewDelegate, IGStoryStaticMediaProgressManagerDelegate, IGStoryPlayerMediaViewType, IGRenderingLoggingProviding> {
  /* instance variables */
  IGStoryPhotoViewRenderingModel *_renderingModel;
  NSObject<IGStoryImageProvider> *_targetPhoto;
  double _totalDuration;
  NSObject<IGStoryAdsAudioBehaving> *_audioBehavior;
  IGImmersive3DPhotoView *_immersivePhotoView;
  IGImageProgressView *_photoView;
  IGStoryStaticMediaProgressManager *_progressManager;
  IGImageSpecifier *_mediaViewLastLoadedImageSpecifier;
  double _progressManagerBackup;
}

@property (readonly, weak, nonatomic) NSObject<IGStoryPlayerMediaViewDelegate> *delegate;
@property (retain, nonatomic) NSString *module;
@property (retain, nonatomic) NSObject<IGUserLauncherSet> *launcherSet;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) NSObject<IGStoryItemType><IGUnitItemInformationProviding> *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IGVPVDImpressionHelper *vpvdImpressionHelper;
@property (retain, nonatomic) IGVPVDImpressionHelper *merlinVpvdImpressionHelper;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame renderingModel:(id)model audioBehavior:(id)behavior loggingConfig:(id)config userSession:(id)session;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame renderingModel:(id)model audioBehavior:(id)behavior userSession:(id)session;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame renderingModel:(id)model userSession:(id)session;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame renderingModel:(id)model loggingConfig:(id)config userSession:(id)session;
- (void)layoutSubviews;
- (void)setIconImage:(id)image;
- (void)_didTapLinkIcon:(id)icon;
- (void)setTotalDuration:(double)duration;
- (double)currentAudioTimeInSeconds;
- (void)configureWithItem:(id)item delegate:(id)delegate videoLogger:(id)logger videoLoggingConfig:(id)config userSession:(id)session module:(id)module;
- (void)traitCollectionDidChange:(id)change;
- (void)setContentMode:(long long)mode;
- (void)retryLoadItem:(id)item currentLoadingError:(id)error;
- (void)play;
- (void)pauseWithReason:(long long)reason;
- (void)stopWithReason:(long long)reason pauseReasonDebugString:(id)string;
- (BOOL)isPlaying;
- (void)seekToBeginning;
- (void)seekToBeginningAndPause;
- (void)seekToTime:(double)time;
- (void)prepareForReuse;
- (void)setAudioEnabled:(BOOL)enabled reason:(long long)reason;
- (struct CGSize { double x0; double x1; })mediaSize;
- (double)mediaCurrentTime;
- (double)mediaCurrentFrameTime;
- (double)cellPlayTime;
- (void)progressImageView:(id)view didUpdateLoadingState:(id)state;
- (void)progressImageView:(id)view didLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)progressImageView:(id)view didFailLoadWithError:(id)error networkRequestSummary:(id)summary;
- (void)storyStaticMediaProgressManager:(id)manager didUpdateProgress:(double)progress;
- (void)storyStaticMediaProgressManagerDidPlayToEnd:(id)end;
- (BOOL)isViewFinishedLoading;
- (BOOL)isShowingContent;
- (id)renderedComponentLoggingInfo;
- (void)immersivePhotoViewDidFirstRender:(id)render;
- (void)immersivePhotoViewDidRender:(id)render;
@end

#endif /* IGStoryImmersivePhotoView_h */