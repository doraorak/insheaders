//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerVideoCell_h
#define IGSundialViewerVideoCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "FBGNVGenericClickMetadataProvider-Protocol.h"
#include "IGDynamicPagingCompatibleLayoutAttributes.h"
#include "IGFeedItemConfigurationType-Protocol.h"
#include "IGGatedMediaView.h"
#include "IGHeartAnimatable-Protocol.h"
#include "IGMediaIndicatorDelegate-Protocol.h"
#include "IGMediaOverlayDelegate-Protocol.h"
#include "IGMediaViewProvider-Protocol.h"
#include "IGSundialAudioToggleable-Protocol.h"
#include "IGSundialControlsOverlaySupporting-Protocol.h"
#include "IGSundialFastReelsNuxManager.h"
#include "IGSundialLinkedHighlightCompatible-Protocol.h"
#include "IGSundialMediaGestureController.h"
#include "IGSundialPlaybackCompatible-Protocol.h"
#include "IGSundialPlaybackIsPlaying-Protocol.h"
#include "IGSundialPlaybackReplayable-Protocol.h"
#include "IGSundialPlaybackToggleHosting-Protocol.h"
#include "IGSundialStickerOverlayView.h"
#include "IGSundialVideoLoadingListener-Protocol.h"
#include "IGSundialVideoPlaybackViewDelegate-Protocol.h"
#include "IGSundialVideoPlaybackViewType-Protocol.h"
#include "IGSundialViewerControlsOverlayController.h"
#include "IGSundialViewerControlsOverlayLayoutDelegate-Protocol.h"
#include "IGSundialViewerHiddenMediaOverlay.h"
#include "IGSundialViewerInteractionCellType-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoViewListener-Protocol.h"
#include "_TtC34IGSundialLegibilityGradientManager34IGSundialLegibilityGradientManager.h"
#include "_TtP34IGSundialLegibilityGradientManager42IGSundialLegibilityGradientManagerDelegate_-Protocol.h"

@class IGImmersiveFeedConfiguration, IGLabel, IGMedia, IGMediaIconButton, IGMediaOverlayView, IGTooltipView, IGUserSession, NSString, UILabel, UIView;
@protocol IGSundialViewerVideoCellDelegate, UIView<IGSundialVideoPlaybackViewType;

@interface IGSundialViewerVideoCell : UICollectionViewCell<FBGNVGenericClickMetadataProvider, IGMediaIndicatorDelegate, IGMediaOverlayDelegate, IGSundialVideoPlaybackViewDelegate, IGSundialViewerControlsOverlayLayoutDelegate, _TtP34IGSundialLegibilityGradientManager42IGSundialLegibilityGradientManagerDelegate_, IGVideoViewListener, IGHeartAnimatable, IGMediaViewProvider, IGSundialAudioToggleable, IGSundialControlsOverlaySupporting, IGSundialPlaybackCompatible, IGSundialPlaybackIsPlaying, IGSundialPlaybackToggleHosting, IGSundialViewerInteractionCellType, IGSundialPlaybackReplayable, IGSundialLinkedHighlightCompatible> {
  /* instance variables */
  UIView *_videoContainerView;
  long long _playPauseHideToken;
  IGGatedMediaView *_gatedMediaView;
  IGMediaOverlayView *_sensitiveMediaOverlayView;
  IGSundialViewerHiddenMediaOverlay *_hiddenMediaOverlay;
  IGSundialMediaGestureController *_gestureController;
  NSObject<IGSundialVideoLoadingListener> *_videoLoadingListener;
  IGDynamicPagingCompatibleLayoutAttributes *_layoutAttributes;
  IGTooltipView *_nuxTooltip;
  NSObject<IGUserLauncherSetProviding> *_experimentProvider;
  long long _loopCount;
  IGImmersiveFeedConfiguration *_immersiveFeedConfiguration;
  NSObject<IGFeedItemConfigurationType> *_itemConfiguration;
  BOOL _feedRedeliveryV2Enabled;
  IGUserSession *_userSession;
  _TtC34IGSundialLegibilityGradientManager34IGSundialLegibilityGradientManager *_legibilityGradientManager;
  NSString *_analyticsModule;
  IGSundialFastReelsNuxManager *_fastReelsNuxManager;
  BOOL _isFastReelsNuxActive;
  BOOL _captionExpanded;
  IGMediaIconButton *_playPauseMediaIndicator;
  UILabel *_recommendedSourceLabel;
  double _pauseDuration;
  IGLabel *_fallbackLabel;
}

@property (weak, nonatomic) NSObject<IGSundialViewerVideoCellDelegate> *delegate;
@property (readonly, nonatomic) IGMedia *video;
@property (readonly, nonatomic) IGSundialViewerControlsOverlayController *overlayController;
@property (readonly, nonatomic) IGSundialStickerOverlayView *stickerOverlayView;
@property (readonly, nonatomic) struct { long long x0; double x1; double x2; } playbackState;
@property (readonly, nonatomic) NSObject<IGSundialVideoPlaybackViewType> *videoView;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)attributes;
- (id)preferredLayoutAttributesFittingAttributes:(id)attributes;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)mediaIndicatorTapped:(id)tapped;
- (void)mediaIndicator:(id)indicator willChangeToState:(unsigned long long)state previousState:(unsigned long long)state;
- (void)mediaIndicator:(id)indicator didChangeToState:(unsigned long long)state previousState:(unsigned long long)state;
- (void)didTapMediaOverlayButton:(id)button mediaItem:(id)item;
- (void)didTapActionableInsightsTipWithModel:(id)model;
- (void)didDismissActionableInsightsTipWithModel:(id)model;
- (void)registerBannerCell:(id)cell;
- (void)refreshBannerCell;
- (void)addVideoPlaybackListener:(id)listener;
- (void)playWithReason:(long long)reason;
- (void)stopWithReason:(long long)reason;
- (void)pauseWithReason:(long long)reason;
- (void)prepareForPlayback;
- (void)seekToTime:(double)time preciseTime:(BOOL)time trigger:(long long)trigger completionHandler:(id /* block */)handler;
- (BOOL)isEligibleForPlayback;
- (void)setPlaybackSpeed:(float)speed;
- (void)setControlOverlayAlpha:(double)alpha shouldUpdateVideoControls:(BOOL)controls shouldUpdateSubtitleOverlay:(BOOL)overlay;
- (void)setProgressIndicatorAlpha:(double)alpha;
- (void)setScrubberAlpha:(double)alpha;
- (void)updateProgressIndicatorWithProgress:(double)progress remainingDuration:(double)duration elapsedDuration:(double)duration totalDuration:(double)duration;
- (void)setScrubberVisibilityState:(long long)state animated:(BOOL)animated withDelay:(double)delay;
- (void)setScrubberUserInteractionEnabled:(BOOL)enabled;
- (void)setIsAlphaLocked:(BOOL)locked;
- (BOOL)isPlaying;
- (BOOL)isAudioEnabled;
- (void)setAudioEnabled:(BOOL)enabled forReason:(long long)reason;
- (id)contentViewForPlaybackToggle;
- (void)setLinkedHighlightIndicatorLoading:(BOOL)loading;
- (BOOL)gestureControllerShouldAllowInteraction:(id)interaction;
- (void)gestureController:(id)controller didObserveSingleTap:(id)tap;
- (void)gestureController:(id)controller didObserveDoubleTap:(id)tap;
- (void)gestureController:(id)controller didObserveLongPressBegin:(id)begin;
- (void)gestureController:(id)controller didObserveLongPressChanged:(id)changed;
- (void)gestureController:(id)controller didObserveLongPressEnd:(id)end;
- (void)gestureController:(id)controller didObserveSwipeBegin:(id)begin withGestureRecognizer:(id)recognizer;
- (void)gestureController:(id)controller didObserveSwipeEnd:(id)end withGestureRecognizer:(id)recognizer;
- (void)gestureController:(id)controller didObservePinch:(id)pinch;
- (void)sundialVideoPlaybackViewDidLoadVideo:(id)video;
- (void)sundialVideoPlaybackViewDidFullyLoadVideo:(id)video;
- (void)sundialVideoPlaybackView:(id)view didUpdateLoadingProgress:(double)progress;
- (void)sundialVideoPlaybackViewDidLoadPreviewImage:(id)image;
- (void)sundialVideoPlaybackViewDidPartiallyLoadPreviewImage:(id)image;
- (void)sundialVideoPlaybackViewDidStartPlaying:(id)playing;
- (void)sundialVideoPlaybackView:(id)view didUpdatePlaybackState:(struct { long long x0; double x1; double x2; })state;
- (void)sundialVideoPlaybackViewDidFail:(id)fail withError:(id)error;
- (void)sundialVideoPlaybackViewDidAccessibilityActivate:(id)activate;
- (void)sundialVideoPlaybackView:(id)view willBeginZoomInteractionForView:(id)view withLogging:(id)logging;
- (void)sundialVideoPlaybackView:(id)view didEndZoomInteractionForView:(id)view withLogging:(id)logging;
- (void)sundialVideoPlaybackViewDidAdoptPreconfiguredPlayer:(id)player;
- (void)sundialVideoPlaybackViewScrollableOverlayViewDidScrollToIndex:(long long)index withMediaId:(id)id;
- (void)animateForStateChangeWithIcon:(long long)icon;
- (void)updatePersistingIcon:(long long)icon isVisible:(BOOL)visible;
- (void)setOrganicCTAButtonHighlighted;
- (void)clearEventCTATimers;
- (void)setOverlayAdViewShow;
- (void)setOverlayAdViewHighlighted;
- (void)hideOverlayAd;
- (void)presentCommentPreview;
- (void)hideFastReelsToast;
- (void)startTrackingOverlayAdViewWithActionBuilder:(id /* block */)builder logContextModelProvider:(id)provider;
- (void)stopTrackingOverlayAdViewEvents;
- (void)controlsOverlayController:(id)controller didTapHashtag:(id)hashtag;
- (void)controlsOverlayController:(id)controller didTapProfile:(id)profile fromCaption:(BOOL)caption;
- (void)controlsOverlayController:(id)controller didTapProfileURLFromSocialContext:(id)context fromCaption:(BOOL)caption;
- (void)controlsOverlayController:(id)controller didTapFBMentionWithProfileURL:(id)url;
- (void)controlsOverlayControllerDidTapLikeButton:(id)button;
- (void)controlsOverlayControllerDidTapSaveButton:(id)button;
- (void)controlsOverlayControllerDidTapGiftButton:(id)button;
- (void)controlsOverlayControllerDidTapTranslationButton:(id)button;
- (void)controlsOverlayControllerDidTapSeeOriginalButton:(id)button;
- (void)controlsOverlayController:(id)controller didTapUsernameButton:(id)button loggingInfoProviding:(id)providing;
- (void)controlsOverlayController:(id)controller didTapWithLoggingInfoProviding:(id)providing;
- (void)controlsOverlayController:(id)controller didTapStoryRingButton:(id)button;
- (void)controlsOverlayControllerDidTapCommentButton:(id)button withKeyboard:(BOOL)keyboard commentThreadEntryPoint:(long long)point;
- (void)controlsOverlayControllerDidTapSendButton:(id)button;
- (void)controlsOverlayControllerDidTapRemixCTAButton:(id)ctabutton;
- (void)controlsOverlayControllerDidTapRemixButton:(id)button;
- (void)controlsOverlayControllerDidTapSeeAllRemixesButton:(id)button;
- (void)controlsOverlayControllerDidTapLocationAttributionView:(id)view;
- (void)controlsOverlayControllerDidTapFundraiserAttributionView:(id)view;
- (void)controlsOverlayControllerDidTapLikeCountButton:(id)button;
- (void)controlsOverlayControllerDidTapMoreOptionsButton:(id)button;
- (void)controlsOverlayControllerDidTapCopyLinkButton:(id)button;
- (void)controlsOverlayControllerDidTapINIButton:(id)inibutton menuDelegate:(id)delegate;
- (void)controlsOverlayControllerDidTapPeopleTagsEntryPoint:(id)point;
- (void)controlsOverlayControllerDidTapUpcomingEventEntryPoint:(id)point;
- (void)controlsOverlayControllerDidTapCaption:(id)caption;
- (void)controlsOverlayControllerDidTapCaptionMoreButton:(id)button;
- (void)controlsOverlayControllerDidTapCaptionExpansionToggle:(id)toggle isExpanded:(BOOL)expanded;
- (void)controlsOverlayControllerDidTapNonExpansionCaption:(id)caption;
- (void)controlsOverlayControllerDidExpandCaptionAndBrowse:(id)browse isCaptionExpandable:(BOOL)expandable;
- (void)controlsOverlayControllerDidCollapseCaptionAndBrowse:(id)browse;
- (void)controlsOverlayController:(id)controller didTapAudioAttributionUsingButton:(BOOL)button;
- (void)controlsOverlayControllerDidTapSoundButton:(id)button;
- (void)controlsOverlayControllerDidLongPressSendButton:(id)button gestureRecognizer:(id)recognizer;
- (void)controlsOverlayControllerDidLongPressSaveButton:(id)button gestureRecognizer:(id)recognizer;
- (void)controlsOverlayControllerDidLongPressLikeButton:(id)button gestureRecognizer:(id)recognizer;
- (void)controlsOverlayControllerDidRegisterContextualLinkImpression:(id)impression withType:(long long)type;
- (void)controlsOverlayControllerDidTapBackground:(id)background;
- (void)controlsOverlayController:(id)controller didTapContextualLink:(id)link withType:(long long)type;
- (void)controlsOverlayControllerDidTapCTAButton:(id)ctabutton shouldSeekToBeginning:(BOOL)beginning loggingInfoProviding:(id)providing ctaTapInfo:(id)info;
- (void)controlsOverlayControllerDidTapCTAMoreInfoButton:(id)button loggingInfoProviding:(id)providing;
- (void)controlsOverlayControllerDidTapMidSceneAttachedCardDismissalButton:(id)button isCaptionHidden:(BOOL)hidden isSocialContextHidden:(BOOL)hidden loggingInfoProviding:(id)providing;
- (void)controlsOverlayControllerDidPerformDismiss:(id)dismiss usingSwipe:(BOOL)swipe loggingInfoProviding:(id)providing;
- (void)controlsOverlayControllerDidTapOverlayAdSafeZone:(id)zone;
- (void)controlsOverlayControllerOverlayAdGestureRecognized:(id)recognized;
- (void)controlsOverlayControllerOverlayAdChangedSwipingState:(BOOL)state;
- (void)controlsOverlayControllerDidTapEndSceneReplayButton:(id)button;
- (void)controlsOverlayControllerDidTapEndSceneMultipleChoiceCTAButton:(id)ctabutton;
- (void)controlsOverlayController:(id)controller didTapProductTileIndex:(long long)index productTilesCount:(long long)count products:(id)products;
- (void)controlsOverlayControllerDidShowCollectionViewTray:(id)tray;
- (void)controlsOverlayControllerDidShowSlideScrubber:(id)scrubber lastVisibleThumbnailIndex:(long long)index;
- (void)controlsOverlayController:(id)controller didTapCollectionViewTrayIndex:(long long)index;
- (void)controlsOverlayController:(id)controller didTapThumbnailPickerAtIndex:(long long)index loggingInfoProviding:(id)providing destinationType:(unsigned long long)type isActiveThumbnailClick:(BOOL)click tooltipPosition:(struct CGPoint { double x0; double x1; })position;
- (void)controlsOverlayControllerDidTapOutsideThumbnails:(id)thumbnails;
- (void)controlsOverlayController:(id)controller didScrollToThumbnailPickerIndexPath:(id)path shouldUpdateHero:(BOOL)hero isFromTapping:(BOOL)tapping;
- (void)controlsOverlayController:(id)controller didObserveThumbnailPickerSwipeEndWithLoggingInfoProviding:(id)providing fromIndex:(long long)index toIndex:(long long)index;
- (void)controlsOverlayController:(id)controller scrubbingDidBeginInVideoControlsView:(id)view;
- (void)controlsOverlayController:(id)controller scrubbingDidChangeInVideoControlsView:(id)view;
- (void)controlsOverlayController:(id)controller scrubbingDidEndInVideoControlsView:(id)view;
- (void)controlsOverlayController:(id)controller didCancelAutoAdvanceCountDownFromCancelButton:(BOOL)button;
- (void)controlsOverlayControllerDidTapSponsorPartnerButton:(id)button;
- (void)controlsOverlayControllerDidTapEffectsAttribution:(id)attribution;
- (void)controlsOverlayControllerDidTapViewProductsEntrypoint:(id)entrypoint;
- (void)controlsOverlayControllerDidTapShoppingCTAButton:(id)ctabutton;
- (void)controlsOverlayControllerDidTapBIOProductCTAButton:(id)ctabutton;
- (void)controlsOverlayControllerDidTapTransparencyButton:(id)button;
- (void)controlsOverlayControllerDidRegisterTransparencyButtonImpression:(id)impression;
- (void)controlsOverlayControllerDidTapFavoritesButton:(id)button;
- (void)controlsOverlayControllerDidTapCloseFriendsButton:(id)button;
- (void)controlsOverlayControllerDidTapOpalButton:(id)button;
- (void)controlsOverlayControllerDidTapFanClubSubscribeButton:(id)button;
- (void)controlsOverlayControllerDidTapTrialButton:(id)button;
- (void)controlsOverlayController:(id)controller didTapCaptionView:(id)view whileViewingTranslatedCaptions:(BOOL)captions;
- (void)controlsOverlayControllerDidHideAllCaptionsFromContextMenu:(id)menu whileViewingTranslatedCaptions:(BOOL)captions;
- (void)controlsOverlayControllerDidTurnOffAutoTranslationsFromContextMenu:(id)menu whileViewingTranslatedCaptions:(BOOL)captions;
- (void)controlsOverlayController:(id)controller didUpdateCaptionString:(id)string;
- (void)controlsOverlayControllerDidTurnOnAutoTranslationsFromContextMenu:(id)menu whileViewingTranslatedCaptions:(BOOL)captions;
- (void)controlsOverlayControllerDidTapFanClubOnlyButton:(id)button;
- (void)controlsOverlayControllerDidTapCombinedLikesAndCommentsButton:(id)button;
- (void)controlsOverlayController:(id)controller didTapPromoteButtonInBusinessView:(id)view;
- (void)controlsOverlayController:(id)controller didTapInsightsButtonInBusinessView:(id)view;
- (void)controlsOverlayController:(id)controller didTapViewAdGuidelineButtonInBusinessView:(id)view;
- (void)controlsOverlayController:(id)controller didScrubToCarouselIndex:(long long)index;
- (void)controlsOverlayControllerDidTapRepostPillButton:(id)button;
- (void)controlsOverlayControllerDidTapOrganicButton:(id)button;
- (void)controlsOverlayController:(id)controller didTapInsightsTipWithModel:(id)model;
- (void)controlsOverlayController:(id)controller didDismissActionableInsightsTipWithModel:(id)model;
- (void)controlsOverlayController:(id)controller didTapCommentPreview:(id)preview;
- (void)controlsOverlayController:(id)controller didShowOnImpressionControl:(id)control;
- (void)controlsOverlayController:(id)controller didTapOnImpressionControlNegativeButton:(id)button;
- (void)controlsOverlayController:(id)controller didTapOnImpressionControlPositiveButton:(id)button toState:(BOOL)state;
- (void)controlsOverlayController:(id)controller didRegisterAttributionViewImpression:(long long)impression index:(long long)index;
- (void)controlsOverlayController:(id)controller didTapAttributionView:(id)view attributeType:(long long)type index:(long long)index;
- (void)controlsOverlayController:(id)controller didLongPressAttributionView:(id)view attributeType:(long long)type index:(long long)index gestureRecognizer:(id)recognizer;
- (void)controlsOverlayControllerDidScrollAttributionViewPillScrollView:(id)view;
- (void)controlsOverlayController:(id)controller didSelectRiff:(id)riff;
- (void)controlsOverlayController:(id)controller didUnselectRiff:(id)riff;
- (void)controlsOverlayController:(id)controller didRegisterUserSecondaryAttributionImpression:(long long)impression;
- (void)controlsOverlayController:(id)controller didTapUserSecondaryAttributionView:(long long)view;
- (void)controlsOverlayControllerDidRegisterSocialContextButtonImpression:(id)impression withButton:(id)button;
- (void)controlsOverlayControllerDidTapSocialContextButton:(id)button withButton:(id)button;
- (void)controlsOverlayControllerDidTapCommentedBySocialContextButton:(id)button targetCommentId:(id)id;
- (void)controlsOverlayControllerDidTapFollowedBySocialContextButton:(id)button shouldDisplaySecondarySurfaceCTA:(BOOL)cta;
- (void)controlsOverlayControllerDidTapTopWatchedSocialContextButton:(id)button;
- (void)controlsOverlayControllerDidTapFollowersCountSocialContextButton:(id)button;
- (void)controlsOverlayControllerDidTapPromptUsedByPeopleSocialContextButton:(id)button;
- (void)controlsOverlayControllerDidTapVotedOnBySocialContextButton:(id)button;
- (void)controlsOverlayControllerDidRegisterViewInsightsInPromoteViewImpression:(id)impression;
- (void)controlsOverlayControllerDidTapViewInsightsInPromoteView:(id)view;
- (void)controlsOverlayControllerDidTapViewTrialInsightsInPromoteView:(id)view;
- (void)controlsOverlayControllerDidTapBoostReelInPromoteView:(id)view withEntryPoint:(id)point;
- (void)controlsOverlayControllerDidTapTappableTooltipView:(id)view;
- (void)controlsOverlayController:(id)controller didSetCaptionExpanded:(BOOL)expanded;
- (void)controlsOverlayControllerDidTapLikedBySocialContextButton:(id)button button:(id)button;
- (void)controlsOverlayController:(id)controller didTapContentNote:(id)note presentationContext:(id)context;
- (void)controlsOverlayController:(id)controller didTapContentNotesOverflowPreviewWithSeenNoteID:(id)id;
- (void)controlsOverlayController:(id)controller didToggleContentNotesIsMinimized:(BOOL)minimized;
- (void)controlsOverlayControllerDidTapContentNotesNUXButton:(id)nuxbutton;
- (void)controlsOverlayController:(id)controller didTapAddContentNoteButtonWithSource:(long long)source presentationContext:(id)context;
- (void)controlsOverlayControllerDidTapRepostButton:(id)button;
- (void)controlsOverlayController:(id)controller didTapContentNoteContextMenuWithAction:(long long)action noteModel:(id)model;
- (void)controlsOverlayController:(id)controller didTapFloatingSocialContext:(id)context bubblePosition:(long long)position;
- (void)controlsOverlayController:(id)controller didLongPressFloatingSocialContextWithAction:(unsigned long long)action model:(id)model bubblePosition:(long long)position;
- (void)controlsOverlayController:(id)controller didRegisterSocialContextViewImpressionWithModel:(id)model bubblePosition:(long long)position;
- (void)controlsOverlayController:(id)controller didDidDragToDismissSocialContext:(id)context overlayViewModel:(id)model;
- (void)controlsOverlayController:(id)controller setNavigationBarHidden:(BOOL)hidden;
- (void)controlsOverlayControllerNudgeAnimationCompleted:(id)completed;
- (void)controlsOverlayControllerDidHighlightCTA:(id)cta;
- (void)overlayDidLayoutWithMediaLayout:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x2; double x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; })layout;
- (void)overlayDidLayoutWithProgressIndicatorDesiredMinY:(double)y shouldLayout:(BOOL)layout frameMode:(long long)mode;
- (void)overlayDidLayoutWithMinTopYForBottomAFI:(double)afi shouldLayout:(BOOL)layout frameMode:(long long)mode;
- (void)configureHiddenMediaOverlay:(id)overlay;
- (void)setMediaHiddenOverlayVisible:(BOOL)visible animated:(BOOL)animated;
- (void)didTapBottomOrLeftButton;
- (void)didTapCenterButton;
- (void)didTapRightButton;
- (id)contentViewForHeartAnimation;
- (void)hideMediaGatingViewIfNeeded;
- (void)setNeedsOverlayViewModelUpdateWithLayoutAfter:(BOOL)after;
- (void)setAutoTranslateLanguage:(id)language autoTranslateEnabled:(BOOL)enabled;
- (id)availableAutoTranslateLanguages;
- (id)selectedAutoTranslateLanguage;
- (void)hideFanClubSubscribeButton;
- (id)accessibilityElements;
- (BOOL)accessibilityActivate;
- (id)contentMetadata;
- (void)sundialViewerHiddenMediaOverlay:(id)overlay didObserveButtonTap:(long long)tap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expectedFinalMediaFrame;
- (id)mediaView;
- (void)playFromBeginning;
- (void)setStopPlaybackOnWindowRemoval:(BOOL)removal;
- (double)mediaPctWatched;
- (void)videoViewDidUpdateAvailableAudioAutoTranslateLanguages:(id)languages;
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
- (void)getCoverImageForLegibilityGradientWithCompletion:(id /* block */)completion;
- (void)getCurrentFrameForLegibilityGradientWithCompletion:(id /* block */)completion;
- (void)updateLegibilityGradientWithOpacityValue:(double)value shouldAnimate:(BOOL)animate;
@end

#endif /* IGSundialViewerVideoCell_h */