//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC12IGDuplexFeed26IGDuplexFeedViewController_h
#define _TtC12IGDuplexFeed26IGDuplexFeedViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGMainFeedViewControllerType-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class UIViewController;
@protocol IGListSectionController<IGStoryTraySectionControlling;

@interface _TtC12IGDuplexFeed26IGDuplexFeedViewController : IGViewController<UICollectionViewDelegate, IGMainFeedViewControllerType, UIGestureRecognizerDelegate> { // (Swift)
  /* instance variables */
   userSession;
   dataSource;
   headerView;
   viewControllerDataSource;
   interactiveAnimatorIsAnimatingTowardsImmersion;
   collectionView;
   flowLayout;
   interactiveAnimator;
   currentIndex;
   activeViewController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) IGListSectionController<IGStoryTraySectionControlling> *storyTraySectionController;
@property (nonatomic) unsigned long long activityBadgeCount;
@property (nonatomic) BOOL allowPostAnother;
@property (nonatomic, readonly) BOOL isSecondary;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredBarAppearance;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)scrollToTopAnimated:(BOOL)animated;
- (void)scrollTrayToFrontAnimated:(BOOL)animated;
- (id)directBarButton;
- (id)activityBarButton;
- (id)directBarButtonDestinationView;
- (void)reloadStoryTray;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })navigationHeaderFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })navigationHeaderRightNavigationButtonFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })navigationHeaderSecondaryRightNavigationButtonFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activityButtonFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchButtonFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })createButtonFrame;
- (void)handleTapOnHomeTabWithHoistedMediaID:(id)id;
- (BOOL)isVisible;
- (void)handleTapOnHomeTabWithResetInjectedMedias:(BOOL)medias;
- (void)addInjectedMediasToQueue:(id)queue;
- (void)removeInjectedMedia:(id)media;
- (BOOL)isNavigationBarFullyShowing;
- (id)currentVisibleMediaID;
- (BOOL)isShowingFullScreenBrowserPeek;
- (void)handleSIFUHideActionForModel:(id)model;
- (void)tryShowQuickSnapPeek;
- (void)shouldExecuteBloksActionOnAppear:(id /* block */)appear;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC12IGDuplexFeed26IGDuplexFeedViewController_h */
