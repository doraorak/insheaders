//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFullScreenTransitionAnimator_h
#define IGFullScreenTransitionAnimator_h
@import Foundation;

#include "IGKeyboardObserver.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIColor, UIImage, UIView, UIViewController;

@interface IGFullScreenTransitionAnimator : NSObject<IGKeyboardObserverShowDelegate, UIViewControllerAnimatedTransitioning> {
  /* instance variables */
  BOOL _translateDismissalSourceRectIfKeyboardPresents;
  BOOL _useCustomInitialDismissCenter;
  UIImage *_topBarSnapshot;
  UIImage *_bottomBarSnapshot;
  double _finalCornerRadius;
  UIViewController *_sourceController;
  IGKeyboardObserver *_keyboardObserver;
  long long _presentKeyboardAnimationCurve;
  double _presentKeyboardDuration;
  double _presentKeyboardTranslation;
  struct CGPoint { double x; double y; } _initialCenterForDismiss;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (readonly, nonatomic) BOOL isPresenting;
@property (retain, nonatomic) UIView *mediaView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect sourceController:(id)controller isPresenting:(BOOL)presenting;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
@end

#endif /* IGFullScreenTransitionAnimator_h */