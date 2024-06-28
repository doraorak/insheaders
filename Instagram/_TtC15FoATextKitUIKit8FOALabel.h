//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15FoATextKitUIKit8FOALabel_h
#define _TtC15FoATextKitUIKit8FOALabel_h
@import Foundation;

#include "UIView.h"

@class NSString;

@interface _TtC15FoATextKitUIKit8FOALabel : UIView { // (Swift)
  /* instance variables */
   attributedText;
   maximumNumberOfLines;
   lineBreakMode;
   truncationString;
   textPadding;
   font;
   textColor;
   alignment;
   internalTextView;
   preferredMaxLayoutWidth;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* _TtC15FoATextKitUIKit8FOALabel_h */
