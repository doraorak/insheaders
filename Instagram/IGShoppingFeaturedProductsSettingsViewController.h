//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingFeaturedProductsSettingsViewController_h
#define IGShoppingFeaturedProductsSettingsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGScopedListener-Protocol.h"
#include "IGShoppingFeaturedProductsSellerManagementRequestResponse.h"
#include "IGShoppingFeaturedProductsSettingsEmptyStateView.h"
#include "IGShoppingMediaGridViewController.h"
#include "IGShoppingSessionTracking-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class IGRefreshControl, IGSessionTracker, IGUserSession, NSArray, NSString, UIActivityIndicatorView, UICollectionView, UITableView, UITextView;

@interface IGShoppingFeaturedProductsSettingsViewController : IGViewController<UITableViewDataSource, UITableViewDelegate, UICollectionViewDelegate, IGShoppingSessionTracking, IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSArray *_rowData;
  IGShoppingFeaturedProductsSellerManagementRequestResponse *_settingsInfo;
  IGRefreshControl *_refreshControl;
  NSString *_priorModule;
  UITableView *_tableView;
  UITextView *_sectionHeaderView;
  IGShoppingMediaGridViewController *_mediaGridViewController;
  IGShoppingFeaturedProductsSettingsEmptyStateView *_emptyStateView;
  UIActivityIndicatorView *_spinnerView;
  UICollectionView *_collectionView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;

/* instance methods */
- (id)initWithUserSession:(id)session priorModule:(id)module;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)scrollViewDidScroll:(id)scroll;
- (void)permissionStatusDidUpdatePermission;
- (void)shoppingFeaturedProductsSettingsEmptyStateViewDidTapViewTaggedPosts:(id)posts;
- (void)shoppingFeaturedProductsSettingsEmptyStateView:(id)view didTapLearnMoreLink:(id)link;
- (void)_refreshControlTriggered:(id)triggered;
@end

#endif /* IGShoppingFeaturedProductsSettingsViewController_h */
