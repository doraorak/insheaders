//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksListCollectionLayoutManagerV1_h
#define BKBloksListCollectionLayoutManagerV1_h
@import Foundation;

#include "BKBloksListCollectionLayoutManager.h"

@interface BKBloksListCollectionLayoutManagerV1 : BKBloksListCollectionLayoutManager
/* instance methods */
- (struct RCSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sizeRangeForItem:(id)item atIndexPath:(id)path;
- (struct Optional<RCSizeRange> { struct Storage<RCSizeRange, true, true, true> { BOOL x0; struct RCSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; } x0; })sizeRangeForItemRemeasure:(id)remeasure previousSizeRange:(struct RCSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })range previousComputedSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })computedAndResolvedSizeForItem:(id)item atIndexPath:(id)path shouldResolveSize:(BOOL)size traceType:(unsigned long long)type;
- (void)computeLayoutForItemInBackground:(id)background layoutController:(id)controller atIndex:(long long)index context:(id)context measurementData:(const struct BKCellMeasureData *)data;
@end

#endif /* BKBloksListCollectionLayoutManagerV1_h */
