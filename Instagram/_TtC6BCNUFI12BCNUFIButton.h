//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC6BCNUFI12BCNUFIButton_h
#define _TtC6BCNUFI12BCNUFIButton_h
@import Foundation;

#include "UIControl.h"

@interface _TtC6BCNUFI12BCNUFIButton : UIControl { // (Swift)
  /* instance variables */
   type;
   shareButtonType;
   defaultColor;
   toggledState;
   delegate;
   shapeLayers;
   $__lazy_storage_$_label;
   tapPadding;
   hitTestVisualizer;
}

@property (nonatomic) BOOL highlighted;

/* instance methods */
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (void)didStartTappingButton:(id)button;
- (void)didEndTappingButtonOnPurpose:(id)purpose;
- (void)didLongPress:(id)press;
- (void)didEndTappingButton:(id)button;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC6BCNUFI12BCNUFIButton_h */
