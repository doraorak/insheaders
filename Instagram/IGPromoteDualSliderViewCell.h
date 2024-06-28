//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteDualSliderViewCell_h
#define IGPromoteDualSliderViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGPromoteDualSliderViewModel.h"
#include "NSObject-Protocol.h"

@class IGCoreTextView, IGLabeledRangeSlider, NSNumber, NSString;
@protocol IGPromoteDualSliderViewCellDelegate;

@interface IGPromoteDualSliderViewCell : UICollectionViewCell<NSObject> {
  /* instance variables */
  IGCoreTextView *_titleView;
  IGLabeledRangeSlider *_sliderView;
  IGCoreTextView *_valueView;
  NSNumber *_selectedMinValue;
  NSNumber *_selectedMaxValue;
}

@property (copy, nonatomic) IGPromoteDualSliderViewModel *viewModel;
@property (weak, nonatomic) NSObject<IGPromoteDualSliderViewCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)heightThatFitsWithViewModel:(id)model width:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)sliderDidChangeMinValue:(id)value;
- (void)sliderDidChangeMaxValue:(id)value;
- (void)sliderDidBeginMinThumbSliding:(id)sliding;
- (void)sliderDidBeginMaxThumbSliding:(id)sliding;
- (void)sliderDidEndMinThumbSliding:(id)sliding;
- (void)sliderDidEndMaxThumbSliding:(id)sliding;
@end

#endif /* IGPromoteDualSliderViewCell_h */
