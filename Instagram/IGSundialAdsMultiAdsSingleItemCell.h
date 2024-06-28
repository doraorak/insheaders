//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAdsMultiAdsSingleItemCell_h
#define IGSundialAdsMultiAdsSingleItemCell_h
@import Foundation;

#include "IGBouncyCollectionViewCell.h"
#include "IGFeedPreviewableCell-Protocol.h"
#include "IGSundialAdsMultiAdsConfig.h"
#include "IGSundialAdsMultiAdsSingleItemCellHiddenMediaView.h"
#include "IGSundialAdsMultiAdsSingleItemCellOverlayView.h"
#include "IGSundialSingleItemCellPhotoView.h"
#include "IGSundialSingleItemCellVideoView.h"
#include "IGVideoPlaybackLoggingExtrasProvider-Protocol.h"
#include "IGVideoViewListener-Protocol.h"

@class IGAdItem, IGImageView, IGImmersiveFeedConfiguration, IGMedia, IGMultiAdsAdPlatformSponsoredItemWrapper, IGVideoView, NSNumber, NSString;
@protocol IGSundialAdsMultiAdsSingleItemCellDelegate;

@interface IGSundialAdsMultiAdsSingleItemCell : IGBouncyCollectionViewCell<IGVideoViewListener, IGVideoPlaybackLoggingExtrasProvider, IGFeedPreviewableCell> {
  /* instance variables */
  IGSundialSingleItemCellPhotoView *_photoView;
  IGSundialAdsMultiAdsSingleItemCellOverlayView *_overlayView;
  IGSundialAdsMultiAdsSingleItemCellHiddenMediaView *_hiddenMediaView;
  IGVideoView *_videoView;
  IGSundialSingleItemCellVideoView *_videoViewWrapper;
  long long _adItemIndex;
  double _mediaDuration;
  IGSundialAdsMultiAdsConfig *_multiAdsConfig;
  IGMultiAdsAdPlatformSponsoredItemWrapper *_multiAdsModel;
  NSString *_trackingToken;
  IGMedia *_media;
  IGImmersiveFeedConfiguration *_immersiveFeedConfiguration;
  IGImageView *_previewImageView;
  IGAdItem *_adItem;
}

@property (weak, nonatomic) NSObject<IGSundialAdsMultiAdsSingleItemCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *currentPlaybackTime;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setCTAButtonHidden:(BOOL)hidden animated:(BOOL)animated;
- (BOOL)_shouldCropVideos;
- (void)_didTapCell:(id)cell;
- (void)_didLongPressView:(id)view;
- (void)multiAdsSingleItemCellOverlayViewDidTapMoreOptionsButton:(id)button;
- (void)multiAdsSingleItemCellOverlayViewDidTapUsername:(id)username;
- (void)multiAdsSingleItemCellOverlayViewDidTapProfilePicture:(id)picture;
- (void)multiAdsSingleItemCellOverlayViewDidTapCTA:(id)cta;
- (void)multiAdsSingleItemCellOverlayViewDidTapAudioControlIcon:(id)icon;
- (void)setCTAAction:(id)ctaaction;
- (void)setShowCollectionTray;
- (void)setShowSlideScrubber;
- (void)setShowCommentPreview;
- (void)setShowPopoverWithHideTime:(double)time;
- (void)setLeadGenSubmitted;
- (void)refreshReminderAdsCTA;
- (void)setShowSpinner:(BOOL)spinner;
- (void)setMediaHiddenOverlayVisible:(BOOL)visible animated:(BOOL)animated;
- (void)animateCTASecondaryWithIndex:(long long)index;
- (void)setCTASecondaryTextActionList:(id)list carouselTransitionContext:(id)context;
- (void)setCaptionAndBrowseDwellCondition:(BOOL)condition;
- (void)videoView:(id)view didUpdateLoadingProgress:(double)progress;
- (void)videoView:(id)view didUpdateCoverImageLoadStatus:(long long)status;
- (void)videoViewDidPrepareVideo:(id)video;
- (void)videoViewDidLoadVideo:(id)video;
- (void)videoView:(id)view didBeginPlayingWithStatus:(id)status;
- (void)videoView:(id)view didUpdatePlaybackStatus:(id)status;
- (void)videoViewDidStallToBufferContent:(id)content;
- (void)videoViewDidPlayThroughToCompletion:(id)completion;
- (void)videoViewItemTimeFullyLoaded:(id)loaded;
- (void)videoViewDidPause:(id)pause;
- (void)videoViewDidStop:(id)stop;
- (void)videoView:(id)view didToggleAudioStatus:(BOOL)status withReason:(long long)reason;
- (void)videoView:(id)view didFailWithError:(id)error;
- (void)videoViewDidAdoptPreconfiguredPlayer:(id)player;
- (void)videoViewDidUpdateAvailableAudioAutoTranslateLanguages:(id)languages;
- (void)videoViewDidUpdatePlaybackStatus:(id)status;
- (void)singleItemCellVideoViewDidFinishPlaying:(id)playing;
- (void)singleItemCellPhotoViewDidFinishZoom:(id)zoom;
- (id)extrasForEventType:(unsigned long long)type;
- (id)sessionId;
- (id)image;
- (BOOL)shouldAllowPreviewForLocation:(struct CGPoint { double x0; double x1; })location;
- (BOOL)_shouldLogMediaMetrics:(id)metrics;
@end

#endif /* IGSundialAdsMultiAdsSingleItemCell_h */