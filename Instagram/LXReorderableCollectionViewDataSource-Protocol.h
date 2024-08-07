//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef LXReorderableCollectionViewDataSource_Protocol_h
#define LXReorderableCollectionViewDataSource_Protocol_h
@import Foundation;

@protocol LXReorderableCollectionViewDataSource <UICollectionViewDataSource>
@optional
/* instance methods */
- (void)collectionView:(id)view itemAtIndexPath:(id)path willMoveToIndexPath:(id)path;
- (void)collectionView:(id)view itemAtIndexPath:(id)path willMoveToIndexPath:(id)path;
- (void)collectionView:(id)view itemAtIndexPath:(id)path didMoveToIndexPath:(id)path;
- (void)collectionView:(id)view itemAtIndexPath:(id)path didMoveToIndexPath:(id)path;
- (BOOL)collectionView:(id)view canMoveItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view canMoveItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view itemAtIndexPath:(id)path canMoveToIndexPath:(id)path;
- (BOOL)collectionView:(id)view itemAtIndexPath:(id)path canMoveToIndexPath:(id)path;
- (BOOL)collectionView:(id)view itemAtIndexPath:(id)path canBeRemovedAtPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)collectionView:(id)view itemAtIndexPath:(id)path canBeRemovedAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)collectionView:(id)view itemAtIndexPath:(id)path wasRemovedAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)collectionView:(id)view itemAtIndexPath:(id)path wasRemovedAtPoint:(struct CGPoint { double x0; double x1; })point;
@end

#endif /* LXReorderableCollectionViewDataSource_Protocol_h */
