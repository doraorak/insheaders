//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPBIAProxyProfileViewController_h
#define IGPBIAProxyProfileViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAppStoreSurfacePresenter.h"
#include "IGFeedItemLogger.h"
#include "IGFeedNetworkSourceDelegate-Protocol.h"
#include "IGFeedStarterKit.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGPBIAProxyProfileDataModel.h"
#include "IGPBIAProxyProfileFeedConfiguration.h"
#include "IGPBIAProxyProfileFeedItemConfiguration.h"
#include "IGPBIAProxyProfileFetcher.h"
#include "IGPBIAProxyProfileHeaderSectionController.h"
#include "IGPBIAProxyProfileHeaderViewModel.h"
#include "IGPBIAProxyProfileLearnMoreController.h"
#include "IGProfileBioSectionControllerDelegate-Protocol.h"
#include "IGProfileLayoutMetrics-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGSponsoredInfoProviding-Protocol.h"
#include "MAISKOverlayTransitionDelegate-Protocol.h"

@class IG4BLogger, IGFeedItemTracker, IGFeedNetworkSource, IGMedia, IGUserDetailConfiguration, IGUserSession, NSString;
@protocol IGAdsBottomCTAControlling, IGFeedSectionControllerComponentsType;

@interface IGPBIAProxyProfileViewController : IGViewController<IGFeedNetworkSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGScrollViewListener, IGProfileBioSectionControllerDelegate, MAISKOverlayTransitionDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGFeedSectionControllerComponentsType> *_feedSectionControllerComponents;
  IGFeedNetworkSource *_feedNetworkSource;
  NSObject<IGAdsBottomCTAControlling> *_bottomCTAController;
  IGPBIAProxyProfileLearnMoreController *_learnMoreController;
  IGPBIAProxyProfileHeaderSectionController *_headerSectionController;
  IGPBIAProxyProfileFetcher *_dataFetcher;
  IGPBIAProxyProfileFeedConfiguration *_feedConfiguration;
  IGPBIAProxyProfileFeedItemConfiguration *_itemConfiguration;
  IGPBIAProxyProfileDataModel *_dataModel;
  IGPBIAProxyProfileHeaderViewModel *_headerModel;
  IGAppStoreSurfacePresenter *_appStoreSurfacePresenter;
  NSObject<IGProfileLayoutMetrics> *_layoutMetrics;
  NSString *_adsTrackingToken;
  IG4BLogger *_businessLogger;
  IGFeedItemLogger *_feedItemLogger;
  IGFeedItemTracker *_feedItemTracker;
  NSString *_iabCallsiteSessionID;
  IGUserDetailConfiguration *_userConfiguration;
}

@property (readonly, nonatomic) IGFeedStarterKit *feed;
@property (readonly, nonatomic) NSObject<IGSponsoredInfoProviding> *sponsoredInfoProvider;
@property (retain, nonatomic) IGMedia *media;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration media:(id)media sponsoredInfoProvider:(id)provider shouldShowUFI:(BOOL)ufi;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (void)_refresh;
- (void)_didTapMoreBarButton;
- (void)_updateTitle;
- (id)analyticsExtras;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didCompleteUpdateAnimated:(BOOL)animated refreshHidden:(BOOL)hidden;
- (void)listAdapter:(id)adapter didCompleteReloadAndRefreshHidden:(BOOL)hidden;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
- (void)bioSectionControllerDidTapAction:(id)action action:(long long)action;
- (void)bioSectionControllerDidLongPress:(id)press;
- (void)bioSectionControllerShouldBeginEditing:(id)editing;
- (void)pbiaProxyProfileHeaderSectionControllerActionButtonDidTap:(id)tap;
- (void)scrollViewDidScroll:(id)scroll;
- (void)tombstoneSectionControllerWantsDismissed:(id)dismissed;
- (void)browser:(id)browser willExpandToFullscreen:(unsigned long long)fullscreen;
- (void)browser:(id)browser willDismiss:(unsigned long long)dismiss completion:(id /* block */)completion;
- (void)browser:(id)browser isPeekState:(BOOL)state;
- (id)bottomSheetViewPassThrough:(id)through hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)directResponseInfo;
- (id)userSession;
- (id)trackingModel;
@end

#endif /* IGPBIAProxyProfileViewController_h */
