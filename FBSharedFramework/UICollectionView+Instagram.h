//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UICollectionView_Instagram_h
#define UICollectionView_Instagram_h
@import Foundation;

@interface UICollectionView (Instagram)
/* instance methods */
- (void)enumerateViews:(id)views class:(Class)class block:(id /* block */)block;
- (void)enumerateVisibleCellsWithClass:(Class)class usingBlock:(id /* block */)block;
- (void)enumerateVisibleViewsWithClass:(Class)class usingBlock:(id /* block */)block;
- (unsigned long long)mostVisibleSection;
- (id)filterVisibleCellsByClass:(Class)class visibleCells:(id)cells;
- (id)visibleCellsOfClass:(Class)class;
- (id)ig_visibleCellsIntersectingCollectionViewBounds;
- (id)centerVisisbleCell;
- (id)indexPathAfterIndexPath:(id)path;
- (id)indexPathBeforeIndexPath:(id)path;
- (BOOL)isValidIndexPath:(id)path;
- (struct CGPoint { double x0; double x1; })offsetDeltaForSection:(unsigned long long)section;
- (void)scrollToSection:(unsigned long long)section offsetDelta:(struct CGPoint { double x0; double x1; })delta;
@end

#endif /* UICollectionView_Instagram_h */
