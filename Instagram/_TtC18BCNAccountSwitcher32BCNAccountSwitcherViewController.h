//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18BCNAccountSwitcher32BCNAccountSwitcherViewController_h
#define _TtC18BCNAccountSwitcher32BCNAccountSwitcherViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@interface _TtC18BCNAccountSwitcher32BCNAccountSwitcherViewController : IGViewController<IGGestureHandler, IGListAdapterDataSource, UICollectionViewDelegate> { // (Swift)
  /* instance variables */
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_userModels;
   userSession;
   sectionSeparatorModel;
   footerSeparatorModel;
   addAccountModel;
   kHorizontalContentInset;
   bottomSpacing;
   delegate;
   $__lazy_storage_$_maxNumberOfAccounts;
   $__lazy_storage_$_useUpdatedAddProfileButton;
   $__lazy_storage_$_badgeManager;
   $__lazy_storage_$_analyticsLogger;
   didLogImpression;
   entryPoint;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didUnhighlightItemAtIndexPath:(id)path;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC18BCNAccountSwitcher32BCNAccountSwitcherViewController_h */