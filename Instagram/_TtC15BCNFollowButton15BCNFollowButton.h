//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15BCNFollowButton15BCNFollowButton_h
#define _TtC15BCNFollowButton15BCNFollowButton_h
@import Foundation;

#include "UIControl.h"

@interface _TtC15BCNFollowButton15BCNFollowButton : UIControl { // (Swift)
  /* instance variables */
   notFollowingString;
   followingAttributedString;
   followingString;
   requestedString;
   loadingString;
   notFoundString;
   followBackString;
   possibleStringsForSizing;
   followState;
   buttonStyle;
   buttonSize;
   usernameForAccessibility;
   showFollowBackState;
   label;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* _TtC15BCNFollowButton15BCNFollowButton_h */
