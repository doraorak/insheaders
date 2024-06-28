//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingBrandSelectionViewController_h
#define IGShoppingBrandSelectionViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "IGShoppingBrandSelectionTaggingContext.h"
#include "IGShoppingBrandSelectionViewControllerDelegate-Protocol.h"
#include "IGShoppingProductSourceSelectionConfiguration.h"
#include "IGTextViewSectionControllerDelegate-Protocol.h"

@class IGInfoView, IGListAdapter, IGScrollViewAnnouncer, IGShoppingUserFeedDataModel, IGStatefulNetworker, IGUserSession, NSString, UICollectionView;
@protocol IGShoppingProductSourceLogger;

@interface IGShoppingBrandSelectionViewController : IGViewController<IGScrollViewListener, IGListAdapterDataSource, IGSearchBarDelegate, IGTextViewSectionControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _isVCInPageTab;
  unsigned long long _context;
  IGShoppingBrandSelectionTaggingContext *_taggingContext;
  IGShoppingProductSourceSelectionConfiguration *_productSourceSelectionConfig;
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  IGStatefulNetworker *_networker;
  IGShoppingUserFeedDataModel *_dataModel;
  IGInfoView *_infoView;
  NSString *_query;
  NSObject<IGShoppingProductSourceLogger> *_logger;
}

@property (weak, nonatomic) NSObject<IGShoppingBrandSelectionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session isVCInPageTab:(BOOL)tab taggingContext:(id)context context:(unsigned long long)context priorModule:(id)module productSourceSelectionConfig:(id)config;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (long long)preferredTabBarBehavior;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)infoViewWasTapped:(id)tapped;
- (void)infoViewTextButtonTapped:(id)tapped;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)shoppingBrandSelectionSectionController:(id)controller didSelectUser:(id)user;
- (void)didSelectTextViewSectionController:(id)controller;
- (void)textViewSectionController:(id)controller didTapOnString:(id)string URL:(id)url;
- (void)textViewSectionController:(id)controller didLongTapOnString:(id)string URL:(id)url;
- (void)textViewSectionController:(id)controller didTapOnNonLinkedString:(id)string touchEvent:(unsigned long long)event;
- (void)_cancelPressed:(id)pressed;
@end

#endif /* IGShoppingBrandSelectionViewController_h */
