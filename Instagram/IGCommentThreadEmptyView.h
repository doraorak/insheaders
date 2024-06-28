//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentThreadEmptyView_h
#define IGCommentThreadEmptyView_h
@import Foundation;

#include "UIView.h"
#include "IGKeyboardObserverFrameChangeDelegate-Protocol.h"

@class IGKeyboardObserver, IGStackLayout, NSString, UILabel;

@interface IGCommentThreadEmptyView : UIView<IGKeyboardObserverFrameChangeDelegate> {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGStackLayout *_stackLayout;
  IGKeyboardObserver *_keyboardObserver;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleKeyboardRect;
  long long _viewType;
  double _navBarHeight;
  double _composerHeight;
  BOOL _showKeyboardWhenViewAppears;
  double _keyboardPercentPresented;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
@end

#endif /* IGCommentThreadEmptyView_h */