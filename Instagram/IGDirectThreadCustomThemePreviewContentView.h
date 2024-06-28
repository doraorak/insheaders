//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadCustomThemePreviewContentView_h
#define IGDirectThreadCustomThemePreviewContentView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectTextMessageBubbleView.h"

@class IGDirectThreadTheme, IGLabel, IGUserSession;

@interface IGDirectThreadCustomThemePreviewContentView : UIView {
  /* instance variables */
  IGDirectTextMessageBubbleView *_topGroupedOutgoingTextBubbleView;
  IGDirectTextMessageBubbleView *_botttomGroupedOutgoingTextBubbleView;
  IGDirectTextMessageBubbleView *_incomingTextBubbleView;
  IGDirectTextMessageBubbleView *_outgoingTextBubbleView;
  struct CGSize { double width; double height; } _topGroupedTextBubbleSize;
  struct CGSize { double width; double height; } _bottomGroupedTextBubbleSize;
  struct CGSize { double width; double height; } _incomingTextBubbleSize;
  struct CGSize { double width; double height; } _outgoingTextBubbleSize;
  IGLabel *_timeStampLabel;
  IGLabel *_titleLabel;
  IGUserSession *_userSession;
  IGDirectThreadTheme *_theme;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* IGDirectThreadCustomThemePreviewContentView_h */
