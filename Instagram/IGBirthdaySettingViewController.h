//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBirthdaySettingViewController_h
#define IGBirthdaySettingViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGBirthdayLogger.h"
#include "IGBirthdayNetworkHelper.h"
#include "IGBirthdaySelfieUploader.h"
#include "IGCreationViewControllerNavigationDelegate-Protocol.h"
#include "IGDSListSectionControllerDataSource-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGStoryAudienceSelectionViewControllerDelegate-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGKeyframeAnimationViewController, IGListAdapter, IGUserSession, NSArray, NSString, UIBarButtonItem, UICollectionView, UIImage, UIView;

@interface IGBirthdaySettingViewController : IGViewController<IGListAdapterDataSource, IGStoryAudienceSelectionViewControllerDelegate, IGDSListSectionControllerDataSource, IGCreationViewControllerNavigationDelegate, IGGestureHandler, UICollectionViewDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  UICollectionView *_audienceCollectionView;
  IGListAdapter *_audienceListAdapter;
  NSArray *_audienceViewModels;
  UICollectionView *_profilePictureCollectionView;
  IGListAdapter *_profilePictureListAdapter;
  NSArray *_profilePictureViewModels;
  UIBarButtonItem *_cancelButton;
  IGBottomButtonsView *_footerButton;
  long long _audienceType;
  long long _pictureType;
  long long _newVisibilityType;
  UIImage *_selfieImage;
  NSString *_uploadedSelfieUploadID;
  IGBirthdayNetworkHelper *_networkHelper;
  IGBirthdaySelfieUploader *_selfieUploader;
  id /* block */ _successCompletion;
  id /* block */ _failureCompletion;
  IGKeyframeAnimationViewController *_fullscreenAnimationViewController;
  UIView *_fullscreenConfettiAnimationView;
  IGBirthdayLogger *_birthdayLogger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_dismissWithoutOptIn;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)birthdaySettingAudienceSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)audienceSelectionViewControllerDidTapCreateSharedList:(id)list;
- (void)audienceSelectionViewControllerDidSuccessfullyCreateSharedList:(id)list sharedListID:(id)id;
- (void)audienceSelectionViewControllerDidFailToCreateSharedList:(id)list;
- (void)audienceSelectionViewControllerDidTapBackButton:(id)button;
- (void)audienceSelectionViewControllerDidTapDoneButton:(id)button;
- (void)audienceSelectionViewControllerDidTapShare:(id)share privateStoryList:(id)list;
- (void)audienceSelectionViewControllerDidTapShare:(id)share audienceSelectionType:(long long)type selectedMembers:(id)members;
- (void)audienceSelectionViewControllerWillDismissWithMembers:(id)members andExitPoint:(long long)point;
- (void)audienceSelectionViewControllerDidTapDeletePrivateStoryList:(id)list privateStoryList:(id)list;
- (void)audienceSelectionViewControllerDidCreatePrivateStoryList:(id)list privateStoryList:(id)list;
- (void)creationViewController:(id)controller didEnterState:(long long)state;
- (void)creationViewController:(id)controller willShareToDirectRecipients:(id)recipients;
- (void)creationViewController:(id)controller didFinishWithExitPoint:(long long)point shouldAnimateTransition:(BOOL)transition isNavigationHandledByPresenter:(BOOL)presenter;
- (void)creationViewControllerWillDismiss:(id)dismiss;
- (void)creationViewController:(id)controller didDismissWithExitPoint:(long long)point destination:(long long)destination storySendTarget:(long long)target toDirectRecipients:(id)recipients image:(id)image storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids completion:(id /* block */)completion;
- (id)listSectionController:(id)controller headerForObject:(id)object;
- (id)listSectionController:(id)controller footerForObject:(id)object;
- (id)listSectionController:(id)controller viewModelsForObject:(id)object;
- (void)birthdaySelfieUploader:(id)uploader didFinishUploadWithUploadID:(id)id;
- (void)birthdaySelfieUploader:(id)uploader didFailUploadForUploadID:(id)id;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGBirthdaySettingViewController_h */
