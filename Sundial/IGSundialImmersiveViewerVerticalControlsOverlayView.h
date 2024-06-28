//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialImmersiveViewerVerticalControlsOverlayView_h
#define IGSundialImmersiveViewerVerticalControlsOverlayView_h
@import Foundation;

#include "UIView.h"
#include "FBGNVGenericClickMetadataProvider-Protocol.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGDSGradientLegibilityView.h"
#include "IGEdgeMultiInsets.h"
#include "IGFeedItemBusinessCellConfigurableDelegate-Protocol.h"
#include "IGFeedItemPageIndicatorDelegate-Protocol.h"
#include "IGFeedVideoAdAudioIndicator.h"
#include "IGSundialAdsEndSceneView.h"
#include "IGSundialAudioAssetProtocol-Protocol.h"
#include "IGSundialCollaborationIndicatorView.h"
#include "IGSundialImmersiveAttributionView.h"
#include "IGSundialImmersiveBusinessView.h"
#include "IGSundialImmersiveViewerFlexibleCTAView.h"
#include "IGSundialLinkedHighlightCompatible-Protocol.h"
#include "IGSundialSocialContextButton.h"
#include "IGSundialViewerContentEmphasisUtility.h"
#include "IGSundialViewerControlsOverlayLayoutDelegate-Protocol.h"
#include "IGSundialViewerThumbnailPicker.h"
#include "IGSundialViewerUFITypeDelegate-Protocol.h"
#include "IGUnifiedVideoControlsView.h"
#include "IGUnifiedVideoControlsViewDelegate-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoPreviewThumbnailView.h"

@class IGAPICTABarInfo, IGAPIClipsAdditionalAudioInfo, IGFeedItemPageIndicator, IGImmersiveFeedConfiguration, IGMedia, IGMediaOverlayView, IGStorySeenStateStore, IGStoryStore, IGSundialLocationAttributionView, IGUnifiedVideoCaptionView, IGUserSession, IGVideoCaptionView, NSNumber, NSString, UIControl, UILabel, UIView;
@protocol IGSundialImmersiveViewerControlsOverlayViewDelegate, UIView<IGSundialCTAButtonConfigurable, UIView<IGSundialViewerUFIType, UIView<IGVideoControlsViewType;

@interface IGSundialImmersiveViewerVerticalControlsOverlayView : UIView<FBGNVGenericClickMetadataProvider, IGFeedItemBusinessCellConfigurableDelegate, IGFeedItemPageIndicatorDelegate, IGSundialViewerUFITypeDelegate, IGUnifiedVideoControlsViewDelegate, IGCoreTextLinkHandler, IGSundialLinkedHighlightCompatible> {
  /* instance variables */
  UIView *_chromeContainerView;
  UIView *_dimmingView;
  IGDSGradientLegibilityView *_gradientView;
  IGUnifiedVideoControlsView *_videoControlsView;
  IGSundialImmersiveAttributionView *_attributionView;
  IGFeedItemPageIndicator *_pageControl;
  IGVideoCaptionView *_subtitleOverlay;
  IGSundialImmersiveBusinessView *_boostAndInsightsView;
  UIView *_contextAttributionView;
  IGSundialCollaborationIndicatorView *_collaborationIndicatorView;
  IGSundialSocialContextButton *_topLikersButton;
  IGSundialImmersiveViewerFlexibleCTAView *_flexibleCTAView;
  IGImmersiveFeedConfiguration *_immersiveFeedConfiguration;
  NSObject<IGSundialImmersiveViewerControlsOverlayViewDelegate> *_delegate;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  IGUserSession *_userSession;
  NSString *_currentUserPk;
  IGStoryStore *_storyReelStore;
  IGStorySeenStateStore *_storyReelSeenStateStore;
  NSNumber *_carouselIndex;
  struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrameTransformed; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double cornerRadius; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleContentFrame; } _mediaLayout;
  IGEdgeMultiInsets *_idealContentInsets;
  double _maxEmphasisOffset;
  IGSundialViewerContentEmphasisUtility *_contentEmphasisUtility;
  double _controlsAlpha;
  double _onScrollAlpha;
  UIView<IGSundialCTAButtonConfigurable> *_ctaButton;
  IGAPICTABarInfo *_organicCtaButtonViewModel;
  BOOL _shouldReconfigureCTAButton;
  BOOL _isDefaultShoppingCtaForCarouselItem;
  long long _ctaVisibilityState;
  IGSundialAdsEndSceneView *_endSceneView;
  IGSundialLocationAttributionView *_locationAttribtion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; unsigned long long x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; double x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; long long x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; double x46; double x47; BOOL x48; BOOL x49; BOOL x50; BOOL x51; BOOL x52; BOOL x53; BOOL x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; BOOL x59; BOOL x60; } experimentOptions;
@property (retain, nonatomic) NSObject<IGSundialAudioAssetProtocol> *audioAsset;
@property (retain, nonatomic) IGAPIClipsAdditionalAudioInfo *additionalAudioInfo;
@property (retain, nonatomic) IGMediaOverlayView *customCTABannerView;
@property (nonatomic) long long scrubberVisibilityState;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) NSObject<IGSundialViewerControlsOverlayLayoutDelegate> *layoutDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overrideChromeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overrideContentFrame;
@property (nonatomic) BOOL overlaySubviewsExceptAudioControlHidden;
@property (nonatomic) BOOL overlayContentLayoutLocked;
@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *audioAttributionView;
@property (readonly, nonatomic) UIView *iniButtonView;
@property (readonly, nonatomic) IGSundialViewerThumbnailPicker *slideScrubber;
@property (readonly, nonatomic) IGSundialLocationAttributionView *locationAttribution;
@property (readonly, nonatomic) UIControl *viewProductsEntryPoint;
@property (readonly, nonatomic) UILabel *dotSeparator;
@property (readonly, nonatomic) UIView<IGSundialViewerUFIType> *ufi;
@property (readonly, nonatomic) IGUnifiedVideoCaptionView *caption;
@property (readonly, nonatomic) BOOL isCaptionExpanded;
@property (readonly, nonatomic) IGVideoPreviewThumbnailView *videoPreviewThumbnailView;
@property (readonly, nonatomic) long long contextualLinkType;
@property (readonly, nonatomic) UIView *contextualLinkContainer;
@property (readonly, nonatomic) long long mediaFrameMode;
@property (readonly, nonatomic) UIView<IGVideoControlsViewType> *scrubber;
@property (readonly, nonatomic) IGFeedVideoAdAudioIndicator *audioControlButton;

/* instance methods */
- (id)initWithExperimentOptions:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; unsigned long long x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; double x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; long long x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; double x46; double x47; BOOL x48; BOOL x49; BOOL x50; BOOL x51; BOOL x52; BOOL x53; BOOL x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; BOOL x59; BOOL x60; })options immersiveFeedConfiguration:(id)configuration contentType:(long long)type userSession:(id)session collectionView:(id)view analyticsModule:(id)module delegate:(id)delegate;
- (void)layoutSubviews;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame withContentEmphasis:(double)emphasis contentPageOffset:(double)offset;
- (void)resetContentEmphasisValues;
- (BOOL)controlRegionContainsPoint:(struct CGPoint { double x0; double x1; })point forGestureRecognizer:(id)recognizer;
- (void)setCTAAction:(id)ctaaction;
- (void)setAdsCTAContainerHidden:(BOOL)hidden;
- (void)setCaptionAlpha:(double)alpha;
- (void)setProfileAlpha:(double)alpha;
- (void)forceHideAttributionRowView:(BOOL)view;
- (void)forceHideSocialContextView:(BOOL)view;
- (void)setDimmingViewOnSingleLineCaptionAndBrowseAlpha:(double)alpha;
- (void)setShowCollectionTray;
- (void)setShowSlideScrubber;
- (void)setCTASecondaryTextActionList:(id)list carouselTransitionContext:(id)context;
- (void)setCTAButtonToTitle:(id)title toSubtitle:(id)subtitle;
- (void)setHighlightColorForIndex:(id)index;
- (void)setCTAEnabled;
- (void)setCaptionHidden;
- (void)setAttributionViewHidden;
- (void)setLegibilityGradientHidden:(BOOL)hidden;
- (void)setIsAlphaLocked:(BOOL)locked;
- (void)setOrganicCTAButtonHighlighted;
- (void)clearEventCTATimers;
- (void)setShowPopoverWithHideTime:(double)time;
- (void)setHidePopoverWithInterruption;
- (void)animateCTASecondaryWithIndex:(long long)index;
- (void)configureEndSceneWithViewModel:(id)model;
- (void)setEndSceneViewShown:(BOOL)shown;
- (BOOL)isEndSceneViewShown;
- (void)setEndSceneViewPaused:(BOOL)paused;
- (BOOL)isMidSceneEligible;
- (BOOL)isMidSceneShown;
- (BOOL)isSocialContextShown;
- (void)setSocialContextShown:(BOOL)shown;
- (double)viewVisiblePercentage;
- (double)viewVisiblePercentageExcludingOverlayAd;
- (void)sundialAdsEndSceneViewDidTapCTA:(id)cta;
- (void)sundialAdsEndSceneViewDidTapReplay:(id)replay;
- (void)sundialAdsEndSceneViewDidTapMultipleChoiceCTA:(id)cta;
- (void)sundialAdsEndSceneViewDidTapProductTile:(id)tile didTapProductTileIndex:(long long)index productTilesCount:(long long)count products:(id)products;
- (void)sundialAdsEndSceneViewDidTapProfile:(id)profile didTapUsernameButton:(id)button loggingInfoProviding:(id)providing;
- (void)sundialAdsEndSceneViewDidTapWithLoggingInfoProviding:(id)providing;
- (void)sundialAdsEndSceneViewSetNavigationBarHidden:(BOOL)hidden;
- (void)sundialAdsEndSceneViewDidRegisterImpressionSocialContextButton:(id)button;
- (void)sundialAdsEndSceneViewDidTapSocialContextButton:(id)button;
- (void)controlsOverlayControllerDidTapCommentedBySocialContextButton:(id)button targetCommentId:(id)id;
- (void)sundialAdsEndSceneViewDidTapSocialContextButtonUserWithURL:(id)url;
- (void)setLeadGenSubmitted;
- (void)refreshReminderAdsCTA;
- (void)setShowSpinner:(BOOL)spinner;
- (void)setControlsAlpha:(double)alpha shouldUpdateVideoControls:(BOOL)controls shouldUpdateSubtitleOverlay:(BOOL)overlay;
- (void)setScrubberUserInteractionEnabled:(BOOL)enabled;
- (void)setOnScrollAlpha:(double)alpha;
- (void)setProgressIndicatorAlpha:(double)alpha;
- (void)setScrubberAlpha:(double)alpha;
- (void)setOverlayAdViewShow;
- (void)setOverlayAdViewHighlighted;
- (void)updateOverlayAdViewWithUpdatedViewModel:(id)model;
- (void)startTrackingOverlayAdViewWithActionBuilder:(id /* block */)builder logContextModelProvider:(id)provider;
- (void)setContextualLinkHidden:(BOOL)hidden;
- (void)stopTrackingOverlayAdViewEvents;
- (void)hideOverlayAd;
- (BOOL)isOverlayAdViewVisible;
- (void)hideFanClubSubscribeButton;
- (void)handleScrubbingUpdate:(BOOL)update shouldShowThumbnails:(BOOL)thumbnails;
- (void)updateCarouselMediaIndex:(long long)index;
- (void)prepareForReuse;
- (void)configureWithMedia:(id)media viewModel:(id)model followButton:(id)button subscribeButton:(id)button shouldLayout:(BOOL)layout carouselIndex:(id)index mediaFrameMode:(long long)mode soundButtonState:(unsigned long long)state sponsoredInfoProvider:(id)provider;
- (void)configureSocialContextViewModel:(id)model shouldLayout:(BOOL)layout;
- (void)collapseAttributionView:(BOOL)view;
- (void)collapseSocialContextView:(BOOL)view;
- (void)presentFanClubTooltipIfNecessary;
- (void)presentCloseFriendsIndicatorTooltipIfEligible;
- (void)presentRepostUFIButtonTooltipIfEligible;
- (void)configureWithViewerInteractionConfig:(id)config;
- (void)configureProgressIndicator:(id)indicator animated:(BOOL)animated;
- (void)updateProgressIndicator:(id)indicator animated:(BOOL)animated;
- (void)setProgressIndicatorEnabled:(BOOL)enabled index:(long long)index;
- (void)setProgressIndicatorIndex:(long long)index;
- (void)updateProgressIndicatorWithProgress:(double)progress remainingDuration:(double)duration elapsedDuration:(double)duration totalDuration:(double)duration;
- (void)updateOverlayForCarouselWithIndex:(long long)index soundButtonState:(unsigned long long)state captionViewModel:(id)model animated:(BOOL)animated;
- (void)setScrubberHidden:(BOOL)hidden;
- (void)setScrubberVariableSpeedEnabled:(BOOL)enabled;
- (void)setScrubberCondensed:(BOOL)condensed;
- (void)setScrubberAutoAdvanceModeEnabled:(BOOL)enabled;
- (void)setIsLiked:(BOOL)liked animated:(BOOL)animated;
- (void)setIsSaved:(BOOL)saved animated:(BOOL)animated;
- (void)setIsSharingDisabled:(BOOL)disabled;
- (void)setCommentButtonHidden:(BOOL)hidden withAnimation:(BOOL)animation;
- (void)setLinkedHighlightIndicatorLoading:(BOOL)loading;
- (void)reconfigureAvatarStoryState;
- (void)setLegibilityGradientOpacity:(unsigned long long)opacity;
- (void)updateLegibilityGradientValue:(double)value shouldAnimate:(BOOL)animate;
- (void)setFeaturedText:(id)text;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })featuredLabelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attributionViewFrame;
- (BOOL)isFeaturedLabelHidden;
- (void)configureCreationPreviewTemplateEligible:(BOOL)eligible;
- (void)configureCreatorPickBadgeEligible:(BOOL)eligible;
- (void)animatePlaybackStateWithAnimatedState:(BOOL)state;
- (void)highlightCTAWithType:(unsigned long long)type;
- (BOOL)isSecondaryAttributionEnabled;
- (void)setSoundButtonState:(unsigned long long)state;
- (id)videoCaptionView;
- (BOOL)wouldComfortablyDisplayWithin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })within consideringNavigationElements:(BOOL)elements;
- (void)presentCommentPreview;
- (void)presentFastReelsToastWithText:(id)text;
- (void)hideFastReelsToast;
- (void)showSpinnerOnShoppingCTAButton;
- (void)refreshShoppingCTAButton;
- (void)refreshOnImpressionControl;
- (void)showOnImpressionControl;
- (void)hideOnImpressionControl;
- (void)updateScrubberTimestampVisibility:(BOOL)visibility;
- (BOOL)haveFullWidthCTA;
- (void)setShouldLegibilityViewCoverBrowserRoundedCorner:(BOOL)corner;
- (void)setShouldDimmingViewCoverBrowserRoundedCorner:(BOOL)corner;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })userProfileFrame;
- (void)setSponsoredAttributionViewIconText:(id)text;
- (void)setAttributionViewLeftPadding:(double)padding;
- (void)disableSponsoredAttributionViewPill;
- (void)setSponsoredAttributionViewAnimation;
- (BOOL)isAdsCTAVisible;
- (void)sundialImmersiveAttributionViewDidTapRemix:(id)remix;
- (void)sundialImmersiveAttributionViewDidTapSeeAllRemixes:(id)remixes;
- (void)sundialImmersiveAttributionViewDidTapSponsorPartner:(id)partner;
- (void)sundialImmersiveAttributionViewDidTapTransparencyAttribution:(id)attribution;
- (void)sundialImmersiveAttributionViewDidRegisterTransparencyImpression:(id)impression;
- (void)sundialImmersiveAttributionViewDidTapLocation:(id)location;
- (void)sundialImmersiveAttributionViewDidTapAudio:(id)audio;
- (void)sundialImmersiveAttributionViewDidTapEffect:(id)effect;
- (void)sundialImmersiveAttributionView:(id)view didTapUsername:(id)username;
- (void)sundialImmersiveAttributionView:(id)view didTapStoryRing:(id)ring;
- (void)sundialImmersiveAttributionView:(id)view didTapCoauthorURL:(id)url;
- (void)sundialImmersiveAttributionView:(id)view didTapCommunityProfileURL:(id)url;
- (void)sundialImmersiveAttributionView:(id)view didTapFollowHashtagButton:(id)button;
- (void)videoControlsViewProgressScrubbingDidBegin:(id)begin;
- (void)videoControlsViewProgressScrubbingDidChange:(id)change;
- (void)videoControlsViewProgressScrubbingDidEnd:(id)end;
- (void)videoControlsView:(id)view didRecognizeTapGesture:(id)gesture;
- (void)videoControlsViewAutoAdvanceModeCancelButtonTapped:(id)tapped;
- (void)unifiedVideoCaptionViewDidTapHashtag:(id)hashtag withURL:(id)url;
- (void)unifiedVideoCaptionViewDidTapProfileURL:(id)url profileText:(id)text;
- (void)unifiedVideoCaptionViewDidTapFBMentionWithProfileURL:(id)url;
- (void)unifiedVideoCaptionViewDidTapShoppingURL:(id)url;
- (void)unifiedVideoCaptionViewDidTapExpansionToggle:(id)toggle;
- (void)unifiedVideoCaptionViewDidTapMoreButton:(id)button;
- (void)unifiedVideoCaptionViewDidTapTranslationButton:(id)button;
- (void)unifiedVideoCaptionViewDidTapSeeOriginalButton:(id)button;
- (void)unifiedVideoCaptionViewDidTapInlineTagsWithType:(unsigned long long)type;
- (void)unifiedVideoCaptionViewDidTapNonExpansionArea:(id)area withLoggingInfoProviding:(id)providing;
- (void)attributionViewDidTapFavoritesButton:(id)button;
- (void)attributionViewDidTapFanClubButton:(id)button;
- (void)sundialImmersiveViewerFlexibleCTAView:(id)ctaview didTapCTAWithType:(unsigned long long)type;
- (void)sundialViewerUFI:(id)ufi didReceiveTap:(unsigned long long)tap;
- (void)sundialViewerUFI:(id)ufi didLongPressSendButtonWithGesture:(id)gesture;
- (void)sundialViewerUFI:(id)ufi didLongPressSaveButtonWithGesture:(id)gesture;
- (void)sundialViewerUFI:(id)ufi didLongPressLikeButtonWithGesture:(id)gesture;
- (void)sundialViewerUFI:(id)ufi didScrubPageControlToIndex:(unsigned long long)index;
- (void)sundialViewerUFI:(id)ufi didRegisterImpression:(unsigned long long)impression;
- (id)contentMetadata;
- (void)didTapCTAButton;
- (void)feedItemBusinessCellDidTapViewInsights:(id)insights;
- (void)feedItemBusinessCellDidTapPromote:(id)promote;
- (void)feedItemBusinessCellDidTapViewAdGuideline:(id)guideline;
- (void)feedItemPageIndicator:(id)indicator didScrubToIndex:(long long)index;
- (void)feedItemPageIndicatorDidRequestSidecarToDisplay:(id)display index:(long long)index;
- (void)sundialCollaborationIndicatorViewDidTapAccept:(id)accept;
- (void)sundialCollaborationIndicatorView:(id)view didTapUserProfileURL:(id)url;
- (void)sundialSocialContextButton:(id)button didRegisterImpressionForSocialContextType:(long long)type;
- (void)sundialSocialContextButton:(id)button didTapTextView:(id)view socialContextType:(long long)type socialContextInfo:(id)info shouldDisplaySecondarySurfaceCTA:(BOOL)cta;
- (void)sundialSocialContextButton:(id)button didTapUserWithURL:(id)url;
- (void)sundialSocialContextButton:(id)button didTapImage:(id)image socialContextType:(long long)type shouldDisplaySecondarySurfaceCTA:(BOOL)cta;
- (void)_didTapTopLikersButton:(id)button;
- (void)_secondaryCTAButtonTapped:(id)tapped;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expectedFinalMediaFrame;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGSundialImmersiveViewerVerticalControlsOverlayView_h */
