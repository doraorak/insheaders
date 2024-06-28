//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPHeroCarouselCollectionViewLayout_h
#define IGShoppingPDPHeroCarouselCollectionViewLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"

@class NSDictionary, UICollectionViewLayoutAttributes;

@interface IGShoppingPDPHeroCarouselCollectionViewLayout : UICollectionViewLayout {
  /* instance variables */
  NSDictionary *_layoutCache;
  UICollectionViewLayoutAttributes *_placeholderAttrs;
  struct CGSize { double width; double height; } _contentSize;
  BOOL _displayShimmeringPlaceholder;
  long long _itemSizeMode;
}

/* instance methods */
- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)path;
- (void)invalidateLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
@end

#endif /* IGShoppingPDPHeroCarouselCollectionViewLayout_h */
