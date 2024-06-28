//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListAdapter_h
#define IGListAdapter_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGListAdapterPerformanceDelegate-Protocol.h"
#include "IGListAdapterProxy.h"
#include "IGListBatchContext-Protocol.h"
#include "IGListCollectionContext-Protocol.h"
#include "IGListDisplayHandler.h"
#include "IGListSectionMap.h"
#include "IGListUpdatingDelegate-Protocol.h"
#include "IGListWorkingRangeHandler.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSString, UICollectionView, UITraitCollection, UIView, UIViewController;
@protocol IGListAdapterMoveDelegate;

@interface IGListAdapter : NSObject<IGListCollectionContext, IGListBatchContext> {
  /* instance variables */
  BOOL _isDequeuingCell;
  BOOL _isDequeuingSupplementaryView;
  BOOL _isSendingWorkingRangeDisplayUpdates;
  NSMapTable *_viewSectionControllerMap;
  NSMutableArray *_queuedCompletionBlocks;
  NSHashTable *_updateListeners;
}

@property (retain, nonatomic) NSObject<IGListUpdatingDelegate> *updater;
@property (readonly, nonatomic) IGListSectionMap *sectionMap;
@property (readonly, nonatomic) IGListDisplayHandler *displayHandler;
@property (readonly, nonatomic) IGListWorkingRangeHandler *workingRangeHandler;
@property (retain, nonatomic) IGListAdapterProxy *delegateProxy;
@property (retain, nonatomic) UIView *emptyBackgroundView;
@property (nonatomic) BOOL isLastInteractiveMoveToLastSectionIndex;
@property (nonatomic) BOOL isInObjectUpdateTransaction;
@property (readonly, nonatomic) BOOL isInDataUpdateBlock;
@property (retain, nonatomic) IGListSectionMap *previousSectionMap;
@property (retain, nonatomic) NSMutableSet *registeredCellIdentifiers;
@property (retain, nonatomic) NSMutableSet *registeredNibNames;
@property (retain, nonatomic) NSMutableSet *registeredSupplementaryViewIdentifiers;
@property (retain, nonatomic) NSMutableSet *registeredSupplementaryViewNibNames;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) NSObject<IGListAdapterDataSource> *dataSource;
@property (weak, nonatomic) NSObject<IGListAdapterDelegate> *delegate;
@property (weak, nonatomic) NSObject<UICollectionViewDelegate> *collectionViewDelegate;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate;
@property (weak, nonatomic) NSObject<IGListAdapterMoveDelegate> *moveDelegate;
@property (weak, nonatomic) NSObject<IGListAdapterPerformanceDelegate> *performanceDelegate;
@property (nonatomic) long long experiments;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } containerInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } adjustedContainerInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } insetContainerSize;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } containerContentOffset;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) struct IGListCollectionScrollingTraits { BOOL x0; BOOL x1; BOOL x2; } scrollingTraits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithUpdater:(id)updater viewController:(id)controller workingRangeSize:(long long)size;
- (id)initWithUpdater:(id)updater viewController:(id)controller;
- (void)_updateObjects;
- (void)_createProxyAndUpdateCollectionViewDelegate;
- (void)_updateCollectionViewDelegate;
- (void)scrollToObject:(id)object supplementaryKinds:(id)kinds scrollDirection:(long long)direction scrollPosition:(unsigned long long)position additionalOffset:(double)offset animated:(BOOL)animated;
- (id)indexPathForFirstVisibleItem;
- (double)offsetForFirstVisibleItemWithScrollDirection:(long long)direction;
- (struct OffsetRange { double x0; double x1; })_offsetRangeForIndexPath:(id)path supplementaryKinds:(id)kinds scrollDirection:(long long)direction;
- (void)performUpdatesAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)reloadDataWithCompletion:(id /* block */)completion;
- (void)reloadObjects:(id)objects;
- (void)addUpdateListener:(id)listener;
- (void)removeUpdateListener:(id)listener;
- (void)_notifyDidUpdate:(long long)update animated:(BOOL)animated;
- (id)sectionControllerForSection:(long long)section;
- (long long)sectionForSectionController:(id)controller;
- (id)sectionControllerForObject:(id)object;
- (id)objectForSectionController:(id)controller;
- (id)objectAtSection:(long long)section;
- (long long)sectionForObject:(id)object;
- (id)objects;
- (id)_supplementaryViewSourceAtIndexPath:(id)path;
- (id)visibleSectionControllers;
- (id)visibleObjects;
- (id)visibleCellsForObject:(id)object;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (id /* block */)_collectionViewBlock;
- (id)_generateTransitionDataWithObjects:(id)objects dataSource:(id)source;
- (void)_updateObjects:(id)objects dataSource:(id)source;
- (void)_updateWithData:(id)data;
- (void)_updateBackgroundView;
- (BOOL)_itemCountIsZero;
- (id)_sectionMapUsingPreviousIfInUpdateBlock:(BOOL)block;
- (id)indexPathsFromSectionController:(id)controller indexes:(id)indexes usePreviousIfInUpdateBlock:(BOOL)block;
- (id)indexPathForSectionController:(id)controller index:(long long)index usePreviousIfInUpdateBlock:(BOOL)block;
- (id)_layoutAttributesForItemAndSupplementaryViewAtIndexPath:(id)path supplementaryKinds:(id)kinds;
- (id)_layoutAttributesForItemAtIndexPath:(id)path;
- (id)_layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (void)mapView:(id)view toSectionController:(id)controller;
- (id)sectionControllerForView:(id)view;
- (id)_sectionControllerForCell:(id)cell;
- (void)removeMapForView:(id)view;
- (void)_deferBlockBetweenBatchUpdates:(id /* block */)updates;
- (void)_enterBatchUpdates;
- (void)_exitBatchUpdates;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (struct CGSize { double x0; double x1; })containerSizeForSectionController:(id)controller;
- (long long)indexForCell:(id)cell sectionController:(id)controller;
- (id)cellForItemAtIndex:(long long)index sectionController:(id)controller;
- (id)viewForSupplementaryElementOfKind:(id)kind atIndex:(long long)index sectionController:(id)controller;
- (id)fullyVisibleCellsForSectionController:(id)controller;
- (id)visibleCellsForSectionController:(id)controller;
- (id)visibleIndexPathsForSectionController:(id)controller;
- (void)deselectItemAtIndex:(long long)index sectionController:(id)controller animated:(BOOL)animated;
- (void)selectItemAtIndex:(long long)index sectionController:(id)controller animated:(BOOL)animated scrollPosition:(unsigned long long)position;
- (id)dequeueReusableCellOfClass:(Class)class withReuseIdentifier:(id)identifier forSectionController:(id)controller atIndex:(long long)index;
- (id)dequeueReusableCellOfClass:(Class)class forSectionController:(id)controller atIndex:(long long)index;
- (id)dequeueReusableCellFromStoryboardWithIdentifier:(id)identifier forSectionController:(id)controller atIndex:(long long)index;
- (id)dequeueReusableCellWithNibName:(id)name bundle:(id)bundle forSectionController:(id)controller atIndex:(long long)index;
- (id)dequeueReusableSupplementaryViewOfKind:(id)kind forSectionController:(id)controller class:(Class)class atIndex:(long long)index;
- (id)dequeueReusableSupplementaryViewFromStoryboardOfKind:(id)kind withIdentifier:(id)identifier forSectionController:(id)controller atIndex:(long long)index;
- (id)dequeueReusableSupplementaryViewOfKind:(id)kind forSectionController:(id)controller nibName:(id)name bundle:(id)bundle atIndex:(long long)index;
- (void)performBatchAnimated:(BOOL)animated updates:(id /* block */)updates completion:(id /* block */)completion;
- (void)scrollToSectionController:(id)controller atIndex:(long long)index scrollPosition:(unsigned long long)position animated:(BOOL)animated;
- (void)invalidateLayoutForSectionController:(id)controller completion:(id /* block */)completion;
- (void)_invalidateLayoutForSectionController:(id)controller completion:(id /* block */)completion;
- (void)reloadInSectionController:(id)controller atIndexes:(id)indexes;
- (void)insertInSectionController:(id)controller atIndexes:(id)indexes;
- (void)deleteInSectionController:(id)controller atIndexes:(id)indexes;
- (void)invalidateLayoutInSectionController:(id)controller atIndexes:(id)indexes;
- (void)moveInSectionController:(id)controller fromIndex:(long long)index toIndex:(long long)index;
- (void)reloadSectionController:(id)controller;
- (void)moveSectionControllerInteractive:(id)interactive fromIndex:(long long)index toIndex:(long long)index;
- (void)moveInSectionControllerInteractive:(id)interactive fromIndex:(long long)index toIndex:(long long)index;
- (void)revertInvalidInteractiveMoveFromIndexPath:(id)path toIndexPath:(id)path;
@end

#endif /* IGListAdapter_h */
