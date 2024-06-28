//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FOADraggableOverlayView_h
#define FOADraggableOverlayView_h
@import Foundation;

#include "UIView.h"
#include "FOAZAnimatableView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView;

@interface FOADraggableOverlayView : UIView<UIGestureRecognizerDelegate> {
  /* instance variables */
  UIPanGestureRecognizer *_panGestureRecognizer;
  FOAZAnimatableView *_draggableContainer;
  UIView *_contentView;
  long long _dragMovement;
  unsigned long long _viewAnchor;
  unsigned long long _initialViewAnchor;
  double _scale;
  struct CGSize { double width; double height; } _draggableContainerSize;
  struct CGPoint { double x; double y; } _initialDragPosition;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pendingFrameUpdate;
  id /* block */ _draggableOverlayDidMoveCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDragMovement:(long long)movement initialViewAnchor:(unsigned long long)anchor draggableOverlayDidMoveCallback:(id /* block */)callback;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (void)setContentView:(id)view;
- (id)contentView;
- (void)setAnchor:(unsigned long long)anchor;
- (unsigned long long)anchor;
- (void)moveContentViewToClosestAnchor;
- (void)updateSize:(struct CGSize { double x0; double x1; })size;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_moveView:(id)view;
@end

#endif /* FOADraggableOverlayView_h */