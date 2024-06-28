//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCanvasFooterView_h
#define IGCanvasFooterView_h
@import Foundation;

#include "UIView.h"
#include "IGCanvasButtonCell.h"
#include "IGCanvasSwipeUpAnimator.h"
#include "IGCanvasSwipeUpView.h"
#include "IGCanvasSwipeUpViewModel.h"
#include "NSObject-Protocol.h"

@class IGGradientView, NSString, UIView;
@protocol IGCanvasFooterViewDelegate;

@interface IGCanvasFooterView : UIView<NSObject> {
  /* instance variables */
  IGGradientView *_gradientView;
  IGCanvasButtonCell *_button;
  NSObject<IGCanvasFooterViewDelegate> *_delegate;
  UIView *_borderView;
  IGCanvasSwipeUpView *_swipeUpView;
  IGCanvasSwipeUpAnimator *_swipeUpAnimator;
  BOOL _displaySwipeUpView;
  IGCanvasSwipeUpViewModel *_swipeUpViewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)canvasButtonCellDidTapButton:(id)button;
- (void)canvasSwipeUpViewDidTap;
@end

#endif /* IGCanvasFooterView_h */