//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectFilteredMessageCell_h
#define IGDirectFilteredMessageCell_h
@import Foundation;

#include "IGDirectMessageCell.h"
#include "IGDirectTextMessageBubbleView.h"

@interface IGDirectFilteredMessageCell : IGDirectMessageCell {
  /* instance variables */
  BOOL _isRevealed;
  struct CGSize { double width; double height; } _textBubbleSize;
  struct CGSize { double width; double height; } _tombstoneBubbleSize;
  IGDirectTextMessageBubbleView *_textBubbleView;
  IGDirectTextMessageBubbleView *_tombstoneBubbleView;
}

/* class methods */
+ (BOOL)needsSingleTapGesture;
+ (BOOL)needsDoubleTapGesture;
+ (BOOL)needsLongPressGesture;
+ (BOOL)needsAttachedBubbleView;
+ (BOOL)needsContainerStyling;
+ (BOOL)needsToPassTouchEvents;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory launcherSet:(id)set;
- (void)configureAccessibility;
- (struct CGSize { double x0; double x1; })messageContentSize;
@end

#endif /* IGDirectFilteredMessageCell_h */
