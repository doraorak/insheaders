//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVSeriesProfileListViewController_h
#define IGTVSeriesProfileListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGTVSeriesListDataSource.h"
#include "IGTVSeriesProfileListRetryView.h"
#include "_TtC9IGTVUIKit24IGTVLoadingIndicatorView.h"

@class IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGTVSeriesProfileListViewControllerDelegate;

@interface IGTVSeriesProfileListViewController : IGViewController<IGListAdapterDataSource, IGGestureHandler> {
  /* instance variables */
  IGTVSeriesListDataSource *_dataSource;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  NSArray *_viewModels;
  _TtC9IGTVUIKit24IGTVLoadingIndicatorView *_loadingIndicatorView;
  IGTVSeriesProfileListRetryView *_retryView;
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGTVSeriesProfileListViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session user:(id)user;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (void)_handleRetryButton;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)seriesListDataSourceDidUpdateState:(id)state;
- (void)seriesProfileListSectionController:(id)controller didBecomeFocusedWithCell:(id)cell;
- (void)seriesProfileListSectionController:(id)controller didSelectSeriesChannelDataSource:(id)source;
@end

#endif /* IGTVSeriesProfileListViewController_h */
