//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProProfileDisplayOptionsViewController_h
#define IGProProfileDisplayOptionsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDismissableViewController-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGProProfileDisplayOptionsProfilePreviewModel.h"
#include "IGProProfileVisibilityCellViewModel.h"
#include "IGProViewControllerLoadingAware-Protocol.h"
#include "IGProfileLayoutMetrics-Protocol.h"
#include "IGTextViewSectionControllerDelegate-Protocol.h"

@class IG4BLogger, IGBusinessConversionFacebookPageCategory, IGListAdapter, IGProConversionNUXConfigNetworker, IGProHeaderViewModel, IGUser, IGUserSession, NSString, UICollectionView;
@protocol IGProProfileDisplayOptionsViewControllerDelegate;

@interface IGProProfileDisplayOptionsViewController : IGViewController<IGProViewControllerLoadingAware, IGDismissableViewController, IGListAdapterDataSource, IGTextViewSectionControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  IG4BLogger *_logger;
  NSObject<IGProProfileDisplayOptionsViewControllerDelegate> *_delegate;
  BOOL _defaultShouldShowCategory;
  BOOL _defaultShouldShowPublicContacts;
  BOOL _shouldShowCategory;
  BOOL _shouldShowPublicContacts;
  long long _defaultProfilePromotionStatus;
  long long _currentProfilePromotionStatus;
  BOOL _didCancelDisplayOptionsChange;
  NSString *_navigationTitle;
  NSString *_headerViewTitle;
  NSObject<IGProfileLayoutMetrics> *_layoutMetrics;
  IGBusinessConversionFacebookPageCategory *_category;
  IGUser *_mockedUserForPreview;
  IGProHeaderViewModel *_headerViewModel;
  IGProProfileVisibilityCellViewModel *_displayCategoryViewModel;
  IGProProfileVisibilityCellViewModel *_displayContactViewModel;
  IGProProfileDisplayOptionsProfilePreviewModel *_previewModel;
  IGProConversionNUXConfigNetworker *_nuxConfigNetworker;
  BOOL _shouldShowPublicDisclosure;
  BOOL _shouldFetchPublicDisclosureEligibility;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate logger:(id)logger navigationTitle:(id)title headerViewTitle:(id)title category:(id)category;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)profileVisibilitySectionController:(id)controller shouldShowProfileInfo:(BOOL)info profileInfoSection:(long long)section shouldShowPublicDisclosure:(BOOL)disclosure;
- (void)_nextButtonTapped;
- (void)updateToLoadingState:(BOOL)state animated:(BOOL)animated;
- (void)didDismissViewController;
- (void)didCancelEditBusinessProfileViewController:(id)controller;
- (void)didSaveEditBusinessProfileViewController:(id)controller turnedOnBookingFromOff:(BOOL)off;
- (void)switchViewSectionController:(id)controller didToggleSwitch:(BOOL)switch;
- (void)textViewSectionController:(id)controller didTapOnString:(id)string URL:(id)url;
- (void)didSelectTextViewSectionController:(id)controller;
- (void)textViewSectionController:(id)controller didLongTapOnString:(id)string URL:(id)url;
- (void)textViewSectionController:(id)controller didTapOnNonLinkedString:(id)string touchEvent:(unsigned long long)event;
@end

#endif /* IGProProfileDisplayOptionsViewController_h */
