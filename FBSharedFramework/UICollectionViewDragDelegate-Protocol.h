//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UICollectionViewDragDelegate_Protocol_h
#define UICollectionViewDragDelegate_Protocol_h
@import Foundation;

@protocol UICollectionViewDragDelegate <NSObject>
/* instance methods */
- (id)collectionView:(id)view itemsForBeginningDragSession:(id)session atIndexPath:(id)path;
@optional
/* instance methods */
- (id)collectionView:(id)view itemsForAddingToDragSession:(id)session atIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (id)collectionView:(id)view dragPreviewParametersForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view dragSessionWillBegin:(id)begin;
- (void)collectionView:(id)view dragSessionDidEnd:(id)end;
- (BOOL)collectionView:(id)view dragSessionAllowsMoveOperation:(id)operation;
- (BOOL)collectionView:(id)view dragSessionIsRestrictedToDraggingApplication:(id)application;
@end

#endif /* UICollectionViewDragDelegate_Protocol_h */
