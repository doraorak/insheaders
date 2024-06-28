//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGDPRConsentParentalContactViewController_h
#define IGGDPRConsentParentalContactViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAPIClient-Protocol.h"
#include "IGGDPRConsentContext.h"
#include "IGGDPRConsentDataSource.h"
#include "IGGDPRConsentLayoutSpec.h"
#include "IGGDPRConsentLoadingOverlayView.h"
#include "IGGDPRConsentLogger.h"
#include "IGGDPRConsentNavigationPresenter.h"
#include "IGGDPRConsentParentalContactView.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"

@class IGKeyboardObserver, IGUserSession, NSString;

@interface IGGDPRConsentParentalContactViewController : IGViewController<IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGGDPRConsentDataSource *_consentDataSource;
  IGGDPRConsentContext *_consentContext;
  IGGDPRConsentParentalContactView *_parentalContactView;
  IGGDPRConsentLoadingOverlayView *_loadingOverlayView;
  IGGDPRConsentLogger *_logger;
  IGGDPRConsentLayoutSpec *_layoutSpec;
  NSObject<IGAPIClient> *_networker;
  IGGDPRConsentNavigationPresenter *_presenter;
  IGKeyboardObserver *_keyboardObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session consentDataSource:(id)source consentContext:(id)context networker:(id)networker navigationPresenter:(id)presenter;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)onCancelModal;
- (void)GDPRConsentParentalContactViewDidTapSubmitButton;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
@end

#endif /* IGGDPRConsentParentalContactViewController_h */
