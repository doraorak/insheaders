//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectComposerThreadInfoBar_h
#define IGDirectComposerThreadInfoBar_h
@import Foundation;

#include "UIView.h"
#include "IGDirectComposerAttachmentViewCloseButton.h"

@class UILabel, UIView;
@protocol IGDirectComposerThreadInfoBarDelegate;

@interface IGDirectComposerThreadInfoBar : UIView {
  /* instance variables */
  UIView *_lineView;
  IGDirectComposerAttachmentViewCloseButton *_closeButton;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
}

@property (weak, nonatomic) NSObject<IGDirectComposerThreadInfoBarDelegate> *delegate;

/* instance methods */
- (id)initWithThreadDisplayName:(id)name bizThreadThrottlingState:(unsigned long long)state;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapCloseButton:(id)button;
@end

#endif /* IGDirectComposerThreadInfoBar_h */