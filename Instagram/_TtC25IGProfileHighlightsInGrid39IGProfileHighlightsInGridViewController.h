//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGProfileHighlightsInGrid39IGProfileHighlightsInGridViewController_h
#define _TtC25IGProfileHighlightsInGrid39IGProfileHighlightsInGridViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDynamicPageChildViewControllerDelegate-Protocol.h"
#include "IGProfileTabViewController-Protocol.h"
#include "IGProfileTabViewControllerDelegate-Protocol.h"

@interface _TtC25IGProfileHighlightsInGrid39IGProfileHighlightsInGridViewController : IGViewController<IGProfileTabViewController> { // (Swift)
  /* instance variables */
   userSession;
   dataSource;
   highlightsDataSource;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_internalScrollViewAnnouncer;
   $__lazy_storage_$_internalRefreshControl;
}

@property (nonatomic, weak) NSObject<IGProfileTabViewControllerDelegate> *profileTabDelegate;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;
@property (nonatomic) BOOL disablePullToRefresh;
@property (nonatomic, retain) NSObject<IGDynamicPageChildViewControllerDelegate> *dynamicPageChildDelegate;

/* instance methods */
- (id)initWithUserSession:(id)session highlightsDataSource:(id)source;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateContentInsets;
- (void)setRefreshControlBackgroundColor:(id)color;
- (id)refreshControl;
- (void)parentWillDisappearWithIsBeingRemovedFromStack:(BOOL)stack;
- (id)scrollView;
- (id)scrollViewAnnouncer;
- (void)prepareForReuse;
- (void)didBecomeSelectedPageInDynamicPageViewController;
- (void)willResignSelectedPageInDynamicPageViewController;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC25IGProfileHighlightsInGrid39IGProfileHighlightsInGridViewController_h */