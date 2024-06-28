//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPListKitDataSource_h
#define IGShoppingPDPListKitDataSource_h
@import Foundation;

#include "IGAdsProductPageLogger.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGQPMegaphoneSectionControllerPresenter.h"
#include "IGShoppingCartMutationToken-Protocol.h"
#include "IGShoppingPDPDataModel.h"
#include "IGShoppingPDPExternalProductReferenceInfo.h"
#include "IGShoppingPDPFeedSpinnerImpressionManager.h"
#include "IGShoppingPDPGroupedSectionImpressionManager.h"
#include "IGShoppingPDPHeroCarouselDataController.h"
#include "IGShoppingPDPMerchantCartDataController.h"
#include "IGShoppingPDPPerformanceLogger.h"
#include "IGShoppingPDPProductImpressionEventTracker.h"
#include "IGShoppingPDPSelectedProductSectionsNetworker.h"
#include "IGShoppingPDPTryInARSectionDataModel.h"
#include "IGShoppingPDPVariantsController.h"
#include "IGShoppingRestockReminderService.h"

@class IGListAdapter, IGMedia, IGQPMegaphone, IGSessionTracker, IGShoppingConsumptionAnalyticsContext, IGShoppingConsumptionFeedItemLogger, IGShoppingNavigationAnalyticsContext, IGSponsoredSupportConfiguration, IGStatefulNetworkerFetchState, IGUserSession, NSDate, NSString;
@protocol IGShoppingPDPNavigationDelegate, UIViewController<IGShoppingPDPListKitDataSourceDelegate;

@interface IGShoppingPDPListKitDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSessionTracker *_shoppingSessionTracker;
  struct { BOOL unselectedVariantsEnabled; BOOL productVideosEnabled; BOOL isCheckoutEnabled; } _options;
  IGMedia *_media;
  IGShoppingNavigationAnalyticsContext *_navigationInfo;
  IGShoppingConsumptionFeedItemLogger *_logger;
  IGAdsProductPageLogger *_appLogger;
  IGShoppingPDPPerformanceLogger *_perfLogger;
  IGShoppingPDPExternalProductReferenceInfo *_externalProductReferenceInfo;
  IGShoppingConsumptionAnalyticsContext *_consumptionLoggingInfo;
  NSString *_priorSubmodule;
  long long _navigationSource;
  NSString *_checkoutSessionId;
  NSDate *_initializationDate;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  IGShoppingPDPProductImpressionEventTracker *_productImpressionEventTracker;
  IGShoppingPDPFeedSpinnerImpressionManager *_feedSpinnerImpressionManager;
  IGQPMegaphone *_qpMegaphone;
  IGQPMegaphoneSectionControllerPresenter *_qpMegaphoneSectionControllerPresenter;
  IGShoppingPDPTryInARSectionDataModel *_tryInARSectionDataModel;
  BOOL _isLandingAPP;
  IGShoppingPDPDataModel *_dataModel;
  IGShoppingPDPVariantsController *_variantsController;
  IGShoppingPDPHeroCarouselDataController *_heroCarouselDataController;
  IGShoppingPDPMerchantCartDataController *_merchantCartDataController;
  IGShoppingPDPSelectedProductSectionsNetworker *_selectedProductSectionsNetworker;
  NSObject<IGShoppingCartMutationToken> *_addToCartMutationToken;
  IGShoppingPDPGroupedSectionImpressionManager *_groupedSectionImpressionManager;
  IGShoppingRestockReminderService *_restockReminderService;
  IGListAdapter *_heroCarouselListAdapter;
  long long _igFundedBannerAppearanceStyle;
  long long _contentViewpointLevel;
}

@property (copy, nonatomic) IGStatefulNetworkerFetchState *fetchState;
@property (weak, nonatomic) UIViewController<IGShoppingPDPListKitDataSourceDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGShoppingPDPNavigationDelegate> *navigationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session shoppingSessionTracker:(id)tracker options:(struct { BOOL x0; BOOL x1; BOOL x2; })options dataModel:(id)model media:(id)media sponsoredSupportConfiguration:(id)configuration logger:(id)logger appLogger:(id)logger perfLogger:(id)logger presentationContext:(id)context checkoutSessionId:(id)id consumptionLoggingInfo:(id)info;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
@end

#endif /* IGShoppingPDPListKitDataSource_h */