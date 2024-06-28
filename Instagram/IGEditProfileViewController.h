//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEditProfileViewController_h
#define IGEditProfileViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGAccountsCenterShouldShowNodeInAccountsCenterHelper.h"
#include "IGAvatarEditorPresenterExitNuxHelper.h"
#include "IGBusinessFacebookConnectOrClaimPageFlowDelegate-Protocol.h"
#include "IGEditProfileBioViewControllerDelegate-Protocol.h"
#include "IGEditProfileConfirmationView.h"
#include "IGEditProfileParams.h"
#include "IGEditProfileViewControllerType-Protocol.h"
#include "IGEditProfileViewControllerTypeDelegate-Protocol.h"
#include "IGGrowingTextViewDelegate-Protocol.h"
#include "IGMusicOnProfileInfo.h"
#include "IGMusicOnProfileSettingsViewControllerDelegate-Protocol.h"
#include "IGTextFieldDelegate-Protocol.h"
#include "IGUserProfileGroupedTableViewCell.h"
#include "IGUserUpdatedListener-Protocol.h"
#include "_TtC17IGEditProfileWall32IGEditProfileWallFieldController.h"
#include "_TtC27IGEditProfileBarcelonaBadge42IGEditProfileBarcelonaBadgeFieldController.h"
#include "_TtC29IGEditProfileFieldControllers42IGEditProfileProfilePictureFieldController.h"
#include "_TtC29IGEditProfileFieldControllers43IGEditProfileFeaturedBannersFieldController.h"
#include "_TtP29IGEditProfileFieldControllers29IGEditVerifiedProfileLauncher_-Protocol.h"
#include "_TtP29IGEditProfileFieldControllers30IGEditProfileFxIdentityManager_-Protocol.h"
#include "_TtP29IGEditProfileFieldControllers36IGEditProfileLoadingSpinnerProviding_-Protocol.h"
#include "_TtP29IGEditProfileFieldControllers38IGEditProfileRequestParametersProvider_-Protocol.h"
#include "_TtP29IGEditProfileFieldControllers43IGEditProfileFieldUpdateErrorToastPresenter_-Protocol.h"
#include "_TtP29IGEditProfileFieldControllers47IGEditProfileFieldUpdateDiscardChangesPresenter_-Protocol.h"

@class BusinessAuthConfig, CallerInfo, FBPageInfo, IG4BFlowNavDelegateWrapper, IG4BLogger, IGBloksAsyncActionHandler, IGConfirmPhoneHelper, IGCreatorConnectionsLogger, IGGroupedTableViewCell, IGGrowingTextView, IGInfoView, IGInsetLabel, IGProAccountLoggingProvider, IGProConversionNUXConfigNetworker, IGProDiverseOwnedBusinessInfo, IGProDiverseOwnedBusinessInfoDataSource, IGTextField, IGTooltipView, IGUserSession, NSArray, NSMutableDictionary, NSNumber, NSString, UIBarButtonItem, UITextField, UITextView;
@protocol IGBusinessFacebookConnectOrClaimPageFlowPresenting, IGEditProfileViewControllerTypeLoggingDelegate, IGEditProfileViewControllerValidationResponseDelegate;

@interface IGEditProfileViewController : IGGroupedTableViewController<IGBusinessFacebookConnectOrClaimPageFlowDelegate, IGEditProfileBioViewControllerDelegate, IGGrowingTextViewDelegate, IGTextFieldDelegate, IGUserUpdatedListener, IGMusicOnProfileSettingsViewControllerDelegate, _TtP29IGEditProfileFieldControllers43IGEditProfileFieldUpdateErrorToastPresenter_, _TtP29IGEditProfileFieldControllers47IGEditProfileFieldUpdateDiscardChangesPresenter_, _TtP29IGEditProfileFieldControllers29IGEditVerifiedProfileLauncher_, _TtP29IGEditProfileFieldControllers30IGEditProfileFxIdentityManager_, _TtP29IGEditProfileFieldControllers36IGEditProfileLoadingSpinnerProviding_, _TtP29IGEditProfileFieldControllers38IGEditProfileRequestParametersProvider_, IGEditProfileViewControllerType> {
  /* instance variables */
  IGUserProfileGroupedTableViewCell *_profileCell;
  IGInsetLabel *_characterCountLabel;
  UITextField *_currentField;
  IGGrowingTextView *_bioTextView;
  IGTextField *_pronounsTextField;
  IGTextField *_linksTextField;
  IGTextField *_connectRelatedAccountsTextField;
  IGTextField *_chatsTextField;
  IGTextField *_musicOnProfilePublicInfoTextField;
  UITextView *_internalTextView;
  IGTextField *_emailTextField;
  IGTextField *_conversionTextField;
  IGTextField *_phoneTextField;
  IGTextField *_genderTextField;
  IGTextField *_pageTextField;
  IGTextField *_categoryTextField;
  IGTextField *_creatorCollaborationTextField;
  IGTextField *_contactTextField;
  IGTextField *_profileDisplayTextField;
  IGTextField *_purchaseOptionsTextField;
  IGTextField *_diverseOwnedBusinessInfoTextField;
  BOOL _userCanEditPronouns;
  IGEditProfileConfirmationView *_emailConfirmationView;
  IGEditProfileConfirmationView *_phoneConfirmationView;
  IGEditProfileConfirmationView *_pageConfirmationView;
  IGConfirmPhoneHelper *_confirmPhoneHelper;
  IGTooltipView *_getQuoteTooltip;
  IGTooltipView *_linksTooltip;
  IGGroupedTableViewCell *_purchaseOptionsCell;
  IGInfoView *_loadingView;
  BOOL _isProfileInfoUpdated;
  double _currentBioHeight;
  long long _dataState;
  NSArray *_publicInfoRows;
  NSArray *_businessInfoRows;
  NSArray *_businessConversionRows;
  NSArray *_personalInformationEntryRows;
  NSArray *_privateInfoRows;
  NSArray *_personalAdsLinkEntryRows;
  NSArray *_metaVerifiedEntryRows;
  NSString *_trustedUsername;
  long long _trustedUsernameHoldingDays;
  BOOL _isGenderFieldEnabled;
  long long _selectedGender;
  NSString *_customGenderString;
  BOOL _shouldRefetchUserData;
  BOOL _isFirstAppearance;
  IGBloksAsyncActionHandler *_asyncActionHandler;
  BOOL _isAsyncActionPending;
  IGEditProfileParams *_usernameEditParams;
  IGEditProfileParams *_fullNameEditParams;
  NSMutableDictionary *_editProfileRequestParameters;
  BOOL _shouldShowChatsField;
  BOOL _shouldSeeTransitionOptionTwo;
  BOOL _isEligibleToSeePersonalDetailsInAC;
  IGAccountsCenterShouldShowNodeInAccountsCenterHelper *_shouldShowSettingNodeInAccountsCenterHelper;
  IGMusicOnProfileInfo *_musicOnProfileInfo;
  IGAvatarEditorPresenterExitNuxHelper *_avatarEditorPresenterHelper;
  FBPageInfo *_userPageInfo;
  IGProConversionNUXConfigNetworker *_nuxConfigNetworker;
  BOOL _shouldShowPublicDisclosure;
  BOOL _shouldShowCreatorCollaboration;
  BOOL _hasCreatorOptedInToCollab;
  IGCreatorConnectionsLogger *_creatorConnectionsLogger;
  _TtC27IGEditProfileBarcelonaBadge42IGEditProfileBarcelonaBadgeFieldController *_barcelonaBadgeFieldController;
  BOOL _shouldShowBarcelonaBadge;
  _TtC29IGEditProfileFieldControllers43IGEditProfileFeaturedBannersFieldController *_featuredBannersFieldController;
  BOOL _isFeaturedBannersEditorEnabled;
  _TtC29IGEditProfileFieldControllers42IGEditProfileProfilePictureFieldController *_profilePictureFieldController;
  _TtC17IGEditProfileWall32IGEditProfileWallFieldController *_profileWallFieldController;
  BOOL _shouldShowProfileWallSwitch;
  IGBloksAsyncActionHandler *_metaVerifiedAsyncActionHandler;
  BOOL _shouldShowConnectRelatedAccounts;
  NSObject<IGBusinessFacebookConnectOrClaimPageFlowPresenting> *_connectPageFlow;
  IGProAccountLoggingProvider *_loggingProvider;
  CallerInfo *_callerInfo;
  BusinessAuthConfig *_authConfig;
  BOOL _ttiLogged;
  BOOL _isTotalDirtyBytesValid;
  BOOL _isEvictableMemoryValid;
  BOOL _isBirthdayEffectsRemoved;
  BOOL _emptyEmailConfirmed;
  BOOL _submitting;
  BOOL _needPhoneConfirm;
  BOOL _needEmailConfirm;
  BOOL _confirmedEmailInSession;
  BOOL _confirmedPhoneInSession;
  BOOL _isPresented;
  BOOL _shouldAutoFocusFirstEmptyBusinessProfileField;
  BOOL _shouldUseZeroEdgeInsets;
  BOOL _shouldOnlyShowPublicInformation;
  BOOL _isPresentedInOnboardingChecklist;
  BOOL _isPresentFromNuxProfileCompletion;
  double _viewDidAppearTime;
  double _ttiTime;
  unsigned long long _initialTotalDirtyBytes;
  unsigned long long _contentDidAppearTotalDirtyBytes;
  unsigned long long _initialEvictableMemoryBytes;
  unsigned long long _contentDidAppearEvictableMemoryBytes;
  UIBarButtonItem *_doneButton;
  IG4BFlowNavDelegateWrapper *_navDelegateWrapper;
  IGProDiverseOwnedBusinessInfo *_diverseOwnedBusinessInfo;
  IGProDiverseOwnedBusinessInfoDataSource *_diverseOwnedBusinessInfoDataSource;
  unsigned long long _profileLockOptions;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSArray *textFields;
@property (copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) IG4BLogger *logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGEditProfileViewControllerTypeDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGEditProfileViewControllerValidationResponseDelegate> *validationResponseDelegate;
@property (weak, nonatomic) NSObject<IGEditProfileViewControllerTypeLoggingDelegate> *loggingDelegate;

/* instance methods */
- (void)dealloc;
- (id)initWithUserSession:(id)session startTime:(id)time isPresented:(BOOL)presented shouldAutoFocusFirstEmptyBusinessProfileField:(BOOL)field shouldUseZeroEdgeInsets:(BOOL)insets shouldOnlyShowPublicInformation:(BOOL)information isPresentedInOnboardingChecklist:(BOOL)checklist isPresentFromNuxProfileCompletion:(BOOL)completion;
- (long long)preferredTabBarBehavior;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (void)onCancelModal;
- (void)_dismissToPresentingViewController;
- (void)_confirmPageButtonTapped;
- (void)confirmEmailDismissedWithConfirmationType:(long long)type forEmail:(id)email;
- (void)presentFieldUpdateErrorToastWithMessage:(id)message reason:(id)reason;
- (void)presentDiscardChangesDialogueWithCompletion:(id /* block */)completion;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)_updateConnectRelatedAccountsText:(id)text toggledRelatedAccounts:(BOOL)accounts;
- (void)editProfileGenderViewController:(id)controller didUpdateGender:(long long)gender customGenderString:(id)string;
- (void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)number withResponse:(id)response;
- (void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)resent;
- (void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)number;
- (void)didCancelEditBusinessProfileViewController:(id)controller;
- (void)didSaveEditBusinessProfileViewController:(id)controller turnedOnBookingFromOff:(BOOL)off;
- (void)changePhoneNumberViewController:(id)controller doneEditingWithCountryNumber:(id)number phoneNumber:(id)number contactPreference:(unsigned long long)preference;
- (void)changePhoneNumberViewController:(id)controller didChangeTwoFactorPhoneNumber:(id)number;
- (void)changePhonenumberViewController:(id)controller willPresentCountryCodeViewController:(id)controller;
- (void)changePhonenumberViewController:(id)controller didSelectCountryCode:(id)code;
- (void)profileDisplayOptionsViewControllerDidSelectDisplayOption:(id)option;
- (void)categorySelectionViewController:(id)controller didCompleteWithResultModel:(id)model;
- (void)categorySelectionViewControllerDidDimiss:(id)dimiss;
- (void)businessFacebookConnectPageFlow:(id)flow didFailWithError:(id)error;
- (void)businessFacebookConnectPageFlow:(id)flow didFinishAction:(long long)action;
- (void)conversionFlowWillDismiss;
- (void)didUpdateCreatorCollaborationSettingWithToggleStatus:(BOOL)status;
- (BOOL)textFieldShouldBeginEditing:(id)editing;
- (void)_onDismissNameWebView;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)textFieldDidChange:(id)change;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)editProfileBioViewController:(id)controller didSaveProfileBio:(id)bio profileLinks:(id)links;
- (void)musicOnProfileViewControllerDelegateDidTapDone:(id)done musicOnProfileInfo:(id)info;
- (void)editProfileNameViewController:(id)controller didSaveProfileNameWithDict:(id)dict;
- (void)editProfileUsernameViewController:(id)controller didSaveUsernameWithDict:(id)dict;
- (id)editProfileLinksViewController:(id)controller;
- (void)updateBioLinksTextField:(id)field;
- (void)editChatsViewControllerDidSaveChannelsWithDict:(id)dict;
- (void)growingTextViewDidBeginEditing:(id)editing;
- (void)growingTextViewDidChange:(id)change;
- (void)growingTextView:(id)view willChangeHeight:(double)height;
- (void)growingTextViewDidEndEditing:(id)editing;
- (BOOL)growingTextViewShouldReturn:(id)return;
- (BOOL)growingTextView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)growingTextView:(id)view didChangeHeight:(double)height;
- (void)viewControllerDidUpdatePurchaseOptions:(id)options;
- (id)editProfileRequestParameters;
- (void)validateAndSubmit;
- (void)_fetchUserData;
- (id)analyticsExtras;
- (void)updateLoadingSpinnerWithIsLoading:(BOOL)loading;
- (void)_logNMEBenefitsEventOfType:(int)type;
- (void)showIdentityManagementPhotoReminderWithCompletionHandler:(id /* block */)handler photoAction:(long long)action;
- (void)didPresentBloksPhotoSyncController;
- (void)businessFacebookConnectPageFlowDidDismiss:(id)dismiss;
- (void)userWasUpdated:(id)updated;
- (void)launchVerifiedProfileEditor;
@end

#endif /* IGEditProfileViewController_h */
