//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDynamicPageViewController_h
#define IGDynamicPageViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGDynamicPageCollectionViewLayout.h"
#include "IGDynamicPageObjectReusePool.h"
#include "IGDynamicPageViewControllerDataSource-Protocol.h"
#include "IGDynamicPageViewControllerDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListDiffable-Protocol.h"
#include "IGScrollViewListener-Protocol.h"

@class IGListAdapter, IGScrollViewAnnouncer, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGDynamicPageViewController : UIViewController<IGScrollViewListener, IGListAdapterDataSource> {
  /* instance variables */
  IGDynamicPageObjectReusePool *_viewControllerReusePool;
  IGDynamicPageObjectReusePool *_placeholderViewReusePool;
  Class _collectionViewClass;
  IGDynamicPageCollectionViewLayout *_collectionViewLayout;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  IGListAdapter *_listAdapter;
  double _collectionViewPageSpacing;
  IGUserSession *_userSession;
  NSArray *_pageIdentifiers;
  NSObject<IGListDiffable> *_selectedPageIdentifier;
}

@property (nonatomic) BOOL animatingContentOffset;
@property (readonly, copy, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) BOOL decelerating;
@property (nonatomic) BOOL bounces;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) NSObject<IGDynamicPageViewControllerDataSource> *dataSource;
@property (weak, nonatomic) NSObject<IGDynamicPageViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithUserSession:(id)session collectionViewClass:(Class)class;
- (id)initWithUserSession:(id)session collectionViewClass:(Class)class pageSpacing:(double)spacing;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (BOOL)isDecelerating;
- (id)dequeueViewControllerForPageWithIdentifier:(id)identifier;
- (void)recycleViewController:(id)controller;
- (BOOL)canDisplayPlaceholderViewForPageWithIdentifier:(id)identifier;
- (id)dequeuePlaceholderViewForPageWithIdentifier:(id)identifier;
- (void)recyclePlaceholderView:(id)view;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)dynamicPageSectionControllerWillBeDisplayed:(id)displayed;
- (void)dynamicPageSectionControllerDidEndBeingDisplayed:(id)displayed;
- (void)dynamicPageSectionController:(id)controller willChangeToRepresentationStyle:(long long)style previousRepresentationStyle:(long long)style;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndScrolling:(id)scrolling;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (BOOL)isAnimatingContentOffset;
@end

#endif /* IGDynamicPageViewController_h */
