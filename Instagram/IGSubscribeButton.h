//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSubscribeButton_h
#define IGSubscribeButton_h
@import Foundation;

#include "UIView.h"
#include "IGSubscribeButtonViewModel.h"

@class UILabel, UITapGestureRecognizer;
@protocol IGSubscribeButtonDelegate;

@interface IGSubscribeButton : UIView {
  /* instance variables */
  UITapGestureRecognizer *_tapRecognizer;
  IGSubscribeButtonViewModel *_viewModel;
  UILabel *_titleLabel;
}

@property (weak, nonatomic) NSObject<IGSubscribeButtonDelegate> *delegate;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)configureWithViewModel:(id)model;
- (void)_didTapButton;
@end

#endif /* IGSubscribeButton_h */