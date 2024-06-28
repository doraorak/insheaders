//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksCommerceWebView_h
#define BKBloksCommerceWebView_h
@import Foundation;

#include "UIView.h"
#include "WKNavigationDelegate-Protocol.h"

@class BKContext, NSString, WKWebView;
@protocol BKBloksCommerceWebViewDelegate;

@interface BKBloksCommerceWebView : UIView<WKNavigationDelegate> {
  /* instance variables */
  WKWebView *_webView;
  NSObject<BKBloksCommerceWebViewDelegate> *_delegate;
  NSString *_sourceURI;
  NSString *_paramsString;
  NSString *_methodName;
  BKContext *_context;
  BOOL _needsToPost;
  BOOL _enableAuthCookies;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setModel:(id)model;
- (void)setContext:(id)context;
- (void)setDelegate:(id)delegate;
- (void)didMoveToWindow;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)webView:(id)view didCommitNavigation:(id)navigation;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (void)layoutSubviews;
@end

#endif /* BKBloksCommerceWebView_h */
