//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGChainingContainerViewController_h
#define IGChainingContainerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGChainingAdsConfig.h"
#include "IGChainingAdsFeedDelegate-Protocol.h"
#include "IGChainingDynamicTitleView.h"
#include "IGChainingDynamicTwoLineNavigationTitleView.h"
#include "IGChainingFloatingSendButtonController.h"
#include "IGChainingFocusedMediaDelegate-Protocol.h"
#include "IGChainingLoggingProvider-Protocol.h"
#include "IGChainingNetworkConfig.h"
#include "IGChainingSingleContentController.h"
#include "IGChainingTitleConfig.h"
#include "IGContextualFeedNavigationPerfComponents.h"
#include "IGFeedItemChain.h"
#include "IGListDiffable-Protocol.h"
#include "NSObject-Protocol.h"

@class IGAdItemMapper, IGCollapsibleNavigationCoordinator, IGNavigationBar, IGSessionTracker, IGUserSession, NSString, UIBarButtonItem, UINavigationItem;
@protocol IGChainingContainerDelegate, IGChainingFeedViewControllerEventHandler, IGDiscoveryFeedPresentationContext;

@interface IGChainingContainerViewController : IGViewController<NSObject> {
  /* instance variables */
  IGFeedItemChain *_feedItemChain;
  IGUserSession *_userSession;
  IGSessionTracker *_exploreSessionTracker;
  long long _entryPoint;
  IGChainingNetworkConfig *_chainingNetworkConfig;
  IGContextualFeedNavigationPerfComponents *_perfComponents;
  IGChainingTitleConfig *_titleConfig;
  UIBarButtonItem *_closeButton;
  NSString *_chainingSessionID;
  NSString *_nudgeName;
  long long _nudgePosition;
  NSObject<IGListDiffable> *_focusedFeedItem;
  IGChainingDynamicTitleView *_dynamicTitleView;
  IGChainingDynamicTwoLineNavigationTitleView *_twoLineDynamicTitleView;
  IGNavigationBar *_immersiveNavigationBar;
  UINavigationItem *_immersiveNavigationItem;
  IGCollapsibleNavigationCoordinator *_immersiveNavigationCoordinator;
  NSObject<IGChainingLoggingProvider> *_loggingProvider;
  NSObject<IGChainingFeedViewControllerEventHandler> *_eventHandler;
  NSObject<IGChainingContainerDelegate> *_delegate;
  NSObject<IGChainingFocusedMediaDelegate> *_focusedMediaDelegate;
  NSObject<IGChainingAdsFeedDelegate> *_adsFeedDelegate;
  BOOL _hidePostTimestamps;
  BOOL _enablePaginatedAutoAdvance;
  BOOL _enableImmersiveScroll;
  BOOL _enablePaginatedScroll;
  struct { BOOL allowEnablingAutoAdvanceAndSwipeToSwitchVideoAfterOpeningIGTVFeedPreview; } _IGTVConfiguration;
  IGChainingAdsConfig *_chainingAdsConfig;
  IGAdItemMapper *_adItemMapper;
  IGChainingSingleContentController *_contentController;
  IGChainingFloatingSendButtonController *_floatingSendButtonController;
  NSObject<IGListDiffable> *_entryPointReferenceModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<IGDiscoveryFeedPresentationContext> *presentationContext;

/* instance methods */
- (id)initWithFeedItemChain:(id)chain userSession:(id)session focusedFeedItem:(id)item analyticsModule:(id)module exploreSessionTracker:(id)tracker entryPoint:(long long)point entryPointReferenceModel:(id)model IGTVConfiguration:(struct { BOOL x0; })igtvconfiguration hidePostTimestamps:(BOOL)timestamps enablePaginatedAutoAdvance:(BOOL)advance enableImmersiveScroll:(BOOL)scroll titleConfig:(id)config loggingProvider:(id)provider eventHandler:(id)handler delegate:(id)delegate focusedMediaDelegate:(id)delegate chainingNetworkConfig:(id)config chainingAdsConfig:(id)config adItemMapper:(id)mapper adsFeedDelegate:(id)delegate nudgeName:(id)name nudgePosition:(long long)position enablePaginatedScroll:(BOOL)scroll;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
- (long long)preferredStatusBarStyle;
- (void)setTitle:(id)title;
- (BOOL)chainingFeedViewControllerShouldShowPill:(id)pill;
- (double)chainingFeedViewControllerAdditionalBottomInsetForPill:(id)pill;
- (void)chainingFeedViewControllerDidShowPill:(id)pill;
- (void)chainingFeedViewControllerDidTapPill:(id)pill;
- (void)chainingFeedViewController:(id)controller didRetrieveChainingPaginationToken:(id)token;
- (void)chainingFeedViewController:(id)controller didUpdateScrollState:(unsigned long long)state;
- (void)chainingFeedViewController:(id)controller didUpdateFocusedMedia:(id)media forFeedItemChain:(id)chain;
- (void)chainingFeedViewController:(id)controller willDismissWithTimeSpent:(double)spent;
- (void)chainingFeedViewControllerDidSavePost;
- (void)chainingFeedViewControllerDidShareToStory;
- (void)chainingFeedViewControllerDidShareToDirect;
- (void)chainingFeedViewControllerDidObserveFocusChange:(BOOL)change;
- (BOOL)chainingFeedViewControllerCollapsibleNavEnabled;
- (double)chainingFeedCollapsibleNavTopInsetAdjustment;
- (void)chainingFeedViewControllerDidUpdateMostVisibleFeedItem:(id)item media:(id)media currentlyDisplayedImage:(id)image;
- (void)collapsibleNavigationCoordinator:(id)coordinator didUpdateNavigationBarPercentCollapsed:(double)collapsed;
- (void)collapsibleNavigationCoordinator:(id)coordinator didUpdateTabBarPercentCollapsed:(double)collapsed;
- (void)_closeButtonTapped;
- (void)_dismissViewController;
- (id)analyticsExtras;
- (void)chainingFloatingSendButtonContainer:(id)container didTapSendButtonForMedia:(id)media;
@end

#endif /* IGChainingContainerViewController_h */
