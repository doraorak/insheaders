//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationListKitDataSource_h
#define IGLocationListKitDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"
#include "IGLocationHeaderInfoViewModel.h"
#include "IGTabControlDelegate-Protocol.h"

@class IG4BLogger, IGAPILocationDict, IGLocationMainFeedDataStore, IGLocationSectionHeaderModel, IGPlaybackCoordinator, IGSpinnerLabelViewModel, IGStory, IGUserSession, NSArray, NSString, NSURL;
@protocol IGDiscoverySectionLoggingProvider, IGLocationHeaderSectionControllerDelegate, IGLocationInfoPageHeaderSectionControllerDelegate, IGLocationListKitDataSourceDelegate;

@interface IGLocationListKitDataSource : NSObject<IGTabControlDelegate, IGListAdapterDataSource> {
  /* instance variables */
  IGSpinnerLabelViewModel *_spinnerViewModel;
  IGLocationSectionHeaderModel *_headerModel;
  IGLocationHeaderInfoViewModel *_headerInfoViewModel;
  IGStory *_reel;
  NSURL *_defaultImageURL;
  BOOL _needsLocationFetch;
  BOOL _discoveryMapEnabled;
  NSObject<IGDiscoverySectionLoggingProvider> *_discoveryLoggingProvider;
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _layoutConfig;
  IGLocationMainFeedDataStore *_locationMainFeedDataStore;
  IGUserSession *_userSession;
  IGPlaybackCoordinator *_playbackCoordinator;
  NSObject<IGLocationListKitDataSourceDelegate> *_delegate;
  NSObject<IGLocationHeaderSectionControllerDelegate> *_mapViewDelegate;
  NSObject<IGLocationInfoPageHeaderSectionControllerDelegate> *_locationHeaderDelegate;
  long long _feedType;
  NSArray *_availableTabs;
  IG4BLogger *_templateLogger;
  NSString *_analyticsModule;
  NSString *_mapSessionID;
  BOOL _shouldUseNewUIGraphForSurface;
  BOOL _showTailLoadingIndicator;
}

@property (readonly, nonatomic) IGAPILocationDict *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session location:(id)location layoutConfig:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })config playbackCoordinator:(id)coordinator locationFeedType:(long long)type availableTabs:(id)tabs loggingProvider:(id)provider IG4BLogger:(id)blogger analyticsModule:(id)module delegate:(id)delegate mapViewDelegate:(id)delegate locationHeaderDelegate:(id)delegate needsLocationFetch:(BOOL)fetch discoveryMapEnabled:(BOOL)enabled;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)tabControl:(id)control tappedSegmentIndex:(unsigned long long)index;
@end

#endif /* IGLocationListKitDataSource_h */