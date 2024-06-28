//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCountdownStickerListViewController_h
#define IGCountdownStickerListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAsyncTask.h"
#include "IGCountdownStickerListModel.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapter.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGSpinnerLabelViewModel.h"
#include "IGUserSession.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UICollectionView;
@protocol IGCountdownStickerListViewControllerDelegate;

@interface IGCountdownStickerListViewController : IGViewController<IGListAdapterDataSource, UIScrollViewDelegate, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGAsyncTask *_listRequest;
  IGAsyncTask *_listSuggestedCountdownsRequest;
  IGCountdownStickerListModel *_listModel;
  NSMutableArray *_previousCountdowns;
  NSMutableArray *_suggestedCountdowns;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGSpinnerLabelViewModel *_spinnerModel;
  BOOL _shouldAddSpinner;
}

@property (weak, nonatomic) NSObject<IGCountdownStickerListViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session hasSuggestedCountdowns:(BOOL)countdowns;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint *)offset;
- (void)countdownStickerCreateNewListSectionControllerDidTapCreateNewList:(id)list;
- (void)countdownStickerSelectionController:(id)controller didTapMoreForCountdownSticker:(id)sticker;
- (void)countdownStickerSelectionController:(id)controller didReshareCountdownSticker:(id)sticker;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGCountdownStickerListViewController_h */