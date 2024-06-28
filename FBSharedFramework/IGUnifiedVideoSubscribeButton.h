//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnifiedVideoSubscribeButton_h
#define IGUnifiedVideoSubscribeButton_h
@import Foundation;

#include "IGBouncyButton.h"

@class UIFont, UILabel;
@protocol IGUnifiedVideoSubscribeButtonDelegate;

@interface IGUnifiedVideoSubscribeButton : IGBouncyButton {
  /* instance variables */
  UILabel *_subscribeLabel;
  BOOL _isBordered;
}

@property (weak, nonatomic) NSObject<IGUnifiedVideoSubscribeButtonDelegate> *delegate;
@property (readonly, nonatomic) UIFont *titleLabelFont;

/* instance methods */
- (id)initWithBorder:(BOOL)border;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_didTapButton;
@end

#endif /* IGUnifiedVideoSubscribeButton_h */
