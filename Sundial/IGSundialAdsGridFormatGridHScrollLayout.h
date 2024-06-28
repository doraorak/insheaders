//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAdsGridFormatGridHScrollLayout_h
#define IGSundialAdsGridFormatGridHScrollLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"
#include "IGSundialAdsGridPagesProvider-Protocol.h"

@class NSString;

@interface IGSundialAdsGridFormatGridHScrollLayout : UICollectionViewLayout<IGSundialAdsGridPagesProvider> {
  /* instance variables */
  BOOL _isCTAEnabled;
  BOOL _isExtendedHeadlineEnabled;
  BOOL _isFlexibleCardHeightEnabled;
  BOOL _isFlexibleCardHeightSquareCardDesignEnabled;
  BOOL _isThreeRowGridEnabled;
  long long _gridRowCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIsCTAEnabled:(BOOL)ctaenabled isExtendedHeadlineEnabled:(BOOL)enabled isFlexibleCardHeightEnabled:(BOOL)enabled isFlexibleCardHeightSquareCardDesignEnabled:(BOOL)enabled isThreeRowGridEnabled:(BOOL)enabled;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (long long)numberOfPages;
- (double)fractionalIndex;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndexPath:(id)path;
- (BOOL)_hasEnoughSpaceForThreeRows;
- (long long)_columnIndex:(id)index;
- (long long)_rowIndex:(id)index;
- (BOOL)_isScrollable;
@end

#endif /* IGSundialAdsGridFormatGridHScrollLayout_h */
