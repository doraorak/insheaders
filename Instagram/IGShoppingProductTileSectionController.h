//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductTileSectionController_h
#define IGShoppingProductTileSectionController_h
@import Foundation;

#include "IGShoppingGenericProductTileSectionController.h"
#include "IGFeedPreviewableSectionController-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"
#include "IGShoppingCartLogger.h"
#include "IGShoppingHomeTileVideoManager.h"
#include "IGShoppingPDPBootstrapManager.h"
#include "IGShoppingPDPSourceMedia.h"
#include "IGShoppingProductTileViewModel.h"
#include "IGTransitionZoomListCapable-Protocol.h"

@class IGMedia, IGShoppingInlineVariantSelectionController, IGShoppingProductTileCoverMedia, IGShoppingStorefrontAnalyticsContext, IGSponsoredSupportConfiguration, IGUserSession, NSString, NSTimer;
@protocol IGShoppingGenericProductTileSectionControllerDelegate, IGShoppingProductTileLoggingProviderType, IGShoppingProductTileSectionControllerImpressionDelegate, IGShoppingProductTileSectionControllerTapDelegate;

@interface IGShoppingProductTileSectionController : IGShoppingGenericProductTileSectionController<IGListDisplayDelegate, IGTransitionZoomListCapable, IGFeedPreviewableSectionController> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _layoutConfig;
  IGShoppingProductTileViewModel *_viewModel;
  long long _entryPoint;
  long long _navigationSource;
  long long _addToCartConfirmationBehavior;
  NSObject<IGShoppingProductTileLoggingProviderType> *_loggingProvider;
  IGShoppingCartLogger *_cartLogger;
  IGShoppingStorefrontAnalyticsContext *_storefrontInfo;
  long long _productDestination;
  IGMedia *_associatedFeedItemForInsights;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  IGShoppingHomeTileVideoManager *_videoManager;
  IGShoppingInlineVariantSelectionController *_variantSelectionController;
  IGShoppingPDPSourceMedia *_thumbnailPDPSourceMedia;
  IGShoppingProductTileCoverMedia *_displayedCarouselCoverMedia;
  IGShoppingPDPBootstrapManager *_pdpBootstrapManager;
  NSTimer *_prefetchTimer;
  NSObject<IGShoppingProductTileSectionControllerTapDelegate> *_tapDelegate;
  NSObject<IGShoppingProductTileSectionControllerImpressionDelegate> *_impressionDelegate;
}

@property (weak, nonatomic) NSObject<IGShoppingGenericProductTileSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)placeholderSpecForObject:(id)object withContext:(id)context;
+ (id)defaultPlaceholderSpecWithContext:(id)context;

/* instance methods */
- (id)initWithUserSession:(id)session viewController:(id)controller layoutConfig:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })config entryPoint:(long long)point navigationSource:(long long)source analyticsModule:(id)module addToCartConfirmationBehavior:(long long)behavior loggingProvider:(id)provider cartLogger:(id)logger associatedFeedItemForInsights:(id)insights sponsoredSupportConfiguration:(id)configuration playbackCoordinator:(id)coordinator storefrontInfo:(id)info productDestination:(long long)destination;
- (long long)vp_level;
- (void)presentFeedPreviewableItem;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (id)navigationAnalyticsContext;
- (id)displayedCoverMedia;
- (void)shoppingInlineVariantSelectionController:(id)controller didResolveWithProductItem:(id)item productSelectionBehavior:(id)behavior;
- (void)productTileCellDidTapSaveButton:(id)button;
- (void)productTileCellDidTapDismissButton:(id)button;
- (void)productTileCell:(id)cell didTapCtaButton:(id)button ctaType:(long long)type;
- (void)productTileCell:(id)cell didLoadImageView:(id)view source:(id)source networkRequestSummary:(id)summary;
- (void)productTileCell:(id)cell didFailToLoadImageView:(id)view error:(id)error networkRequestSummary:(id)summary;
- (void)productTileCell:(id)cell didTapMedia:(id)media;
- (void)productTileCell:(id)cell didTapThumbnailMedia:(id)media postItemIndex:(id)index;
- (void)productTileCell:(id)cell didSwipeToMedia:(id)media;
- (void)productTileCellDidTapCell:(id)cell;
- (void)productTileCellDidTapThreeDotMenu:(id)menu;
- (void)productTileSectionController:(id)controller didTapViewModel:(id)model destination:(long long)destination tileView:(id)view;
- (void)productTileSectionController:(id)controller navigateToRichDestinationWithViewModel:(id)model;
- (id)transitionZoomViewWithContext:(id)context;
- (long long)transitionZoomViewIndex;
- (void)navigateToIAB;
- (void)navigateToPDP;
- (id)sectionIdentifier;
- (void)_handleProductTileTap:(id)tap;
@end

#endif /* IGShoppingProductTileSectionController_h */
