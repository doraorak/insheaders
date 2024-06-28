//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectDraggableRowListView_h
#define IGDirectDraggableRowListView_h
@import Foundation;

#include "UIView.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol IGDirectDraggableRowListViewDelegate, IGDirectDraggableRowListViewRowCellSourceDelegate;

@interface IGDirectDraggableRowListView : UIView<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
  /* instance variables */
  UICollectionView *_collectionView;
  NSString *_cellClassIdentifier;
}

@property (weak, nonatomic) NSObject<IGDirectDraggableRowListViewRowCellSourceDelegate> *rowCellSourceDelegate;
@property (weak, nonatomic) NSObject<IGDirectDraggableRowListViewDelegate> *delegate;
@property (nonatomic) double rowHeight;
@property (readonly, nonatomic) BOOL isInReorderingMode;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame rowCellClass:(Class)class rowHeight:(double)height;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
- (double)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(long long)index;
- (double)collectionView:(id)view layout:(id)layout minimumInteritemSpacingForSectionAtIndex:(long long)index;
- (BOOL)collectionView:(id)view canMoveItemAtIndexPath:(id)path;
- (id)collectionView:(id)view targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)path atCurrentIndexPath:(id)path toProposedIndexPath:(id)path;
- (void)collectionView:(id)view moveItemAtIndexPath:(id)path toIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)_handleLongPress:(id)press;
- (void)enableReorderingMode;
- (void)disableReorderingMode;
- (void)reload;
- (void)_reloadData;
@end

#endif /* IGDirectDraggableRowListView_h */
