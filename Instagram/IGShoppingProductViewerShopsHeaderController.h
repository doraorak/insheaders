//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductViewerShopsHeaderController_h
#define IGShoppingProductViewerShopsHeaderController_h
@import Foundation;

#include "IGShoppingCartBarButtonItem.h"
#include "IGShoppingMoreBarButtonItem.h"
#include "IGShoppingProfileShopTitleButton.h"
#include "IGShoppingShopsNavigationMenuButtonItem.h"
#include "NSObject-Protocol.h"

@class BKContext, BKLispyExpression, IGFullsizeNavigationTitleViewContainerView, IGSessionTracker, IGUser, IGUserSession, NSArray, NSString, UIViewController;
@protocol IGShoppingProductViewerHeaderControllingDelegate;

@interface IGShoppingProductViewerShopsHeaderController : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGUser *_merchant;
  long long _headerStyle;
  IGFullsizeNavigationTitleViewContainerView *_titleView;
  UIViewController *_hostingViewController;
  IGShoppingCartBarButtonItem *_bagButton;
  BKContext *_bloksContext;
  IGShoppingShopsNavigationMenuButtonItem *_menuButton;
  BKLispyExpression *_menuActionExpression;
  NSString *_module;
  NSString *_priorModule;
  NSString *_priorSubmodule;
  IGSessionTracker *_sessionTracker;
  BOOL _isTitleLeftAligned;
  NSString *_shopLinkedCreatorId;
  NSString *_storefrontAttributionUsername;
  IGShoppingProfileShopTitleButton *_titleButton;
  NSString *_sellerBadgeTitle;
  IGShoppingMoreBarButtonItem *_moreButton;
}

@property (readonly, nonatomic) NSArray *accessibilityElements;
@property (weak, nonatomic) NSObject<IGShoppingProductViewerHeaderControllingDelegate> *delegate;
@property (nonatomic) BOOL moreButtonEnabled;
@property (nonatomic) BOOL bagButtonEnabled;
@property (nonatomic) long long dismissIconType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } headerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session merchant:(id)merchant headerStyle:(long long)style hostingViewController:(id)controller module:(id)module priorModule:(id)module priorSubmodule:(id)submodule sessionTracker:(id)tracker isNavBarTitleLeftAligned:(BOOL)aligned shopLinkedCreatorId:(id)id storefrontAttributionUsername:(id)username;
- (id)initWithUserSession:(id)session merchant:(id)merchant headerStyle:(long long)style hostingViewController:(id)controller module:(id)module priorModule:(id)module priorSubmodule:(id)submodule sessionTracker:(id)tracker;
- (long long)preferredStatusBarAnimation;
- (void)_didTapBag;
- (void)_didTapMenu;
- (void)_didTapMore;
@end

#endif /* IGShoppingProductViewerShopsHeaderController_h */
