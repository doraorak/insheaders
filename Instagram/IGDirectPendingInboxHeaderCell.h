//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPendingInboxHeaderCell_h
#define IGDirectPendingInboxHeaderCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDSSegmentedPillBarViewDelegate-Protocol.h"
#include "IGDirectPendingInboxHeaderCellViewModel.h"

@class IGDSSegmentedPillBarView, NSString, UIView;
@protocol IGDirectPendingInboxHeaderCellDelegate;

@interface IGDirectPendingInboxHeaderCell : UICollectionViewCell<IGDSSegmentedPillBarViewDelegate> {
  /* instance variables */
  IGDirectPendingInboxHeaderCellViewModel *_viewModel;
  NSObject<IGDirectPendingInboxHeaderCellDelegate> *_delegate;
  UIView *_cellBodyContainerView;
  IGDSSegmentedPillBarView *_segmentedPillBarView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)updatedPillStylesFromViewModels:(id)models;
- (void)layoutSubviews;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
- (id)accessibilityElements;
- (void)segmentedPillBar:(id)bar didDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didSelectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didTapPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didLongPressPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldDeselectPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldSelectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willSelectPillAtIndex:(unsigned long long)index;
@end

#endif /* IGDirectPendingInboxHeaderCell_h */