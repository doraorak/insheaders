//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStickySectionsWaterfallCollectionViewLayout_h
#define IGStickySectionsWaterfallCollectionViewLayout_h
@import Foundation;

#include "IGWaterfallCollectionViewLayout.h"

@class NSMutableDictionary;

@interface IGStickySectionsWaterfallCollectionViewLayout : IGWaterfallCollectionViewLayout {
  /* instance variables */
  double _topContentInset;
  double _stickySectionHeaderOffset;
  double _aggregateStickySectionHeaderHeight;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _collectionViewBoundsReference;
  NSMutableDictionary *_stickyHeaderAttributesCache;
  long long _currentStickyHeaderSectionCount;
  long long _numberOfStickyTopSections;
}

/* instance methods */
- (id)initWithDataSource:(id)source layoutConfiguration:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })configuration layoutStyle:(long long)style topContentInset:(double)inset;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (void)invalidateLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
@end

#endif /* IGStickySectionsWaterfallCollectionViewLayout_h */