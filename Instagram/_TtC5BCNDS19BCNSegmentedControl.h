//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC5BCNDS19BCNSegmentedControl_h
#define _TtC5BCNDS19BCNSegmentedControl_h
@import Foundation;

#include "IGBaseView.h"
#include "IGScrollViewListener-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@interface _TtC5BCNDS19BCNSegmentedControl : IGBaseView<IGScrollViewListener, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> { // (Swift)
  /* instance variables */
   collectionView;
   hairline;
   inchworm;
   hairlineHeight;
   inchwormHeight;
   inchwormGrowthMultiplier;
   lastScrollOffset;
   previousLastScrollOffset;
   selectedIndex;
   viewControllers;
   contentInsets;
   collectionViewWidth;
   intertabSpacing;
   delegate;
   titleDataSource;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)scrollViewDidScroll:(id)scroll;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didUnhighlightItemAtIndexPath:(id)path;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (double)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(long long)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC5BCNDS19BCNSegmentedControl_h */