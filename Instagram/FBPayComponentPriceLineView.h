//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentPriceLineView_h
#define FBPayComponentPriceLineView_h
@import Foundation;

#include "UIView.h"
#include "FBPayComponentPriceLineViewModel.h"
#include "FBPayExpressCheckoutContext.h"

@class UILabel;

@interface FBPayComponentPriceLineView : UIView {
  /* instance variables */
  FBPayExpressCheckoutContext *_ecpContext;
  UILabel *_descriptionLabel;
  UILabel *_amountLabel;
  FBPayComponentPriceLineViewModel *_viewModel;
}

/* instance methods */
- (id)initWithEcpContext:(id)context frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
@end

#endif /* FBPayComponentPriceLineView_h */