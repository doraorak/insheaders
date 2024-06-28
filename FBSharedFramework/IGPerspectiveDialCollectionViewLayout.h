//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPerspectiveDialCollectionViewLayout_h
#define IGPerspectiveDialCollectionViewLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"

@class NSArray;

@interface IGPerspectiveDialCollectionViewLayout : UICollectionViewLayout {
  /* instance variables */
  NSArray *_dialItemStops;
  double _totalItemWidth;
  double _progressToLeftStop;
  long long _middleItemIndex;
  double _interitemSpacing;
  double _magnifierDiameter;
}

@property (nonatomic) struct CGSize { double x0; double x1; } itemSize;
@property (readonly, nonatomic) long long highlightedItemIndex;

/* class methods */
+ (Class)layoutAttributesClass;

/* instance methods */
- (id)init;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndexPath:(id)path;
@end

#endif /* IGPerspectiveDialCollectionViewLayout_h */
