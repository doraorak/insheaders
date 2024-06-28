//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC10BCNLoginUI16BCNLoginUserCard_h
#define _TtC10BCNLoginUI16BCNLoginUserCard_h
@import Foundation;

#include "UIButton.h"

@interface _TtC10BCNLoginUI16BCNLoginUserCard : UIButton { // (Swift)
  /* instance variables */
   model;
   textLabel;
   usernameLabel;
   secondaryTextLabel;
   iconButton;
   $__lazy_storage_$_accessoryImageView;
   delegate;
}

@property (nonatomic) BOOL highlighted;

/* instance methods */
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)didTapLoginButton;
@end

#endif /* _TtC10BCNLoginUI16BCNLoginUserCard_h */
