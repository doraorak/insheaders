//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInformativeTextView_h
#define IGInformativeTextView_h
@import Foundation;

#include "UIView.h"

@class IGLabel, IGTextField, UIButton, UILabel, UIView;

@interface IGInformativeTextView : UIView {
  /* instance variables */
  UILabel *_inlineDescriptionLabel;
  UIButton *_clearButton;
  UIButton *_checkmarkButton;
  UIButton *_errorButton;
  IGLabel *_placeholderTextView;
  BOOL _enableCenteredPlaceholder;
  BOOL _enablePaddedUnderline;
  UIView *_underlineView;
  int _underlinePadding;
  long long _inlineErrorLineNumber;
}

@property (readonly, nonatomic) IGTextField *textField;

/* instance methods */
- (id)initWithPlaceholder:(id)placeholder;
- (id)initWithCenteredPlaceholder:(id)placeholder;
- (id)initWithCenteredPlaceholder:(id)placeholder enablePaddedUnderline:(BOOL)underline;
- (id)initWithPlaceholder:(id)placeholder inlineErrorLineNumber:(long long)number enableCenteredPlaceholder:(BOOL)placeholder enablePaddedUnderline:(BOOL)underline;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setPlaceholder:(id)placeholder;
- (void)showPlaceholder;
- (void)_clearText;
@end

#endif /* IGInformativeTextView_h */
