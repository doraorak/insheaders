//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingMediaGridViewController_h
#define IGShoppingMediaGridViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGFeedPreviewHandler.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGShoppingSessionTracking-Protocol.h"

@class IGAPIProductDetailsProductItemDict, IGListAdapter, IGRefreshControl, IGScrollViewAnnouncer, IGSessionTracker, IGShoppingConsumptionFeedItemLogger, IGUserSession, NSString, UICollectionView;
@protocol IGShoppingMediaGridServiceType, IGShoppingMediaGridViewControllerConfigurationType;

@interface IGShoppingMediaGridViewController : IGViewController<IGScrollViewListener, IGListAdapterDataSource, IGMediaThumbnailSectionControllerSelectionDelegate, IGShoppingSessionTracking> {
  /* instance variables */
  IGUserSession *_userSession;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  IGRefreshControl *_refreshControl;
  NSObject<IGShoppingMediaGridServiceType> *_service;
  NSObject<IGShoppingMediaGridViewControllerConfigurationType> *_configuration;
  IGFeedPreviewHandler *_previewHandler;
  IGShoppingConsumptionFeedItemLogger *_logger;
  IGAPIProductDetailsProductItemDict *_initialProductItem;
  NSString *_selectedProductItemPk;
  NSString *_priorSubmodule;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;

/* instance methods */
- (id)initWithUserSession:(id)session service:(id)service configuration:(id)configuration shoppingSessionTracker:(id)tracker initialProductItem:(id)item selectedProductItem:(id)item priorModule:(id)module priorSubmodule:(id)submodule;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_pullToRefreshControlTriggered:(id)triggered;
- (void)_navigateToShoppingCollection;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)shoppingMediaGridService:(id)service didUpdateItemsForMediaGrid:(id)grid;
- (void)shoppingMediaGridService:(id)service didUpdateFetchState:(id)state;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)shoppingEmptyStateSectionController:(id)controller didTapSubtitleWithURL:(id)url;
- (void)shoppingEmptyStateSectionController:(id)controller didTapActionButtonWithViewModel:(id)model;
- (void)didSelectFeedItem:(id)item usingForceTouch:(BOOL)touch;
- (void)didTapSelectionOverlayWithFeedItem:(id)item;
@end

#endif /* IGShoppingMediaGridViewController_h */
