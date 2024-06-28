//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksActionSecureWebViewWithOnChangeController_h
#define BKBloksActionSecureWebViewWithOnChangeController_h
@import Foundation;

#include "UIViewController.h"
#include "ASWebAuthenticationPresentationContextProviding-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"
#include "WKUIDelegate-Protocol.h"

@class ASWebAuthenticationSession, BKLispyEnvironment, BKLispyExpression, NSString, NSURL, UIViewController, WKWebView;

@interface BKBloksActionSecureWebViewWithOnChangeController : UIViewController<WKNavigationDelegate, WKUIDelegate, ASWebAuthenticationPresentationContextProviding> {
  /* instance variables */
  BKLispyEnvironment *_env;
  UIViewController *_topViewController;
  BKLispyExpression *_urlChangeCallback;
  BKLispyExpression *_webviewCompletionCallback;
  NSString *_callbackURLScheme;
  BOOL _isFinalURL;
  BOOL _isClosing;
  NSURL *_initialURL;
  ASWebAuthenticationSession *_webAuthSession;
}

@property (retain, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEnvironment:(id)environment topViewController:(id)controller urlchangeCallback:(id)callback webviewCompletionCallback:(id)callback callbackURLScheme:(id)urlscheme initialURL:(id)url;
- (void)viewDidLoad;
- (void)webView:(id)view didCommitNavigation:(id)navigation;
- (id)webView:(id)view createWebViewWithConfiguration:(id)configuration forNavigationAction:(id)action windowFeatures:(id)features;
- (void)_closeButtonPressed;
- (id)presentationAnchorForWebAuthenticationSession:(id)session;
@end

#endif /* BKBloksActionSecureWebViewWithOnChangeController_h */