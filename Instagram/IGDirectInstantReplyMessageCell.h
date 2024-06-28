//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstantReplyMessageCell_h
#define IGDirectInstantReplyMessageCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDirectInstantReplyMessageCellDelegate-Protocol.h"
#include "IGDirectInstantReplyMessageViewModel.h"
#include "IGDirectTextMessageBubbleView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol FBMessagePowerupSupporting;

@interface IGDirectInstantReplyMessageCell : UICollectionViewCell<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGDirectTextMessageBubbleView *_textBubbleView;
  UITapGestureRecognizer *_tapGestureRecognizer;
  UILongPressGestureRecognizer *_touchDownGestureRecognizer;
  NSObject<FBMessagePowerupSupporting> *_messagePowerup;
  NSMutableArray *_powerupsViews;
}

@property (readonly, nonatomic) IGDirectInstantReplyMessageViewModel *viewModel;
@property (weak, nonatomic) NSObject<IGDirectInstantReplyMessageCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_didTouchDown:(id)down;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)messagePowerup:(id)powerup transformContainer:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })container;
- (void)messagePowerup:(id)powerup addViewToContainer:(id)container inFrontOfContent:(BOOL)content inFrontOfReactions:(BOOL)reactions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })messagePowerupContentBounds:(id)bounds;
- (void)messagePowerup:(id)powerup insertViewBelowTextView:(id)view;
- (void)messagePowerup:(id)powerup addViewToContent:(id)content;
- (void)messagePowerup:(id)powerup addViewToMaskedBubbleView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })messagePowerup:(id)powerup convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect fromContentToView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })messagePowerup:(id)powerup convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect fromContainerToView:(id)view;
- (void)messagePowerup:(id)powerup setTextViewColor:(id)color;
- (id)messagePowerup:(id)powerup tintImage:(id)image withGradientStartColor:(id)color gradientEndColor:(id)color;
- (void)messagePowerup:(id)powerup setTextViewUserInteractionEnabled:(BOOL)enabled;
@end

#endif /* IGDirectInstantReplyMessageCell_h */