//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGridViewHeaderLabel_h
#define IGGridViewHeaderLabel_h
@import Foundation;

#include "UICollectionViewCell.h"

@class IGTapButton, UILabel, UIView;
@protocol IGGridViewHeaderLabelDelegate;

@interface IGGridViewHeaderLabel : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) IGTapButton *secondaryButton;
@property (weak, nonatomic) NSObject<IGGridViewHeaderLabelDelegate> *delegate;
@property (retain, nonatomic) UIView *secondaryView;

/* class methods */
+ (double)height;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setText:(id)text;
- (void)setSecondaryText:(id)text;
- (void)_didTapMore;
@end

#endif /* IGGridViewHeaderLabel_h */