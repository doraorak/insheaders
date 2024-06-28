//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEmojiButton_h
#define IGEmojiButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGEmojiModel.h"

@class UILabel;
@protocol IGEmojiButtonDelegate;

@interface IGEmojiButton : IGBouncyButton {
  /* instance variables */
  IGEmojiModel *_emojiModel;
  UILabel *_emojiLabel;
  BOOL _useLargeFontSize;
}

@property (weak, nonatomic) NSObject<IGEmojiButtonDelegate> *delegate;
@property (nonatomic) unsigned long long style;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_handleTap:(id)tap;
- (void)_handleLongPressWithGestureRecognizer:(id)recognizer;
@end

#endif /* IGEmojiButton_h */
