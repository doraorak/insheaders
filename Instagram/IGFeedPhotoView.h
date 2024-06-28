//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPhotoView_h
#define IGFeedPhotoView_h
@import Foundation;

#include "IGFeedMediaView.h"
#include "IGALLogContextModelProvider-Protocol.h"
#include "IGContentNotesMediaOverlayViewDelegate-Protocol.h"
#include "IGContentNotesMinimizedViewDelegate-Protocol.h"
#include "IGDebuggingMediaLinesView.h"
#include "IGFeedPhotoViewDelegate-Protocol.h"
#include "IGFeedTagsProvider-Protocol.h"
#include "IGFloatingSocialContextMediaOverlayViewDelegate-Protocol.h"
#include "IGImageProgressViewDelegate-Protocol.h"
#include "IGMediaIndicatorDelegate-Protocol.h"
#include "IGObjectInTagDisplayView.h"
#include "IGOverlayedIGFeedMediaView-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC24IGMediaAttributionShared34IGMediaAttributionOpenCarouselView.h"
#include "_TtP24IGMediaAttributionShared42IGMediaAttributionOpenCarouselViewDelegate_-Protocol.h"

@class FBTimer, IGContentNotesMediaOverlayViewModel, IGContentNotesMinimizedView, IGGradientView, IGImageProgressView, IGImageSpecifier, IGImageView, IGMediaAttributionConfiguration, IGMediaIndicator, IGMediaIndicatorConfiguration, IGMediaOverlayActionableInsightsTipBannerView, IGPassthroughView, IGSessionTracker, IGTag, IGTagHintDisplayView, IGTagPosition, IGUserSession, NSArray, NSDictionary, NSNumber, NSString, UIImage, UIImageView, UITapGestureRecognizer, UIView;
@protocol UIView<IGContentNotesMediaOverlayViewType, UIView<IGFloatingSocialContextMediaOverlayType;

@interface IGFeedPhotoView : IGFeedMediaView<IGALLogContextModelProvider, IGContentNotesMediaOverlayViewDelegate, IGContentNotesMinimizedViewDelegate, IGImageProgressViewDelegate, UIGestureRecognizerDelegate, IGMediaIndicatorDelegate, _TtP24IGMediaAttributionShared42IGMediaAttributionOpenCarouselViewDelegate_, IGFloatingSocialContextMediaOverlayViewDelegate, IGOverlayedIGFeedMediaView> {
  /* instance variables */
  IGDebuggingMediaLinesView *_debuggingMediaLinesView;
  NSObject<IGFeedTagsProvider> *_tagsProvider;
  IGMediaIndicatorConfiguration *_indicatorConfiguration;
  IGMediaIndicatorConfiguration *_secondaryIndicatorConfiguration;
  IGMediaIndicatorConfiguration *_thirdIndicatorConfiguration;
  IGMediaIndicatorConfiguration *_topLeftIndicatorConfiguration;
  IGMediaAttributionConfiguration *_attributionConfiguration;
  BOOL _wereTagsShown;
  BOOL _isPeekingProductTags;
  BOOL _hasIndicatorAnimatedFromIconToExpandedState;
  struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _tagGroupsMutex;
  IGMediaIndicator *_audioIndicator;
  IGTag *_dynamicPositionTag;
  IGTagPosition *_dynamicPositionTagPosition;
  NSNumber *_dynamicPositionTagIndex;
  FBTimer *_secondaryIndicatorDwellTimer;
  IGContentNotesMediaOverlayViewModel *_contentNotesViewModel;
  unsigned long long _badgeType;
  UIView *_badgeContainerView;
  IGImageView *_badgeView;
  BOOL _mediaIndicatorVisible;
  BOOL _isAnimatingHideContentNotes;
  BOOL _hasFinishedFirstContentNotesLayout;
  IGGradientView *_legibilityGradient;
  IGPassthroughView *_overlayContainerView;
  BOOL _shouldRightAlignUAS;
  IGImageProgressView *_photoImageView;
}

@property (readonly, nonatomic) UIImageView *hiddenIcon;
@property (readonly, nonatomic) IGTagHintDisplayView *tagHintDisplayView;
@property (retain, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) NSArray *tagGroups;
@property (readonly, nonatomic) IGImageSpecifier *imageSpecifier;
@property (retain, nonatomic) UIImage *preloadedImage;
@property (readonly, nonatomic) IGMediaIndicator *indicator;
@property (readonly, nonatomic) IGMediaIndicator *secondaryIndicator;
@property (readonly, nonatomic) IGMediaIndicator *thirdIndicator;
@property (readonly, nonatomic) IGMediaIndicator *topLeftIndicator;
@property (readonly, nonatomic) BOOL isShowingTags;
@property (nonatomic) BOOL showsTagsOnTap;
@property (nonatomic) BOOL isLikeEnabled;
@property (nonatomic) BOOL didManuallyTriggerTooltip;
@property (nonatomic) BOOL didOpenTags;
@property (readonly, nonatomic) BOOL isPeekingTagDots;
@property (nonatomic) BOOL isImageAccessibilityElement;
@property (readonly, nonatomic) BOOL imageViewIsFinishedLoading;
@property (nonatomic) BOOL shoppingIsCheckoutEnabled;
@property (retain, nonatomic) NSDictionary *productMerchantIds;
@property (retain, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property (nonatomic) BOOL isTestClass;
@property (readonly, nonatomic) IGObjectInTagDisplayView *inTagView;
@property (nonatomic) BOOL hasDelayedMetadata;
@property (readonly, nonatomic) UIView<IGContentNotesMediaOverlayViewType> *contentNotesView;
@property (readonly, nonatomic) UIView<IGFloatingSocialContextMediaOverlayType> *floatingSocialContextOverlayMediaView;
@property (readonly, nonatomic) IGMediaOverlayActionableInsightsTipBannerView *actionableInsightsTipView;
@property (readonly, nonatomic) IGContentNotesMinimizedView *contentNotesMinimizedView;
@property (readonly, nonatomic) _TtC24IGMediaAttributionShared34IGMediaAttributionOpenCarouselView *openCarouselMediaAttributionView;
@property (nonatomic) BOOL isCTATargetExtensionEnabled;
@property (nonatomic) BOOL isTrackedAsSingleImageAd;
@property (weak, nonatomic) NSObject<IGFeedPhotoViewDelegate> *delegate;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *singleTapRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_showTagView:(BOOL)view animated:(BOOL)animated tagShowReason:(unsigned long long)reason;
- (void)_clearSecondaryIndicatorDwellTimer;
- (void)configureOverlayAndIndicatorWithTagGroups:(id)groups tagsProvider:(id)provider dynamicPositionTag:(id)tag indicatorConfigurations:(id)configurations attributionConfiguration:(id)configuration contentNotesViewModel:(id)model actionableInsightsAsyncViewModel:(id)model floatingSocialContextMediaOverlayViewModel:(id)model;
- (void)configureDynamicTagLocation:(struct CGPoint { double x0; double x1; })location;
- (void)configureBadge:(id)badge;
- (void)configureSingleDynamicPositionTag:(id)tag carouselIndex:(id)index;
- (void)_configureIndicator:(id)indicator withConfiguration:(id)configuration;
- (void)setModule:(id)module;
- (void)setImageGammaFilter:(BOOL)filter gammaAdjustment:(double)adjustment;
- (void)updateMediaAttributionWithConfiguration:(id)configuration;
- (void)setTagViewDelegate:(id)delegate;
- (void)configureMediaAllOverlaysWithAlpha:(double)alpha;
- (void)layoutSubviews;
- (void)_layoutIndicatorViews;
- (void)_layoutRightIndicatorViews;
- (void)_layoutAttributionView;
- (void)_layoutBWPBadgeView;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)_onTap:(id)tap;
- (void)_updateIndicatorStateOnTap:(id)tap forceExpandedState:(BOOL)state;
- (void)_onDoubleTap:(id)tap;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_updateSingleTapRecognizer;
- (BOOL)hasProductTags;
- (BOOL)hasUserTags;
- (BOOL)willShowIndicator;
- (long long)interactivityType;
- (BOOL)canPeekTagHintDots;
- (BOOL)canPeekProductTagsOnDwell;
- (BOOL)photoViewHasFinishedLoading;
- (BOOL)shouldPeekExpandedIndicator;
- (BOOL)isIndicatorExpanded;
- (void)peekInitialIndicatorsWithExpandedLeftIndicator:(BOOL)indicator withCollapseDelay:(double)delay;
- (void)showTagHintDotsWithShowDelay:(double)delay hideDelay:(double)delay;
- (BOOL)hasTags;
- (id)productTags;
- (void)showTagsIndicator:(BOOL)indicator animated:(BOOL)animated;
- (void)showProductTagsIndicator:(BOOL)indicator animated:(BOOL)animated;
- (void)showTags:(BOOL)tags animated:(BOOL)animated isPeekingProductTags:(BOOL)tags tagVisibilityChangeReason:(unsigned long long)reason;
- (void)autoShowAdTag;
- (void)clearTagHintDots;
- (void)_hideTagHintDotsAnimated:(BOOL)animated withDelay:(double)delay;
- (void)hideAudioIndicator;
- (void)showAudioIndicatorWithIconType:(unsigned long long)type;
- (void)setLinkedHighlightIndicatorLoading:(BOOL)loading;
- (void)_debuggingLinesDisplay;
- (void)progressImageView:(id)view didUpdateLoadingState:(id)state;
- (void)progressImageView:(id)view didLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)progressImageView:(id)view didFailLoadWithError:(id)error networkRequestSummary:(id)summary;
- (void)didTapLikeButtonWithAttributionView:(id)view isLiked:(BOOL)liked tapSource:(id)source containerModule:(id)module;
- (void)showProfilePageWithUserUrl:(id)url;
- (void)_onTagGroupWasEdited:(id)edited;
- (void)mediaIndicatorTapped:(id)tapped;
- (void)mediaIndicator:(id)indicator willChangeToState:(unsigned long long)state previousState:(unsigned long long)state;
- (void)mediaIndicator:(id)indicator didChangeToState:(unsigned long long)state previousState:(unsigned long long)state;
- (id)trackingModel;
- (void)overlayView:(id)view didTapNoteWithNoteModel:(id)model presentationContext:(id)context;
- (void)overlayViewDidInteractWithContentNoteBubble;
- (void)overlayView:(id)view didTapOverflowPreviewWithSeenNoteID:(id)id;
- (void)overlayViewDidDragNotesOffScreen:(id)screen;
- (void)overlayViewDidTapAddNoteMimicryButton:(id)button;
- (void)overlayView:(id)view didTapContextMenuWithAction:(long long)action noteModel:(id)model;
- (void)overlayView:(id)view didTapOnCommentString:(id)string url:(id)url;
- (void)minimizedViewDidTapToExpand:(id)expand;
- (void)_layoutContentNotesViews;
- (void)_didShowTagsWithReason:(unsigned long long)reason;
- (void)_didHideTagsWithReason:(unsigned long long)reason;
- (BOOL)_contentNoteViewIsPresent;
- (void)_animateContentNotesAlpha:(double)alpha;
- (void)_updateLikeIndicator:(BOOL)indicator likeCount:(unsigned long long)count;
- (void)_layoutActionableInsightsTipView;
- (void)_showUnifiedActionSystemTagsIndicator:(id)indicator withState:(unsigned long long)state queueCollapse:(BOOL)collapse withCollapseDelay:(double)delay;
- (id)_setupBottomRightIndicatorWithText:(id)text iconType:(unsigned long long)type indicatorPosition:(unsigned long long)position;
- (void)_setupAudioIndicator;
- (struct CGPoint { double x0; double x1; })_mediaIndicatorsTopRight;
- (void)_hideAllOverlays;
- (void)_shouldTrackImpressionsForOverlayIndicator:(BOOL)indicator;
- (void)_logTagsListEntryPointImpression:(BOOL)impression;
- (void)_configureFloatingSocialContextOverlayMediaViewWithViewModel:(id)model;
- (void)_layoutFloatingSocialContextOverlayMediaViews;
- (BOOL)_floatingSocialContextOverlayMediaViewIsPresent;
- (void)_animateFloatingSocialContextAlpha:(double)alpha;
- (void)overlayView:(id)view didTapContextWithModel:(id)model bubblePosition:(long long)position;
- (void)overlayView:(id)view didLongPressContextWithAction:(unsigned long long)action model:(id)model bubblePosition:(long long)position;
- (void)overlayView:(id)view didRegisterSocialContextViewImpressionWithModel:(id)model bubblePosition:(long long)position viewpointContext:(id)context;
- (void)overlayView:(id)view didDragToDismissSocialContext:(id)context overlayViewModel:(id)model;
- (void)overlayView:(id)view didTapOnLikeButton:(id)button viewModel:(id)model;
- (id)photoImageView;
@end

#endif /* IGFeedPhotoView_h */
