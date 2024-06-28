//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryContainerGridSectionController_h
#define IGDiscoveryContainerGridSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGFeedPreviewHandler.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGCollectionViewDelegatePreviewingProxy, IGDiscoveryGridItem, IGListAdapter, IGPlaybackCoordinator, IGUserSession, IGWaterfallCollectionViewLayout, NSString;
@protocol IGDiscoveryContainerSectionControllerDelegate, IGDiscoveryGridLoggingProvider, IGDiscoverySectionLoggingProvider, IGGridItemPositionProvider;

@interface IGDiscoveryContainerGridSectionController : IGListSectionController<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _layoutConfig;
  IGPlaybackCoordinator *_playbackCoordinator;
  NSObject<IGDiscoverySectionLoggingProvider> *_loggingProvider;
  NSObject<IGDiscoveryGridLoggingProvider> *_gridLoggingProvider;
  NSObject<IGGridItemPositionProvider> *_gridPositionProvider;
  IGFeedPreviewHandler *_previewHandler;
  IGCollectionViewDelegatePreviewingProxy *_previewProxy;
  IGDiscoveryGridItem *_gridItem;
  IGListAdapter *_listAdapter;
  IGWaterfallCollectionViewLayout *_feedLayout;
}

@property (weak, nonatomic) NSObject<IGDiscoveryContainerSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session layoutConfig:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })config playbackCoordinator:(id)coordinator loggingProvider:(id)provider gridLoggingProvider:(id)provider gridPositionProvider:(id)provider;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)mediaSectionController:(id)controller didSelectItem:(id)item;
- (void)mediaSectionController:(id)controller updatedActiveFeedItem:(id)item oldGridItem:(id)item wantsImmediateUpdate:(BOOL)update;
@end

#endif /* IGDiscoveryContainerGridSectionController_h */
