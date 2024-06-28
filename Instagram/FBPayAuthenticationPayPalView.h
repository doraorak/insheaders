//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayAuthenticationPayPalView_h
#define FBPayAuthenticationPayPalView_h
@import Foundation;

#include "UIView.h"
#include "FBPayActionButton.h"
#include "FBPayAuthenticationNavigationView.h"
#include "FBPayAuthenticationPayPalContent.h"
#include "FBPayCredentialAuthHeaderView.h"
#include "NSObject-Protocol.h"

@class NSString, UIView;
@protocol FBPayAuthenticationPayPalViewDelegate;

@interface FBPayAuthenticationPayPalView : UIView<NSObject> {
  /* instance variables */
  FBPayAuthenticationNavigationView *_navigationView;
  FBPayCredentialAuthHeaderView *_headerView;
  FBPayActionButton *_actionButton;
  UIView *_loadingMaskBackgroundView;
}

@property (retain, nonatomic) FBPayAuthenticationPayPalContent *content;
@property (weak, nonatomic) NSObject<FBPayAuthenticationPayPalViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)showLoadingView;
- (void)hideLoadingView;
- (void)_didTapOnActionButton;
- (void)navigationViewDidTapRightButton:(id)button;
- (void)navigationViewDidTapLeftButton:(id)button;
- (id)navigationViewTitle:(id)title;
- (id)navigationViewRightButtonTitle:(id)title;
- (void)credentialAuthHeaderViewTermsButton:(id)button;
- (void)credentialAuthHeaderViewDidTapHeaderLink:(id)link;
@end

#endif /* FBPayAuthenticationPayPalView_h */
