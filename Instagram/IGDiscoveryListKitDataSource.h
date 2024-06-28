//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryListKitDataSource_h
#define IGDiscoveryListKitDataSource_h
@import Foundation;

#include "IGDiscoveryGridDataController.h"
#include "IGDiscoveryGridSearchResultsInfo.h"
#include "IGFeedItemLogger.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGSearchResultSectionControllerLoggingProvider-Protocol.h"
#include "_TtC35IGDiscoveryContentInformModuleUtils37IGDiscoveryContentInformModuleManager.h"

@class IGDiscoveryGridDataStore, IGDiscoveryHighConfidenceModuleModel, IGDiscoverySupergridConfiguration, IGPlaybackCoordinator, IGSponsoredSupportConfiguration, IGUserSession, NSNumber, NSString;
@protocol IGDiscoveryGridLoggingProvider, IGDiscoveryListKitDataSourceDelegate, IGDiscoverySectionLoggingProvider, IGGridItemPositionProvider, IGSearchHideHelperProtocol;

@interface IGDiscoveryListKitDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _layoutConfig;
  NSObject<IGDiscoveryListKitDataSourceDelegate> *_delegate;
  NSObject<IGGridItemPositionProvider> *_gridPositionProvider;
  NSObject<IGDiscoverySectionLoggingProvider> *_discoveryLoggingProvider;
  NSObject<IGDiscoveryGridLoggingProvider> *_gridLoggingProvider;
  IGDiscoveryGridDataController *_dataController;
  IGDiscoveryHighConfidenceModuleModel *_hcmModel;
  IGDiscoveryGridSearchResultsInfo *_searchResultsInfo;
  NSString *_moreResultsHeader;
  NSObject<IGSearchHideHelperProtocol> *_searchItemHidingHelper;
  BOOL _hasShownTopReel;
  IGPlaybackCoordinator *_playbackCoordinator;
  IGFeedItemLogger *_feedItemLogger;
  NSString *_discoveryRecommendationCoverTitle;
  NSObject<IGSearchResultSectionControllerLoggingProvider> *_searchLoggingProvider;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfig;
  NSNumber *_adSectionIndex;
  _TtC35IGDiscoveryContentInformModuleUtils37IGDiscoveryContentInformModuleManager *_informTreatementManager;
  IGDiscoverySupergridConfiguration *_supergridConfiguration;
}

@property (retain, nonatomic) IGDiscoveryGridDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session layoutConfig:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })config discoveryRecommendationCoverTitle:(id)title dataController:(id)controller playbackCoordinator:(id)coordinator feedItemLogger:(id)logger delegate:(id)delegate loggingProvider:(id)provider gridLoggingProvider:(id)provider gridPositionProvider:(id)provider searchLoggingProvider:(id)provider sponsoredSupportConfig:(id)config highConfidenceModuleModel:(id)model searchResultsInfo:(id)info moreResultsHeader:(id)header adSectionIndex:(id)index informTreatementManager:(id)manager supergridConfiguration:(id)configuration;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
@end

#endif /* IGDiscoveryListKitDataSource_h */