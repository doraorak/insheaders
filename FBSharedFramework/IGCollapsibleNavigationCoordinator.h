//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCollapsibleNavigationCoordinator_h
#define IGCollapsibleNavigationCoordinator_h
@import Foundation;

#include "IGCollapsibleNavigationBarConfig.h"
#include "IGCollapsibleNavigationTabBarConfig.h"
#include "IGDSBlurView.h"
#include "IGGradientView.h"
#include "IGScrollViewAnnouncer.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGWarmStartListener-Protocol.h"

@class NSNumber, NSString, UIImageView, UIView, UIViewPropertyAnimator;
@protocol IGCollapsibleNavigationCoordinatorDelegate, UIView<IGCollapsibleNavigationViewType, UIViewController<IGScrollableViewControllerProtocol, UIViewController<IGTabBarControllerType;

@interface IGCollapsibleNavigationCoordinator : NSObject<IGScrollViewListener, IGWarmStartListener> {
  /* instance variables */
  double _expansionVelocity;
  double _collapseBuffer;
  UIView *_hostingView;
  UIView<IGCollapsibleNavigationViewType> *_headerView;
  IGCollapsibleNavigationBarConfig *_navigationBarConfig;
  IGCollapsibleNavigationTabBarConfig *_tabBarConfig;
  UIViewController<IGTabBarControllerType> *_tabBarController;
  struct { BOOL isScrollingDown; struct CGPoint { double x; double y; } contentOffset; struct CGPoint { double x; double y; } contentOffsetOnDragBeginOrDirectionChange; struct CGPoint { double x; double y; } velocityOnDragEnd; } _scrollState;
  IGGradientView *_lazyGradientView;
  UIImageView *_lazyGradientImageView;
  long long _gradientInterfaceStyle;
  IGDSBlurView *_lazyBlurView;
  UIViewPropertyAnimator *_blurAnimator;
  double _blurAmount;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  struct { double expandedHeight; double collapsedHeight; } _navigationBarSizeCache;
  double _headerViewUpdateTimestamp;
  UIView *_lazyFloatingHeaderView;
  double _cachedPixelHeight;
  UIView *_cachedNavigationBar;
  BOOL _hasCollapsedAtLeastOnce;
  UIViewController<IGScrollableViewControllerProtocol> *_connectedViewController;
  double _percentageCollapsed;
  double _expandedTabBarHeight;
}

@property (weak, nonatomic) NSObject<IGCollapsibleNavigationCoordinatorDelegate> *delegate;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL collapsed;
@property (nonatomic) BOOL shouldAdjustScrollViewContentOffset;
@property (readonly, nonatomic) long long preferredStatusBarStyle;
@property (retain, nonatomic) NSNumber *customStatusBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHostingView:(id)view config:(id)config;
- (void)updateScrollViewAnnouncer:(id)announcer;
- (BOOL)isCollapsed;
- (double)_statusBarHeight;
- (BOOL)_enableNormalGradient;
- (BOOL)_enableStaticGradient;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_gradientFrame;
- (BOOL)_gradientForceDarkMode;
- (double)_gradientAlpha;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndScrolling:(id)scrolling;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)applicationWillWarmStartWithTimeIntervalSinceBackgrounded:(double)backgrounded;
@end

#endif /* IGCollapsibleNavigationCoordinator_h */