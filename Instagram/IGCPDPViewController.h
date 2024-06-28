//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCPDPViewController_h
#define IGCPDPViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGALLogContextModelProvider-Protocol.h"
#include "IGCPDPContext.h"
#include "IGPerformanceNavigationAppearListener-Protocol.h"
#include "IGScreenshotObserverDelegate-Protocol.h"
#include "IGShoppingBloksNavBarExtensionViewControlling-Protocol.h"
#include "IGShoppingPDPMoreButtonController.h"
#include "IGShoppingPDPPerformanceLogger.h"
#include "IGShoppingPDPPresentationContext.h"
#include "IGShoppingPDPSourceMedia.h"
#include "IGShoppingSessionTracking-Protocol.h"
#include "IGTransitionZoomToCapable-Protocol.h"

@class BKBloksScriptValue, BKLispyEnvironment, IGAPIProductDetailsProductItemDict, IGActionableConfirmationToastController, IGMedia, IGPhoto, IGSessionTracker, IGShoppingAdMetadata, IGShoppingConsumptionAnalyticsContext, IGShoppingConsumptionFeedItemLogger, IGShoppingNavigationAnalyticsContext, IGUserSession, IGViewController, NSDictionary, NSString, UIView;

@interface IGCPDPViewController : IGViewController<IGALLogContextModelProvider, IGPerformanceNavigationAppearListener, IGShoppingBloksNavBarExtensionViewControlling, IGShoppingSessionTracking, IGScreenshotObserverDelegate, IGTransitionZoomToCapable> {
  /* instance variables */
  IGViewController *_bloksVC;
  IGAPIProductDetailsProductItemDict *_initialProductItem;
  IGAPIProductDetailsProductItemDict *_selectedProductItem;
  IGUserSession *_session;
  IGShoppingAdMetadata *_adMetadata;
  IGShoppingPDPPerformanceLogger *_performanceLogger;
  IGActionableConfirmationToastController *_toastController;
  IGShoppingNavigationAnalyticsContext *_navigationInfo;
  BKBloksScriptValue *_openNavMenuCallback;
  BOOL _shoppingCartEnabled;
  IGShoppingPDPMoreButtonController *_moreButtonController;
  IGMedia *_media;
  IGShoppingPDPSourceMedia *_pinnedMedia;
  IGCPDPContext *_cpdpContext;
  IGPhoto *_mainProductImage;
  IGShoppingConsumptionAnalyticsContext *_consumptionLoggingInfo;
  IGShoppingPDPPresentationContext *_presentationContext;
  UIView *_transitionView;
  IGShoppingConsumptionFeedItemLogger *_logger;
  NSString *_checkoutSessionId;
  BKLispyEnvironment *_environment;
  double _startNavigationTime;
  BOOL _justShowedAddedToCartTooltip;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property (readonly, nonatomic) NSDictionary *magicMoveSubviews;

/* instance methods */
- (id)initWithProductItem:(id)item media:(id)media adMetadata:(id)metadata sessionTracker:(id)tracker performanceLogger:(id)logger presentationContext:(id)context priorModule:(id)module priorSubmodule:(id)submodule loggingExtras:(id)extras consumptionLoggingInfo:(id)info session:(id)session openNavMenuCallback:(id)callback environment:(id)environment;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)_buildCPDPVCEntryTapScreenQuery:(id)query hidesBottomBar:(BOOL)bar additionalObjectSet:(id)set;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
- (id)navigationItem;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (long long)preferredStatusBarStyle;
- (void)shoppingProductViewerHeaderControllerDidTapBackButton:(id)button;
- (void)shoppingProductViewerHeaderControllerDidTapMoreButton:(id)button;
- (void)shoppingProductViewerHeaderControllerDidTapBagButton:(id)button;
- (void)shoppingProductViewerHeaderControllerDidTapTitleButton:(id)button;
- (void)shoppingProductViewerHeaderController:(id)controller didUpdateHeaderStyle:(long long)style animated:(BOOL)animated;
- (void)moreButtonControllerDidRequestInvalidateNetworkCache:(id)cache;
- (void)moreButtonControllerDidTapProductNotificationsAction:(id)action productItem:(id)item;
- (void)moreButtonControllerLogProductNotificationsMenuItemForProductPk:(id)pk;
- (void)shoppingPDPDefaultProductVariantSelectionController:(id)controller didCompleteProductItemSelection:(id)selection;
- (void)productItemEdited;
- (void)productItemDeleted;
- (void)productItemAdded;
- (void)markViewInteractable;
- (void)markViewControllerInit;
- (void)markViewDidLoad;
- (void)markViewWillAppearWithAnalyticsModule:(id)module;
- (void)markViewDidAppear;
- (void)markViewWillDisappear;
- (id)trackingModel;
- (id)analyticsExtras;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomToTransition;
- (id)transitionZoomViewToItem:(id)item withZoomContext:(id)context;
- (id)transitionZoomItemOverrideOnExit;
- (void)didCompleteForwardZoomTransition;
- (void)prepareForwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (BOOL)shouldReceiveNavBarUpdates;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)taken;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)capture event:(long long)event;
@end

#endif /* IGCPDPViewController_h */