//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveDarkOverlayView_h
#define IGLiveDarkOverlayView_h
@import Foundation;

#include "UIView.h"

@class IGLiveDarkOverlayViewModel, NSMutableArray, UIButton, UILabel, UIView, UIVisualEffectView;

@interface IGLiveDarkOverlayView : UIView {
  /* instance variables */
  UIView *_darkOverlay;
  UIVisualEffectView *_blurOverlay;
  UILabel *_titleLabel;
  UILabel *_descriptionLabel;
  IGLiveDarkOverlayViewModel *_darkOverlayViewModel;
  NSMutableArray *_overlayButtons;
  double _contentBottomInset;
  UIButton *_backgroundButton;
  UILabel *_topLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_overlayButtonTapped:(id)tapped;
@end

#endif /* IGLiveDarkOverlayView_h */