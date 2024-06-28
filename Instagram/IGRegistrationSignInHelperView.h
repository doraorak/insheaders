//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationSignInHelperView_h
#define IGRegistrationSignInHelperView_h
@import Foundation;

#include "UIView.h"
#include "IGRegistrationSignInHelperScrollView.h"
#include "NSObject-Protocol.h"

@class IGRegistrationBackgroundView, NSString;
@protocol IGRegistrationSignInHelperViewDelegate;

@interface IGRegistrationSignInHelperView : UIView<NSObject> {
  /* instance variables */
  IGRegistrationSignInHelperScrollView *_signInHelperScrollView;
  IGRegistrationBackgroundView *_backgroundView;
}

@property (weak, nonatomic) NSObject<IGRegistrationSignInHelperViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame layoutSpec:(id)spec;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)_backButtonTapped;
- (void)signInHelperScrollViewDelegateDidTapSendButton:(id)button inputText:(id)text;
- (void)signInHelperScrollViewDelegateDidTapHelperButton:(id)button;
- (void)signInHelperScrollViewDelegateDidTapBackButton:(id)button;
- (void)signInHelperScrollViewDelegateDidTapSwitchToUsername:(id)username;
- (void)signInHelperScrollViewDelegateDidTapSwitchToPhone:(id)phone;
- (void)signInHelperScrollViewDelegateDidTapCountryCodeButton:(id)button;
- (void)signInHelperScrollViewDelegateDidTapFacebookButton:(id)button;
@end

#endif /* IGRegistrationSignInHelperView_h */
