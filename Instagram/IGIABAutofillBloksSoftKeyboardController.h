//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIABAutofillBloksSoftKeyboardController_h
#define IGIABAutofillBloksSoftKeyboardController_h
@import Foundation;

#include "IABAutofillBloksSoftKeyboardController.h"
#include "IABAutofillCoordinator.h"
#include "IABAutofillSoftKeyboardDelegate-Protocol.h"
#include "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "_TtP20AutofillBloksContext27AutofillBloksContextFactory_-Protocol.h"

@class BKBloksHostingView, IGKeyboardObserver, IGTooltipView, IGUserSession, NSDictionary, NSString, UIView, UIViewController;
@protocol IGIABAutofillBloksSoftKeyboardControllerDelegate;

@interface IGIABAutofillBloksSoftKeyboardController : NSObject<IGKeyboardObserverFrameChangeDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate> {
  /* instance variables */
  IABAutofillCoordinator *_autofillCoordinator;
  UIViewController *_navigationController;
  NSObject<IGIABAutofillBloksSoftKeyboardControllerDelegate> *_delegate;
  NSObject<IABAutofillSoftKeyboardDelegate> *_softKeyboardDelegate;
  BOOL _paymentSoftKeyboardEnabled;
  UIView *_paymentSoftKeyboardView;
  NSDictionary *_bloksSoftKeyboardResponse;
  BKBloksHostingView *_bloksView;
  struct CGPoint { double x; double y; } _softKeyboardPosition;
  double _keyboardAnimationDuration;
  IGKeyboardObserver *_keyboardObserver;
  IGUserSession *_userSession;
  IABAutofillBloksSoftKeyboardController *_iabAutofillBloksSoftKeyboardController;
  BOOL _tooltipShown;
  IGTooltipView *_tooltipView;
  NSString *_iabSessionID;
  NSObject<_TtP20AutofillBloksContext27AutofillBloksContextFactory_> *_autofillBloksContextFactory;
  BOOL _contactSoftKeyboardEnabled;
  UIView *_contactSoftKeyboardView;
  NSString *_softkeyboardRequestedField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAutofillCoordinator:(id)coordinator autofillService:(id)service softKeyboardDelegate:(id)delegate navigationController:(id)controller userSession:(id)session bloksSoftKeyboardResponse:(id)response delegate:(id)delegate iabSessionID:(id)id autofillBloksContextFactory:(id)factory;
- (void)hidePaymentSoftKeyboard;
- (void)hideContactSoftKeyboard;
- (void)_openBrowserSettings;
- (void)_contactSoftKeyboardOnAccept:(id)accept;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)_showToolTip;
@end

#endif /* IGIABAutofillBloksSoftKeyboardController_h */