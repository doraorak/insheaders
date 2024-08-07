//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioTrendingListViewController_h
#define IGAudioTrendingListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAudioBrowserModelsListViewControllerDelegate-Protocol.h"
#include "IGAudioModelProtocol-Protocol.h"
#include "IGAudioTrendingListTrackSectionControllerDelegate-Protocol.h"
#include "IGDynamicPageChildViewControllerDelegate-Protocol.h"
#include "IGDynamicPageChildViewControllerType-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGAudioModelsPaginatedList, IGAudioPlayer, IGInfoView, IGInfoViewModel, IGListAdapter, IGScrollViewAnnouncer, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGAudioTrendingListViewController : IGViewController<IGAudioTrendingListTrackSectionControllerDelegate, IGListAdapterDataSource, IGScrollViewListener, UICollectionViewDelegate, IGAudioBrowserModelsListViewControllerDelegate, IGDynamicPageChildViewControllerType> {
  /* instance variables */
  IGUserSession *_userSession;
  IGListAdapter *_adapter;
  IGAudioPlayer *_audioPlayer;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  IGInfoView *_infoView;
  IGInfoViewModel *_refreshViewModel;
  NSArray *_listAdapterModels;
  unsigned long long _topAudioTabType;
  UICollectionView *_collectionView;
  long long _entryPoint;
  NSObject<IGAudioModelProtocol> *_inThisReelAudioTrack;
  IGAudioModelsPaginatedList *_topTrendsAudioPaginatedList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGDynamicPageChildViewControllerDelegate> *dynamicPageChildDelegate;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithUserSession:(id)session topAudioTabType:(unsigned long long)type entryPoint:(long long)point;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)_didTapBackButton;
- (void)_infoButtonTapped;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)trackSectionController:(id)controller didTapAudioTrack:(id)track sectionId:(id)id;
- (void)trackSectionController:(id)controller didSavedAudioOnBookmarkButton:(id)button;
- (void)modelsListViewController:(id)controller multiTrackDidTapAudioTrack:(id)track;
- (void)modelsListViewController:(id)controller didTapAudioTrack:(id)track context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context category_DEPRECATED:(unsigned long long)deprecated;
- (void)modelsListViewController:(id)controller didTapAudioPageForAudioTrack:(id)track pivotPageSessionId:(id)id;
- (void)modelsListViewController:(id)controller didTapArtist:(id)artist category:(unsigned long long)category;
- (void)modelsListViewControllerDidTapClearAllForRecentSearches:(id)searches;
- (void)modelsListViewController:(id)controller didTapLimitedCatalogBannerLearnMoreLinkWithUrl:(id)url;
- (void)infoViewWasTapped:(id)tapped;
- (void)infoViewTextButtonTapped:(id)tapped;
- (void)modelsListViewControllerDidUpdateModels:(id)models;
- (void)_applicationDidEnterBackground:(id)background;
- (void)didBecomeSelectedPageInDynamicPageViewController;
- (void)willResignSelectedPageInDynamicPageViewController;
- (id)scrollView;
- (id)scrollViewAnnouncer;
- (void)prepareForReuse;
- (void)updateContentInsets;
@end

#endif /* IGAudioTrendingListViewController_h */
