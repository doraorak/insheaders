//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGXpostingUpsellBloksBottomSheetLoadingView_h
#define IGXpostingUpsellBloksBottomSheetLoadingView_h
@import Foundation;

#include "UIView.h"

@class IGBloksSpinnerButton;

@interface IGXpostingUpsellBloksBottomSheetLoadingView : UIView {
  /* instance variables */
  IGBloksSpinnerButton *_loadingSpinnerButton;
  double _height;
  id /* block */ _onRemovedCallback;
}

/* instance methods */
- (id)initWithInitialHeight:(double)height onRemovedCallback:(id /* block */)callback;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)removeFromSuperview;
@end

#endif /* IGXpostingUpsellBloksBottomSheetLoadingView_h */
