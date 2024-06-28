//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksProductTileComponentController_h
#define IGBloksProductTileComponentController_h
@import Foundation;

#include "BKBloksComponentController.h"
#include "IGBloksProductTileView.h"
#include "IGSaveStatusListener-Protocol.h"
#include "IGShoppingCartLogger.h"
#include "IGShoppingProductTileViewModel.h"

@class IGMedia, IGSessionTracker, IGShoppingInlineVariantSelectionController, IGUserSession, NSNumber, NSString;

@interface IGBloksProductTileComponentController : BKBloksComponentController<IGSaveStatusListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGBloksProductTileView *_view;
  IGShoppingProductTileViewModel *_viewModel;
  id _onTapModel;
  id _postPDPLoadActionModel;
  IGSessionTracker *_shoppingSession;
  IGShoppingInlineVariantSelectionController *_variantSelectionController;
  IGShoppingCartLogger *_cartLogger;
  IGMedia *_media;
  NSString *_priorModule;
  NSString *_priorSubmodule;
  NSString *_module;
  NSString *_submodule;
  NSString *_merchantId;
  NSString *_shopsProfileEntryIgid;
  NSString *_productCollectionId;
  NSString *_productCollectionType;
  NSNumber *_collectionPageId;
  id _onAddToCartClick;
  id _onAddToCartSuccess;
  id _onAddToCartFailure;
  id _onSaveClick;
  id _onSaveSuccess;
  id _onSaveFailure;
  id _onUnsaveClick;
  id _onUnsaveSuccess;
  id _onUnsaveFailure;
  NSString *_marketerId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)didAcquireView:(id)view;
- (void)didMount:(id)mount;
- (void)_onTap;
- (void)savableObject:(id)object didUpdateSaveStatusWithHasSaved:(BOOL)saved saveAction:(long long)action;
- (void)productTileCellDidTapSaveButton:(id)button;
- (void)productTileCellDidTapCell:(id)cell;
- (void)productTileCell:(id)cell didTapMedia:(id)media;
- (void)productTileCell:(id)cell didTapThumbnailMedia:(id)media postItemIndex:(id)index;
- (void)productTileCellDidTapThreeDotMenu:(id)menu;
- (void)productTileCellDidTapDismissButton:(id)button;
- (void)productTileCell:(id)cell didSwipeToMedia:(id)media;
- (void)productTileCell:(id)cell didTapCtaButton:(id)button ctaType:(long long)type;
- (void)productTileCell:(id)cell didLoadImageView:(id)view source:(id)source networkRequestSummary:(id)summary;
- (void)productTileCell:(id)cell didFailToLoadImageView:(id)view error:(id)error networkRequestSummary:(id)summary;
- (void)shoppingInlineVariantSelectionController:(id)controller didResolveWithProductItem:(id)item productSelectionBehavior:(id)behavior;
@end

#endif /* IGBloksProductTileComponentController_h */