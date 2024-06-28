//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenFooterContainerView_h
#define IGStoryFullscreenFooterContainerView_h
@import Foundation;

#include "UIView.h"
#include "IGCTMessagingAdsStoryFooterView.h"
#include "IGStoryFullScreenContactInviteFooterView.h"
#include "IGStoryFullScreenShuffleFooterView.h"
#include "IGStoryFullscreenAREffectPreviewFooterView.h"
#include "IGStoryFullscreenAdBottomFooterView.h"
#include "IGStoryFullscreenAddYoursFooterView.h"
#include "IGStoryFullscreenCTAButtonFooterView.h"
#include "IGStoryFullscreenCTAStickerFooterView.h"
#include "IGStoryFullscreenDefaultFooterView.h"
#include "IGStoryFullscreenDelaySkipFooterBannerView.h"
#include "IGStoryFullscreenDelaySkipFooterView.h"
#include "IGStoryFullscreenFanClubTeaserFooterView.h"
#include "IGStoryFullscreenFeedItemFooterView.h"
#include "IGStoryFullscreenGroupStoriesFooterView.h"
#include "IGStoryFullscreenOwnerFooterView.h"
#include "IGStoryFullscreenProductTagFooterView.h"
#include "IGStoryFullscreenRightsManagerViolationFooterView.h"
#include "IGStoryFullscreenSuggestedHighlightFooterView.h"
#include "IGStoryFullscreenSwipeUpGuidanceFooterView.h"
#include "IGStoryFullscreenUploadFooterView.h"

@class IGAttributedStringTextView, IGUserSession, UIView;
@protocol IGStoryViewerLogging;

@interface IGStoryFullscreenFooterContainerView : UIView {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _footerHDREnabled;
  NSObject<IGStoryViewerLogging> *_storyViewerLogger;
  IGStoryFullscreenRightsManagerViolationFooterView *_rightsManagerViolationFooterView;
  IGStoryFullscreenOwnerFooterView *_ownerFooterView;
  IGStoryFullscreenDefaultFooterView *_defaultFooterView;
  IGStoryFullscreenGroupStoriesFooterView *_groupStoriesFooterView;
  IGStoryFullscreenAREffectPreviewFooterView *_arEffectPreviewFooterView;
  IGStoryFullscreenCTAButtonFooterView *_ctaButtonFooterView;
  IGStoryFullscreenSwipeUpGuidanceFooterView *_swipeUpGuidanceFooterView;
  IGStoryFullScreenShuffleFooterView *_shuffleButtonFooterView;
  IGStoryFullScreenContactInviteFooterView *_contactInviteFooterView;
  IGAttributedStringTextView *_brandedContentViolationView;
  IGStoryFullscreenAdBottomFooterView *_adBottomFooterView;
  IGStoryFullscreenSuggestedHighlightFooterView *_suggestedHighlightFooterView;
  IGStoryFullscreenFeedItemFooterView *_feedItemFooterView;
  IGCTMessagingAdsStoryFooterView *_clickToMessagingAdFooterView;
  IGStoryFullscreenCTAStickerFooterView *_ctaStickerFooterView;
  UIView *_readOnlyFeatureLimitFooterView;
  IGStoryFullscreenFanClubTeaserFooterView *_fanClubTeaserFooterView;
  IGStoryFullScreenContactInviteFooterView *_emptyStateSyncContactsFooterView;
  IGStoryFullscreenAddYoursFooterView *_addYoursFooterView;
  IGStoryFullscreenDelaySkipFooterView *_delaySkipFooterView;
  IGStoryFullscreenDelaySkipFooterBannerView *_delaySkipFooterBannerView;
  IGStoryFullscreenProductTagFooterView *_productTagFooterView;
  struct CGSize { double width; double height; } _footerViewSize;
}

@property (readonly, nonatomic) IGStoryFullscreenUploadFooterView *uploadFooterView;

/* class methods */
+ (double)_brandedContentBannerHeight:(double)height;

/* instance methods */
- (id)initWithUserSession:(id)session storyViewerLogger:(id)logger;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (double)_adBottomFooterHeight;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* IGStoryFullscreenFooterContainerView_h */
