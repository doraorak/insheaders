//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationPlatformExpandablePayoutInfoViewController_h
#define IGMonetizationPlatformExpandablePayoutInfoViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGImageTitleSectionControllerDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGMonetizationPlatformExpandablePayoutInfoDataSource.h"
#include "IGMonetizationPlatformExpandablePayoutInfoViewModel.h"
#include "IGPayoutHubEditScreenLogging.h"
#include "IGTextButtonSectionControllerDelegate-Protocol.h"
#include "IGTitleAndActionSectionControllerDelegate-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGUserSession, NSString, UICollectionView;
@protocol IGMonetizationPlatformExpandablePayoutInfoViewControllerDelegate;

@interface IGMonetizationPlatformExpandablePayoutInfoViewController : IGViewController<IGListAdapterDataSource, UICollectionViewDelegate, IGImageTitleSectionControllerDelegate, IGTitleAndActionSectionControllerDelegate, IGTextButtonSectionControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMonetizationPlatformExpandablePayoutInfoDataSource *_dataSource;
  IGMonetizationPlatformExpandablePayoutInfoViewModel *_viewModel;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGPayoutHubEditScreenLogging *_editLogger;
  NSString *_uplSessionId;
}

@property (weak, nonatomic) NSObject<IGMonetizationPlatformExpandablePayoutInfoViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session dataSource:(id)source uplSessionId:(id)id;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)imageTitleSectionController:(id)controller didSelectActionForViewModel:(id)model;
- (void)imageTitleSectionController:(id)controller didTapOnString:(id)string URL:(id)url;
- (void)multiLineViewSectionControllerDidSelectSectionController:(id)controller viewModelCollection:(id)collection;
- (void)sectionController:(id)controller didTapButton:(id)button;
- (void)payoutOnboardingBusinessInfoViewControllerDelegateDidTapNextWithBusinessInfo:(id)info;
- (void)payoutConfirmLegalOwnerViewControllerDidTapNextWithOwnerInfo:(id)info;
- (void)payoutOnboardingPayoutMethodViewControllerDidTapNext:(id)next payoutMethod:(long long)method onboardingTypes:(id)types subtypes:(id)subtypes;
- (void)monetizationPlatformProductPayoutManagementViewControllerDidUpdatePayoutInfo:(id)info productType:(long long)type;
- (void)titleAndActionSectionController:(id)controller didSelectActionForViewModel:(id)model;
- (unsigned long long)traitForTitleAndActionTextLabel:(id)label;
- (void)notificationViewControllerDidUpdate:(id)update;
- (id)notificationViewControllerGetFEID:(id)feid;
- (unsigned long long)notificationViewControllerGetViewName:(id)name;
- (id)notificationViewControllerGetSubtypesToFilter;
@end

#endif /* IGMonetizationPlatformExpandablePayoutInfoViewController_h */