//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialRightChevronWithTextButton_h
#define IGSundialRightChevronWithTextButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGEDRViewType-Protocol.h"

@class NSString, UIColor, UIImageView, UILabel;

@interface IGSundialRightChevronWithTextButton : IGBouncyButton<IGEDRViewType> {
  /* instance variables */
  UILabel *_titleLabel;
  UIImageView *_chevronImageView;
  BOOL _roundButton;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (void)setEDR:(BOOL)edr;
@end

#endif /* IGSundialRightChevronWithTextButton_h */