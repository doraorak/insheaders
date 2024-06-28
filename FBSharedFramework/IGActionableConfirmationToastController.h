//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActionableConfirmationToastController_h
#define IGActionableConfirmationToastController_h
@import Foundation;

#include "FBTimer.h"
#include "IGActionableConfirmationProgressToastView.h"
#include "IGActionableConfirmationToastView.h"
#include "IGNotificationPresenter.h"
#include "IGSharedKeyboardObserver.h"
#include "NSObject-Protocol.h"

@class NSNumber, NSString, UIImpactFeedbackGenerator, UIView;

@interface IGActionableConfirmationToastController : NSObject<NSObject> {
  /* instance variables */
  UIView *_containerView;
  double _bottomInset;
  double _topInset;
  BOOL _displayingToastView;
  IGActionableConfirmationProgressToastView *_progressToastView;
  unsigned long long _configurationState;
  IGNotificationPresenter *_notificationPresenter;
  id /* block */ _tapActionBlock;
  id /* block */ _tapDualButtonLeftBlock;
  id /* block */ _tapDualButtonRightBlock;
  id /* block */ _tapToastBlock;
  FBTimer *_hideTimer;
  NSNumber *_customizedToastMargin;
  IGSharedKeyboardObserver *_sharedKeyboardObserver;
  UIImpactFeedbackGenerator *_feedbackGenerator;
  BOOL _isPrismToastsEnabled;
  BOOL _automaticallyAdjustsPositionForKeyboardPresentation;
  BOOL _toastViewDraggingEnabled;
  IGActionableConfirmationToastView *_confirmationToastView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContainerView:(id)view bottomInset:(double)inset;
- (id)initWithContainerView:(id)view bottomInset:(double)inset topInset:(double)inset;
- (void)dealloc;
- (void)configureWithViewModel:(id)model;
- (void)actionableConfirmationToastViewDidTapActionButton:(id)button;
- (void)actionableConfirmationToastViewDidToastView:(id)view;
- (void)actionableConfirmationToastViewDidTapDismissButton:(id)button;
- (void)actionableConfirmationToastViewDidTapLeftButton:(id)button;
- (void)actionableConfirmationToastViewDidTapRightButton:(id)button;
- (void)sharedKeyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)sharedKeyboardObserverKeyboardDidShow:(id)show;
- (void)sharedKeyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)sharedKeyboardObserverKeyboardDidHide:(id)hide;
- (double)_verticalOffsetForOrigin:(unsigned long long)origin;
- (void)actionableConfirmationProgressToastViewDidTapActionButton:(id)button;
@end

#endif /* IGActionableConfirmationToastController_h */
