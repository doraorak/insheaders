//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShopTheLookViewController_h
#define IGShopTheLookViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGSaveStatusListener-Protocol.h"
#include "IGShoppingShopTheLookResponse.h"
#include "IGTransitionZoomFromCapable-Protocol.h"

@class IGListAdapter, IGMedia, IGShoppingNavigationAnalyticsContext, IGStatefulNetworker, IGUserSession, NSDictionary, NSString, UICollectionView, UIView;

@interface IGShopTheLookViewController : IGViewController<IGListAdapterDataSource, IGSaveStatusListener, IGTransitionZoomFromCapable> {
  /* instance variables */
  IGStatefulNetworker *_networker;
  IGUserSession *_userSession;
  IGMedia *_media;
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  IGShoppingShopTheLookResponse *_response;
  IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _gridLayoutConfig;
  UIView *_mediaView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *magicMoveSubviews;

/* instance methods */
- (id)initWithUserSession:(id)session media:(id)media mediaView:(id)view;
- (void)viewDidLoad;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)genericProductTileSectionController:(id)controller didUpdateGenericProductItem:(id)item withUpdatedSaveStatus:(BOOL)status displayedMediaId:(id)id successHandler:(id /* block */)handler;
- (void)genericProductTileSectionController:(id)controller willNavigateToPDPForProductItemPk:(id)pk merchantId:(id)id;
- (BOOL)genericProductTileSectionController:(id)controller containsLastSavedProductItemPk:(id)pk;
- (void)genericProductTileSectionController:(id)controller didTapDismissForProductItemPk:(id)pk;
- (void)savableObject:(id)object didUpdateSaveStatusWithHasSaved:(BOOL)saved saveAction:(long long)action;
- (void)viewDidLayoutSubviews;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomFromTransition;
- (void)prepareBackwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)didCompleteBackwardZoomTransition;
@end

#endif /* IGShopTheLookViewController_h */
