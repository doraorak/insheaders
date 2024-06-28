//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTWKWebView_h
#define RCTWKWebView_h
@import Foundation;

#include "RCTView.h"
#include "RCTAutoInsetsProtocol-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"
#include "WKScriptMessageHandler-Protocol.h"
#include "WKUIDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UIColor, WKNavigationAction, WKWebView;

@interface RCTWKWebView : RCTView<WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate, RCTAutoInsetsProtocol> {
  /* instance variables */
  UIColor *_savedBackgroundColor;
  id /* block */ _decisionHandler;
  WKNavigationAction *_navigationAction;
}

@property (copy, nonatomic) id /* block */ onLoadingStart;
@property (copy, nonatomic) id /* block */ onLoadingFinish;
@property (copy, nonatomic) id /* block */ onLoadingError;
@property (copy, nonatomic) id /* block */ onShouldStartLoadWithRequest;
@property (copy, nonatomic) id /* block */ onMessage;
@property (copy, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSDictionary *source;
@property (nonatomic) BOOL alwaysReloadOnSourceChange;
@property (nonatomic) BOOL messagingEnabled;
@property (copy, nonatomic) NSString *injectedJavaScript;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) double decelerationRate;
@property (nonatomic) BOOL allowsInlineMediaPlayback;
@property (nonatomic) BOOL bounces;
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) BOOL automaticallyAdjustContentInsets;
@property (nonatomic) BOOL useSharedCookieStorage;
@property (copy, nonatomic) NSArray *cookies;
@property (nonatomic) BOOL incognito;
@property (nonatomic) BOOL webviewDebuggingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)dynamicallyLoadWebKitIfAvailable;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didMoveToWindow;
- (void)setBackgroundColor:(id)color;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (void)refreshContentInset;
- (void)visitSource;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)postMessage:(id)message;
- (void)postMessage:(id)message targetOrigin:(id)origin;
- (void)layoutSubviews;
- (id)baseEvent;
- (id)eventForNavigationAction:(id)action;
- (void)shouldStartLoad:(BOOL)load;
- (id)webView:(id)view createWebViewWithConfiguration:(id)configuration forNavigationAction:(id)action windowFeatures:(id)features;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didReceiveAuthenticationChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)evaluateJS:(id)js thenCall:(id /* block */)call;
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame completionHandler:(id /* block */)handler;
- (void)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame completionHandler:(id /* block */)handler;
- (void)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame completionHandler:(id /* block */)handler;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)injectJavaScript:(id)script;
- (void)goForward;
- (void)goBack;
- (void)reload;
- (void)stopLoading;
@end

#endif /* RCTWKWebView_h */