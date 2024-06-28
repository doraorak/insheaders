//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivatorHomeCell_h
#define IGActivatorHomeCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class UIButton, UILabel, UIView;
@protocol IGActivatorHomeCellDelegate;

@interface IGActivatorHomeCell : UICollectionViewCell {
  /* instance variables */
  UILabel *_primaryLabel;
  UILabel *_secondaryLabel;
  UIView *_iconView;
  UIButton *_actionButton;
  UIView *_cardView;
}

@property (weak, nonatomic) NSObject<IGActivatorHomeCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_activatorCellButtonTapped;
- (void)_activatorCellButtonTouchUp;
- (void)_activatorCellButtonTouchDown;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* IGActivatorHomeCell_h */
