//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationPlatformProductPayoutManagementViewController_h
#define IGMonetizationPlatformProductPayoutManagementViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGMonetizationPlatformProductPayoutManagementDataSource.h"
#include "IGMonetizationPlatformProductPayoutManagementViewModel.h"
#include "IGPayoutHubEditScreenLogging.h"
#include "IGRadioCellListModelSectionControllerDelegate-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGUserSession, NSString, UIActivityIndicatorView, UICollectionView;
@protocol IGMonetizationPlatformProductPayoutManagementViewControllerDelegate;

@interface IGMonetizationPlatformProductPayoutManagementViewController : IGViewController<IGListAdapterDataSource, IGRadioCellListModelSectionControllerDelegate, UICollectionViewDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMonetizationPlatformProductPayoutManagementDataSource *_dataSource;
  IGMonetizationPlatformProductPayoutManagementViewModel *_viewModel;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  UIActivityIndicatorView *_loadingIndicatorView;
  BOOL _shouldPresentDialogAfterChallengeClear;
  long long _origin;
  IGPayoutHubEditScreenLogging *_logger;
}

@property (weak, nonatomic) NSObject<IGMonetizationPlatformProductPayoutManagementViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session dataSource:(id)source;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)IGRadioCellListModelSectionControllerDidSelectItemAtSectionIdentifier:(id)identifier index:(long long)index;
- (void)actionRowSectionControllerDidTapActionButton:(id)button viewModel:(id)model;
- (void)payoutOnboardingPayoutMethodViewControllerDidTapNext:(id)next payoutMethod:(long long)method onboardingTypes:(id)types subtypes:(id)subtypes;
- (void)checkpointDidTerminateWithType:(id)type isCleared:(BOOL)cleared;
- (void)_dismiss;
- (void)_save;
@end

#endif /* IGMonetizationPlatformProductPayoutManagementViewController_h */
