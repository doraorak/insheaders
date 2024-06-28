//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBWKWebViewDelegateAdaptor_h
#define FBWKWebViewDelegateAdaptor_h
@import Foundation;

#include "ClickIDConfigs.h"
#include "FBPolicyZoneZonedValue.h"
#include "FBProxyWebView.h"
#include "FBWKWebView.h"
#include "IClickIDPool.h"
#include "WKNavigationDelegate-Protocol.h"
#include "WKScriptMessageHandler-Protocol.h"
#include "WKScriptMessageHandlerWithReply-Protocol.h"
#include "WKUIDelegate-Protocol.h"
#include "_TtC16IABWebNavigation21PopupInplaceNavigator.h"
#include "_TtP16IABLegacyAdapter24LegacyJSInjectionHandler_-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol FBWebViewDelegate;

@interface FBWKWebViewDelegateAdaptor : NSObject<WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, WKScriptMessageHandlerWithReply, _TtP16IABLegacyAdapter24LegacyJSInjectionHandler_> {
  /* instance variables */
  FBProxyWebView *_proxyWebView;
  NSString *_initialClickID;
  NSString *_clickID;
  NSString *_clickIDCombined;
  NSMutableDictionary *_fbcParams;
  IClickIDPool *_clickIDPool;
  ClickIDConfigs *_clickIDConfigs;
  BOOL _needsSendCookieHeader;
  BOOL _needsBreakCookieForwardingChain;
  NSDictionary *_cookieHeaders;
  BOOL _hasUserEpdOptOut;
  BOOL _enableArchV2PopupNavigator;
  NSMutableDictionary *_domainClickIDMap;
  NSMutableDictionary *_domainFbcParamMap;
  NSMutableDictionary *_domainClickIDTSMap;
  id /* block */ _JSAlertCompletionHandler;
  id /* block */ _JSConfirmCompletionHandler;
  id /* block */ _JSInputCompletionHandler;
}

@property (weak, nonatomic) FBWKWebView *owner;
@property (weak, nonatomic) NSObject<FBWebViewDelegate> *delegate;
@property (readonly, nonatomic) NSString *currentClickID;
@property (retain, nonatomic) _TtC16IABWebNavigation21PopupInplaceNavigator *popupInplaceNavigator;
@property (retain, nonatomic) NSObject<WKNavigationDelegate> *v2WebViewNavigationDelegate;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *customUserAgent;
@property (readonly, nonatomic) FBPolicyZoneZonedValue *urlRequest;

/* instance methods */
- (id)initWithOwner:(id)owner enableArchV2PopupNavigator:(BOOL)navigator;
- (void)dealloc;
- (void)setClickID:(id)id;
- (void)setClickIDCombined:(id)idcombined;
- (void)setHasUserEpdOptOut:(BOOL)out;
- (void)setClickIDPool:(id)idpool;
- (void)setClickIDConfigs:(id)idconfigs;
- (void)setFbcParams:(id)params;
- (void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view didReceiveAuthenticationChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)webView:(id)view didCommitNavigation:(id)navigation;
- (void)webView:(id)view didStartProvisionalNavigation:(id)navigation;
- (void)webView:(id)view didReceiveServerRedirectForProvisionalNavigation:(id)navigation;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)webView:(id)view decidePolicyForNavigationResponse:(id)response decisionHandler:(id /* block */)handler;
- (void)webViewWebContentProcessDidTerminate:(id)terminate;
- (id)webView:(id)view createWebViewWithConfiguration:(id)configuration forNavigationAction:(id)action windowFeatures:(id)features;
- (void)webViewDidClose:(id)close;
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame completionHandler:(id /* block */)handler;
- (void)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame completionHandler:(id /* block */)handler;
- (void)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame completionHandler:(id /* block */)handler;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (id)emptyClickIDReasonToString:(long long)string;
- (id)browserPropertiesErrorMsgTypeToString:(long long)string browserPropertiesErrorMsgCustomString:(id)string;
- (id)initialClickID;
- (id)currentClickIDCombined:(id)idcombined;
- (id)getCombinedVisitedClickID:(id)id domain:(id)domain;
- (id)getClickIDWithDomainFromMap:(id)map;
- (id)getFbcParamWithDomainFromMap:(id)map queryParam:(id)param;
- (void)addToDomainClickIDMap:(id)idmap forKey:(id)key;
- (void)addToDomainFbcParamMap:(id)map forDomain:(id)domain forQueryParam:(id)param;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message replyHandler:(id /* block */)handler;
- (id)getClickIDForDomain:(id)domain;
- (id)getFbcParamForDomain:(id)domain queryParam:(id)param;
- (BOOL)isLoadingBlankPageForResetting;
- (void)updateNavigationState;
- (void)updateInteractiveTime;
- (void)addSubview:(id)subview;
@end

#endif /* FBWKWebViewDelegateAdaptor_h */
