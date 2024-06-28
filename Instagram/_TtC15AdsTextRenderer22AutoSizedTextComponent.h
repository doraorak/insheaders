//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15AdsTextRenderer22AutoSizedTextComponent_h
#define _TtC15AdsTextRenderer22AutoSizedTextComponent_h
@import Foundation;

#include "UIView.h"
#include "ShowreelDynamicTextViewSwiftDelegate-Protocol.h"

@interface _TtC15AdsTextRenderer22AutoSizedTextComponent : UIView<ShowreelDynamicTextViewSwiftDelegate> { // (Swift)
  /* instance variables */
   textView;
   spec;
   config;
   onTruncationTap;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)showreelDynamicTextView:(id)view shouldExecute:(id)execute textFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC15AdsTextRenderer22AutoSizedTextComponent_h */
