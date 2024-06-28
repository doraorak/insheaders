//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdInformationCenterViewController_h
#define IGAdInformationCenterViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAdInformationCenterCollectionModel.h"
#include "IGAdInformationCenterNavigationBarView.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGSettingsAdInformationCenterNetworkSource.h"

@class IGListAdapter, IGRefreshControl, IGScrollViewAnnouncer, IGUserSession, NSString, UICollectionView;

@interface IGAdInformationCenterViewController : IGViewController<IGListAdapterDataSource, IGScrollViewListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSettingsAdInformationCenterNetworkSource *_networkSource;
  IGAdInformationCenterCollectionModel *_model;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGScrollViewAnnouncer *_feedScrollAnnouncer;
  IGAdInformationCenterNavigationBarView *_navigationBarView;
  IGRefreshControl *_refreshControl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session networkSource:(id)source;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)reload;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)_closeButtonTapped;
- (void)_moreButtonTapped;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
@end

#endif /* IGAdInformationCenterViewController_h */