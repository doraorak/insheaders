//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPillCTAButton_h
#define IGPillCTAButton_h
@import Foundation;

#include "IGBouncyButton.h"

@class NSString, UIImageView, UILabel, UIView;

@interface IGPillCTAButton : IGBouncyButton {
  /* instance variables */
  UIView *_backdrop;
  UIImageView *_imageView;
  UILabel *_label;
  BOOL _rightAlignImage;
}

@property (nonatomic) BOOL isCollapsed;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long style;

/* instance methods */
- (id)initWithText:(id)text;
- (void)setImage:(id)image;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGPillCTAButton_h */