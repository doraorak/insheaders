//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenFooterViewModel_h
#define IGStoryFullscreenFooterViewModel_h
@import Foundation;

#include "IGStoryFullscreenFooterStoryLikesConfig.h"
#include "IGStoryFullscreenStoryOwnerViewerButtonViewModel.h"
#include "IGStoryFullscreenUploadFooterViewModel.h"
#include "IGStoryItemType-Protocol.h"

@class IGContactsUserStore, IGMedia, IGStoryViewerViewModel, IGUser, IGUserSession, NSArray, NSString, UIImage;

@interface IGStoryFullscreenFooterViewModel : NSObject {
  /* instance variables */
  BOOL _isCanvasAd;
  BOOL _hasStoryLinks;
  BOOL _showReshareButton;
  BOOL _showRemixReplyButton;
  BOOL _showSelfieReactButton;
  BOOL _showDirectButton;
  BOOL _showSaveButton;
  BOOL _showGifReplyButton;
  BOOL _isAdSaved;
  BOOL _showViewInsightsCTAButton;
  BOOL _isSensitiveVerticalAd;
  IGStoryFullscreenFooterStoryLikesConfig *_storyLikesConfig;
  BOOL _showClipsCameraCreateButton;
  NSString *_storyReplyComposerPlaceholderText;
  NSString *_storyReplyComposerPlaceholderAccessibilityText;
  BOOL _showSharedListCommentButton;
  BOOL _showMessageButton;
  NSString *_threadId;
  BOOL _showE2eeLabel;
  IGStoryFullscreenStoryOwnerViewerButtonViewModel *_storyOwnerViewerButtonViewModel;
  BOOL _showPromoteButton;
  BOOL _isCurrentlyPromoted;
  BOOL _showHighlightButton;
  BOOL _showInsightsButton;
  BOOL _isHighlight;
  BOOL _isCurrentUserItem;
  BOOL _isArchive;
  unsigned long long _archiveNavButtonStyle;
  BOOL _disableArchiveReshareButton;
  long long _crossShareToFacebookState;
  BOOL _crossShareToFacebookEnabled;
  unsigned long long _storyCTAButtonType;
  UIImage *_leftCTAButtonImage;
  double _leftCTAButtonImageYOffset;
  BOOL _isCTAButtonBackgroundEnabled;
  BOOL _showChevron;
  BOOL _shouldHideCTAButton;
  IGStoryFullscreenUploadFooterViewModel *_uploadProgressViewModel;
  BOOL _showConvertToReelButton;
  BOOL _enableViewShopButton;
  BOOL _showCommentButton;
  BOOL _showVoiceReplyButton;
  BOOL _showCarouselScrubberButton;
  BOOL _showShareAsPostButton;
  BOOL _showLatelyButton;
  BOOL _isInLately;
  IGContactsUserStore *_contactsUserStore;
  BOOL _showQuickReactButton;
  IGMedia *_currentStoryItemMedia;
  BOOL _isNetego;
  BOOL _isEmptyStateStory;
  BOOL _showPoliticalContext;
  BOOL _displaySeeDetailsCTA;
  BOOL _showDonateNowDisclaimer;
  BOOL _showBrandedContentViolationView;
  BOOL _isClickToDirectAd;
  BOOL _showAdTransparencyDisclaimerLabel;
  BOOL _readOnlyFeatureLimitApplied;
  BOOL _hasCTASticker;
  IGStoryViewerViewModel *_viewerViewModel;
  unsigned long long _netegoCellState;
  NSString *_donateNowDisclaimerText;
}

@property (readonly, nonatomic) IGUser *storyOwner;
@property (retain, nonatomic) NSObject<IGStoryItemType> *currentStoryItem;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) unsigned long long storyCTAType;
@property (readonly, copy, nonatomic) NSString *storyCTAButtonTitle;
@property (readonly, copy, nonatomic) NSArray *storyCTAButtonSecondaryActionList;
@property (readonly, nonatomic) BOOL isSponsored;
@property (readonly, copy, nonatomic) NSString *draftMessage;
@property (readonly, copy, nonatomic) NSString *politicalContextText;
@property (readonly, copy, nonatomic) NSString *module;
@property (readonly, copy, nonatomic) NSString *disclaimerTitle;
@property (readonly, nonatomic) BOOL showDisclaimer;
@property (readonly, copy, nonatomic) NSString *adTransparencyDisclaimerLabel;
@property (readonly, nonatomic) NSString *tapAndHoldContext;
@property (readonly, nonatomic) long long entryPoint;

/* instance methods */
- (id)initWithCurrentItem:(id)item storyViewerViewModel:(id)model threadId:(id)id userSession:(id)session hasStoryLinks:(BOOL)links isCanvasAd:(BOOL)ad draftMessage:(id)message showE2eeLabel:(BOOL)label showPromoteButton:(BOOL)button showChevron:(BOOL)chevron showReshareButton:(BOOL)button showRemixReplyButton:(BOOL)button showSelfieReactButton:(BOOL)button showDirectButton:(BOOL)button storyLikesConfig:(id)config showGifReplyButton:(BOOL)button showSaveButton:(BOOL)button isAdSaved:(BOOL)saved isShareToFBEnabled:(BOOL)fbenabled entryPoint:(long long)point module:(id)module netegoCellState:(unsigned long long)state showViewInsightsCTAButton:(BOOL)ctabutton isCTAButtonBackgroundEnabled:(BOOL)enabled storyOwnerViewerButtonViewModel:(id)model uploadProgressViewModel:(id)model showBrandedContentViolationView:(BOOL)view shouldHideCTAButton:(BOOL)ctabutton isClickToDirectAd:(BOOL)ad readOnlyFeatureLimitApplied:(BOOL)applied hasCTASticker:(BOOL)ctasticker tapAndHoldContext:(id)context showCommentButton:(BOOL)button showVoiceReplyButton:(BOOL)button showCarouselScrubberButton:(BOOL)button showShareAsPostButton:(BOOL)button showQuickReactButton:(BOOL)button showProductFooter:(BOOL)footer showLatelyButton:(BOOL)button;
@end

#endif /* IGStoryFullscreenFooterViewModel_h */
