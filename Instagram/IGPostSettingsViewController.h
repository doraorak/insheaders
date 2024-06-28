//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPostSettingsViewController_h
#define IGPostSettingsViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGAddPartnerSearchContainerViewControllerDelegate-Protocol.h"
#include "IGAddPartnerTaggingViewControllerDelegate-Protocol.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGDSListCellViewSwitchDelegate-Protocol.h"
#include "IGShareMusicManager.h"

@class IGActionableConfirmationToastController, IGBusinessToolAlertViewController, IGContentSchedulingLogger, IGMediaMetadata, IGShareListManager, IGSwitchViewProvider, IGTableLayoutSpec, IGTextRowViewProvider, IGUserSession, NSArray, NSDictionary, NSString;
@protocol IGPostSettingsViewControllerAddPartnerDelegate, IGPostSettingsViewControllerDelegate;

@interface IGPostSettingsViewController : IGGroupedTableViewController<IGAddPartnerSearchContainerViewControllerDelegate, IGAddPartnerTaggingViewControllerDelegate, IGCoreTextLinkHandler, IGDSListCellViewSwitchDelegate> {
  /* instance variables */
  IGTableLayoutSpec *_layoutSpec;
  IGSwitchViewProvider *_sizingSwitchViewProvider;
  IGTextRowViewProvider *_sizingTextRowViewProvider;
  NSObject<IGPostSettingsViewControllerAddPartnerDelegate> *_addPartnerDelegate;
  BOOL _showEditAltTextOption;
  BOOL _showEnableCaptionsOption;
  NSArray *_sections;
  NSDictionary *_sectionsMap;
  IGBusinessToolAlertViewController *_alertViewController;
  BOOL _isUnavailableBecauseOfAudienceContent;
  IGActionableConfirmationToastController *_toastController;
  BOOL _showCrossPostingUpdates;
  BOOL _showThreadsAutoCrossPostSetting;
  NSString *_composerSessionId;
  BOOL _showBrandedContentEntryPoint;
  NSObject<IGPostSettingsViewControllerDelegate> *_delegate;
  BOOL _canScheduleContent;
  IGContentSchedulingLogger *_contentSchedulingLogger;
  IGShareMusicManager *_musicManager;
}

@property (retain, nonatomic) IGMediaMetadata *mediaMetadata;
@property (retain, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) IGShareListManager *shareListManager;
@property (retain, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMediaMetadata:(id)metadata userSession:(id)session delegate:(id)delegate shareListManager:(id)manager musicManager:(id)manager addPartnerDelegate:(id)delegate assets:(id)assets composerSessionId:(id)id canScheduleContent:(BOOL)content showThreadsAutoCrossPostSetting:(BOOL)setting;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillAppear:(BOOL)appear;
- (void)_onBackButtonTapped;
- (void)viewDidAppear:(BOOL)appear;
- (void)shareServiceConfigureManager:(id)manager didFinishLoginForService:(long long)service;
- (long long)preferredTabBarBehavior;
- (BOOL)prefersStatusBarHidden;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)titleForHeaderInSection:(long long)section;
- (id)titleForFooterInSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)updateWarningScreenInfoForWarningScreenType:(id)type warningScreenName:(id)name;
- (void)partnersViewController:(id)controller didUpdatePartners:(id)partners isPaidPartnership:(BOOL)partnership isBCAdsPermissionOn:(BOOL)on;
- (void)partnersViewController:(id)controller didUpdateAudienceRestrictions:(id)restrictions;
- (void)partnersViewControllerDidTapDoneButton:(id)button;
- (void)partnersViewController:(id)controller didUpdateBrandedContentAdsBoostPostToken:(id)token;
- (void)addPartnerSearchContainerViewControllerDidUpdateBrandPartners:(id)partners;
- (void)addPartnerSearchContainerViewControllerDidTapBackButton;
- (void)addPartnerTaggingViewControllerDidAddUser:(id)user viewController:(id)controller;
- (void)addPartnerTaggingViewControllerDidRemoveUser:(id)user viewController:(id)controller;
- (void)addPartnerTaggingViewControllerDidCancelOut:(id)out;
- (BOOL)accessibilityPerformEscape;
- (void)editAltTextViewController:(id)controller finishedWithAssets:(id)assets;
- (void)editAltTextViewControllerCancelled:(id)cancelled;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)dismissedBrandedContentTagAccessFlowViewController:(id)controller;
- (void)switchProvider:(id)provider switchToggled:(BOOL)toggled;
- (void)pseudoDisabledSwitchProvider:(id)provider switchToggled:(BOOL)toggled;
- (void)pseudoDisabledSwitchProviderDidTapDisabledSwitch:(id)switch;
- (void)upcomingEventsDatePickerViewController:(id)controller didTapDoneButtonForUpcomingEventDate:(id)date;
- (void)upcomingEventsDatePickerViewController:(id)controller didTapClearButtonForUpcomingEventDate:(id)date;
- (void)switchValueDidChange:(id)change;
@end

#endif /* IGPostSettingsViewController_h */