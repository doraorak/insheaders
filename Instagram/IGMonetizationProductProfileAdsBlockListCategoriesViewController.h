//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductProfileAdsBlockListCategoriesViewController_h
#define IGMonetizationProductProfileAdsBlockListCategoriesViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDSListSectionControllerDataSource-Protocol.h"
#include "IGDSListSectionControllerDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGMonetizationProductAdControlsBlockListDataSource.h"

@class IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGMonetizationProductProfileAdsBlockListCategoriesViewController : IGViewController<IGListAdapterDataSource, IGDSListSectionControllerDataSource, IGDSListSectionControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMonetizationProductAdControlsBlockListDataSource *_dataSource;
  NSString *_analyticsModule;
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  NSArray *_checkboxModels;
  unsigned long long _nonRevshareMaxBlockedCategories;
  unsigned long long _overlayAdsMaxBlockedCategories;
  BOOL _isProfileAdsProductType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session dataSource:(id)source analyticsModule:(id)module;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)controller;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)listSectionController:(id)controller headerForObject:(id)object;
- (id)listSectionController:(id)controller viewModelsForObject:(id)object;
- (id)listSectionController:(id)controller footerForObject:(id)object;
- (void)listSectionController:(id)controller didSelectItemAtIndex:(long long)index viewModel:(id)model;
- (void)listSectionController:(id)controller didDeselectItemAtIndex:(long long)index viewModel:(id)model;
- (void)listSectionController:(id)controller didTapLinkAtIndex:(long long)index viewModel:(id)model linkText:(id)text url:(id)url;
- (void)listSectionController:(id)controller didTapHeaderButtonWithViewModel:(id)model;
- (void)listSectionController:(id)controller didTapFooterLinkWithViewModel:(id)model linkText:(id)text url:(id)url;
- (void)listSectionController:(id)controller didSwitchSelectItemAtIndex:(long long)index value:(BOOL)value viewModel:(id)model;
@end

#endif /* IGMonetizationProductProfileAdsBlockListCategoriesViewController_h */
