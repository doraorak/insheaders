//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteAudienceAddressSearchViewController_h
#define IGPromoteAudienceAddressSearchViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPromoteAudienceLocationTypeaheadFetcher.h"
#include "IGPromoteTitleSubtitleViewListModel.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGSearchBar, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGPromoteAudienceAddressSearchViewControllerDelegate;

@interface IGPromoteAudienceAddressSearchViewController : IGPromoteViewController<IGSearchBarDelegate, IGListAdapterDataSource, UICollectionViewDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSearchBar *_searchBar;
  UICollectionView *_resultsCollectionView;
  IGListAdapter *_adapter;
  NSArray *_searchResults;
  IGPromoteTitleSubtitleViewListModel *_resultViewListModel;
  IGPromoteAudienceLocationTypeaheadFetcher *_typeaheadFetcher;
  IGBoostPostLogger *_logger;
  long long _audienceFlowType;
  BOOL _canUseBusinessUser;
}

@property (weak, nonatomic) NSObject<IGPromoteAudienceAddressSearchViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session audienceFlowType:(long long)type canUseBusinessUser:(BOOL)user logger:(id)logger;
- (void)viewDidLoad;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)_onBackBarButtonTapped;
- (void)promoteTitleSubtitleListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteTitleSubtitleListSectionController:(id)controller didTapSubtitleLink:(id)link;
@end

#endif /* IGPromoteAudienceAddressSearchViewController_h */