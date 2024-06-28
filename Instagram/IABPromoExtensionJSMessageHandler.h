//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABPromoExtensionJSMessageHandler_h
#define IABPromoExtensionJSMessageHandler_h
@import Foundation;

@class NSDictionary, NSString, NSURL;
@protocol FBWebView, IABPromoExtensionJSMessageHandlerDelegate;

@interface IABPromoExtensionJSMessageHandler : NSObject {
  /* instance variables */
  NSObject<IABPromoExtensionJSMessageHandlerDelegate> *_delegate;
  NSString *_jsCallBackHandlerName;
  NSString *_nonce;
  NSObject<FBWebView> *_webView;
  NSDictionary *_messageParams;
  NSURL *_websiteURL;
  BOOL _debugMode;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate debugMode:(BOOL)mode;
- (void)handleScriptMessageFromWebView:(id)view frame:(id)frame websiteURL:(id)url messageName:(id)name messageParams:(id)params;
- (void)sendPerfomAutofillActionMessageToJS;
- (void)_handleSendPromoCodeAutofillResult;
- (void)_handleAutofillRequestWithPromoCode:(id)code;
- (void)_handleRequestPerformAutofillAction:(BOOL)action;
- (void)_setNonceToWebView;
- (id)_validateJSCallbackId;
- (BOOL)_validateNonceFromMessageParams:(id)params;
- (id)_jsCallbackFromParams:(id)params;
@end

#endif /* IABPromoExtensionJSMessageHandler_h */
