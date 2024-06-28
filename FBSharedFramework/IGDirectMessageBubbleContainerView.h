//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageBubbleContainerView_h
#define IGDirectMessageBubbleContainerView_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGDirectMessageAttachedBubbleBorderMaskView.h"
#include "IGDirectMessageBubbleView.h"
#include "IGDirectMessageCellAttachedBubbleViewLayoutSpec.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol IGDirectMessageBubbleContainerViewDelegate><IGDirectMessageBubbleContainerViewSupporting><IGDirectMessageAttachedBubbleViewDelegate><IGDirectMessageAttachedMultiReactViewDelegate, IGDirectMessageViewModelProtocol, UIView<IGDirectMessageAttachedView;

@interface IGDirectMessageBubbleContainerView : IGPassthroughView<UIGestureRecognizerDelegate> {
  /* instance variables */
  UIPanGestureRecognizer *_panGestureRecognizer;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
  UITapGestureRecognizer *_tapGestureRecognizer;
  BOOL _touchesBegan;
  IGDirectMessageAttachedBubbleBorderMaskView *_attachedBubbleBorderMaskView;
  double _reactionViewOriginX;
  UIView *_maskedContainerViewForAttachedBubbles;
  NSObject<IGDirectMessageViewModelProtocol> *_viewModel;
  IGDirectMessageCellAttachedBubbleViewLayoutSpec *_reactionsViewLayoutSpec;
  IGDirectMessageCellAttachedBubbleViewLayoutSpec *_commentsBubbleViewLayoutSpec;
  NSObject<IGDirectMessageBubbleContainerViewDelegate><IGDirectMessageBubbleContainerViewSupporting><IGDirectMessageAttachedBubbleViewDelegate><IGDirectMessageAttachedMultiReactViewDelegate> *_delegate;
  long long _swipeDirection;
  IGDirectMessageBubbleView *_messageContentView;
  UIView<IGDirectMessageAttachedView> *_reactionsView;
  UIView<IGDirectMessageAttachedView> *_commentsView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame delegate:(id)delegate;
- (void)_didReceiveLongPress:(id)press;
- (void)layoutSubviews;
- (void)_setupDropShadow;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)change;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_didPanContentView:(id)view;
@end

#endif /* IGDirectMessageBubbleContainerView_h */