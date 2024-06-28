//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksStaggeredGridCollectionLayoutManager_h
#define BKBloksStaggeredGridCollectionLayoutManager_h
@import Foundation;

#include "BKBloksCollectionComponentController.h"
#include "NSObject-Protocol.h"

@class BKModel, NSString;

@interface BKBloksStaggeredGridCollectionLayoutManager : NSObject<NSObject> {
  /* instance variables */
  BKBloksCollectionComponentController *_collectionController;
  struct BKBloksGridCollectionSpacings { double itemMainAxisSpacing; double itemCrossAxisSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } padding; } _spacings;
  BKModel *_layoutConfig;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (double)mainAxisSpacing;
- (double)crossAxisSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionInsets;
- (id)layoutConfig;
- (BOOL)updateLayoutManager:(id)manager;
- (struct RCSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sizeRangeForItem:(id)item atIndexPath:(id)path;
- (struct Optional<RCSizeRange> { struct Storage<RCSizeRange, true, true, true> { BOOL x0; struct RCSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; } x0; })sizeRangeForItemRemeasure:(id)remeasure previousSizeRange:(struct RCSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })range previousComputedSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })computedAndResolvedSizeForItem:(id)item atIndexPath:(id)path shouldResolveSize:(BOOL)size traceType:(unsigned long long)type;
- (id)layoutControllerForItem:(id)item;
- (void)performUpdatesAnimated:(BOOL)animated newItems:(id)items;
@end

#endif /* BKBloksStaggeredGridCollectionLayoutManager_h */
