//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryMapGuidesPlaceholderView_h
#define IGDiscoveryMapGuidesPlaceholderView_h
@import Foundation;

#include "UIView.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGShimmeringView, NSString, UICollectionView, UIView;

@interface IGDiscoveryMapGuidesPlaceholderView : UIView<UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
  /* instance variables */
  UIView *_containerView;
  UICollectionView *_collectionView;
  IGShimmeringView *_shimmeringView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
@end

#endif /* IGDiscoveryMapGuidesPlaceholderView_h */
