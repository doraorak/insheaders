//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC6IGOpal24IGOpalFeedViewController_h
#define _TtC6IGOpal24IGOpalFeedViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDynamicPageChildViewControllerDelegate-Protocol.h"

@interface _TtC6IGOpal24IGOpalFeedViewController : IGViewController { // (Swift)
  /* instance variables */
   delegate;
   hideContent;
   userSession;
   user;
   feedSourcesManager;
   sessionTracker;
   tabType;
   analyticsModule;
   feedItemToggleComponents;
   gridLayoutConfiguration;
   shimmeringMediaGridPattern;
   $__lazy_storage_$_profileFeedSource;
   $__lazy_storage_$_feedStarterKit;
   $__lazy_storage_$_previewHandler;
}

@property (nonatomic) BOOL disablePullToRefresh;
@property (nonatomic, weak) NSObject<IGDynamicPageChildViewControllerDelegate> *dynamicPageChildDelegate;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;
@property (nonatomic, readonly) BOOL disableNavigationEvent;

/* instance methods */
- (void)dealloc;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)controller;
- (void)viewDidAppear:(BOOL)appear;
- (void)pullToRefreshControlValueChanged:(id)changed;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC6IGOpal24IGOpalFeedViewController_h */
