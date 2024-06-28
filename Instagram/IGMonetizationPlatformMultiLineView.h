//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationPlatformMultiLineView_h
#define IGMonetizationPlatformMultiLineView_h
@import Foundation;

#include "UIView.h"
#include "IGMonetizationPlatformMultiLineViewModel.h"

@class IGStackLayout, UIView;

@interface IGMonetizationPlatformMultiLineView : UIView {
  /* instance variables */
  IGStackLayout *_titleStackLayout;
  UIView *_separator;
  IGMonetizationPlatformMultiLineViewModel *_viewModel;
}

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
@end

#endif /* IGMonetizationPlatformMultiLineView_h */
