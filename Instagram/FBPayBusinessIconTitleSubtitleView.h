//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessIconTitleSubtitleView_h
#define FBPayBusinessIconTitleSubtitleView_h
@import Foundation;

#include "UIView.h"

@class NSArray, UILabel, UIView;

@interface FBPayBusinessIconTitleSubtitleView : UIView {
  /* instance variables */
  UIView *_imageWrapperView;
  NSArray *_constraints;
  BOOL _centralizeTitleLabelVerticallyIfNeeded;
  struct FBPayBusinessIconTitleSubtitleViewIconConfiguration { double borderWidth; double cornerRadius; double iconDimension; struct CGColor *borderColor; } _iconConfiguration;
}

@property (retain, nonatomic) UIView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

/* instance methods */
- (id)initWithViewConfig:(id)config iconConfiguration:(struct FBPayBusinessIconTitleSubtitleViewIconConfiguration { double x0; double x1; double x2; struct CGColor * x3; })configuration centralizeTitleLabelVerticallyIfNeeded:(BOOL)needed;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_configureElement:(id)element;
- (void)setupConstraints;
- (void)_setupConstraintsForLables:(id)lables;
@end

#endif /* FBPayBusinessIconTitleSubtitleView_h */
