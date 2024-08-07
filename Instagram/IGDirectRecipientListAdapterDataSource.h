//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientListAdapterDataSource_h
#define IGDirectRecipientListAdapterDataSource_h
@import Foundation;

#include "IGDirectRecentRecipientsManager.h"
#include "IGShareSheetImprovementExperimentationConfig.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGDirectRecipientListSectionViewMoreControl, IGDirectRecipientListViewConfiguration, IGDirectRecipientOneTapStateTracker, IGDirectRecipientService, IGDirectShareSheetOneTapButtonTextGrouping, IGImageTitleSubtitleViewLayoutSpec, IGLabelItemConfiguration, IGMedia, IGShareToStoryValue, IGUserSession, NSArray, NSMutableSet, NSOrderedSet, NSSet, NSString, UIColor;
@protocol IGDirectRecipientListAdapterDataSourceDelegate;

@interface IGDirectRecipientListAdapterDataSource : NSObject {
  /* instance variables */
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  IGUserSession *_userSession;
  IGDirectRecipientListViewConfiguration *_configuration;
  IGShareToStoryValue *_reshareToStoryValue;
  NSString *_module;
  IGDirectRecentRecipientsManager *_recentRecipientsManager;
  IGDirectRecipientService *_recipientService;
  IGDirectRecipientListSectionViewMoreControl *_suggestedViewMoreControl;
  IGDirectRecipientListSectionViewMoreControl *_activeNowViewMoreControl;
  IGDirectRecipientListSectionViewMoreControl *_groupsViewMoreControl;
  IGDirectRecipientListSectionViewMoreControl *_recentsViewMoreControl;
  NSArray *_suggestedRecipients;
  NSArray *_groupRecipients;
  NSArray *_currentInboxRecipients;
  NSArray *_currentInboxRecipientsRaw;
  NSMutableSet *_expandedRecipients;
  NSOrderedSet *_searchRecipients;
  NSMutableSet *_mentionedInStorySet;
  UIColor *_rowBackgroundColor;
  IGImageTitleSubtitleViewLayoutSpec *_defaultLayoutSpec;
  IGLabelItemConfiguration *_defaultLabelConfig;
  IGLabelItemConfiguration *_warningLabelConfig;
  IGLabelItemConfiguration *_viewMoreLabelConfig;
  BOOL _hasSharedToStory;
  BOOL _isInGlobalSearch;
  IGShareSheetImprovementExperimentationConfig *_shareSheetImprovementConfig;
  IGMedia *_media;
  NSSet *_oneTapSendButtonTitles;
  IGDirectRecipientOneTapStateTracker *_oneTapStateTracker;
  IGDirectShareSheetOneTapButtonTextGrouping *_oneTapTitleTexts;
  IGDirectShareSheetOneTapButtonTextGrouping *_oneTapAccessibilityTexts;
  BOOL _isLoadingRecipients;
  BOOL _hasMorePages;
  double _listWidth;
  BOOL _isGridViewEligible;
  BOOL _isGridViewInSharesheetSearchEnabled;
  BOOL _isFullscreenSearchList;
  BOOL _forceDarkModeStyle;
  BOOL _shouldPrependLoadingSpinnerForNullStateUnavailability;
  BOOL _isBroadcastRowEnabled;
  NSArray *_selectedHighlightReelTitles;
  NSArray *_initialSuggestedInstagramRecipients;
  NSArray *_topLikerRecipients;
}

@property (weak, nonatomic) NSObject<IGDirectRecipientListAdapterDataSourceDelegate> *delegate;

/* instance methods */
- (id)initWithFeatureSets:(id)sets userSession:(id)session configuration:(id)configuration reshareToStoryValue:(id)value recentRecipientsManager:(id)manager recipientService:(id)service media:(id)media oneTapStateTracker:(id)tracker oneTapTitleTexts:(id)texts oneTapAccessibilityTexts:(id)texts listWidth:(double)width module:(id)module forceDarkModeStyle:(BOOL)style isGridViewEligible:(BOOL)eligible isGridViewInSharesheetSearchEnabled:(BOOL)enabled isBroadcastRowEnabled:(BOOL)enabled;
- (BOOL)_hasReceivedSuggestedRecipients;
- (void)_addCreatorAISandboxSectionIfNeededRecipientList:(id)list selectedRecipients:(id)recipients recipientListState:(long long)state shareSheetType:(long long)type;
@end

#endif /* IGDirectRecipientListAdapterDataSource_h */
