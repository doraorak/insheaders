//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef LXReorderableCollectionViewDelegateFlowLayout_Protocol_h
#define LXReorderableCollectionViewDelegateFlowLayout_Protocol_h
@import Foundation;

@protocol LXReorderableCollectionViewDelegateFlowLayout <UICollectionViewDelegateFlowLayout>
@optional
/* instance methods */
- (void)collectionView:(id)view layout:(id)layout didDragView:(id)view withOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)collectionView:(id)view layout:(id)layout willBeginDraggingItemAtIndexPath:(id)path;
- (void)collectionView:(id)view layout:(id)layout didBeginDraggingItemAtIndexPath:(id)path;
- (void)collectionView:(id)view layout:(id)layout willEndDraggingItemAtIndexPath:(id)path;
- (void)collectionView:(id)view layout:(id)layout didEndDraggingItemAtIndexPath:(id)path;
@end

#endif /* LXReorderableCollectionViewDelegateFlowLayout_Protocol_h */