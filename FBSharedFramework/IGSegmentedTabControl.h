//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSegmentedTabControl_h
#define IGSegmentedTabControl_h
@import Foundation;

#include "UIControl.h"
#include "IGKVOHandle.h"
#include "IGSegmentedTabControlConfiguration.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView, UIScrollView, UIView;

@interface IGSegmentedTabControl : UIControl<UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
  /* instance variables */
  UICollectionView *_collectionView;
  UIView *_inchwormView;
  IGKVOHandle *_contentOffsetHandle;
  UIScrollView *_pageScrollView;
  double _interPageSpacing;
  double _interItemSpacing;
  BOOL _needsToScroll;
  BOOL _shouldMaximizeScrollingCellWidth;
  IGSegmentedTabControlConfiguration *_config;
  int _segmentedTabType;
  NSArray *_segmentWidths;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _scrollContentInsets;
}

@property (copy, nonatomic) NSArray *segments;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(id)config pageScrollView:(id)view;
- (id)initWithConfig:(id)config pageScrollView:(id)view interPageSpacing:(double)spacing interItemSpacing:(double)spacing;
- (void)dealloc;
- (void)setEnabled:(BOOL)enabled;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)path;
@end

#endif /* IGSegmentedTabControl_h */
