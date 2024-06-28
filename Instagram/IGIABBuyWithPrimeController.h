//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIABBuyWithPrimeController_h
#define IGIABBuyWithPrimeController_h
@import Foundation;

#include "FBScriptMessageHandling-Protocol.h"
#include "IABBuyWithPrimeControllerDelegate-Protocol.h"
#include "IABBuyWithPrimeCoordinator.h"
#include "IABBuyWithPrimePostClickDataExtension.h"
#include "IABLoggingCoordinator.h"

@class IGUserSession, NSDictionary, NSString, UINavigationController;

@interface IGIABBuyWithPrimeController : NSObject<FBScriptMessageHandling> {
  /* instance variables */
  IGUserSession *_session;
  IABBuyWithPrimeCoordinator *_iabBuyWithPrimeCoordinator;
  IABBuyWithPrimePostClickDataExtension *_dataExtension;
  UINavigationController *_navigationController;
  BOOL _hasSetLocalStorage;
  NSDictionary *_extraData;
  NSString *_cuifExtraParams;
  IABLoggingCoordinator *_loggingCoordinator;
}

@property (weak, nonatomic) NSObject<IABBuyWithPrimeControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedMessageNames;

/* instance methods */
- (id)initWithSession:(id)session dataExtension:(id)extension delegate:(id)delegate extraData:(id)data loggingCoordinator:(id)coordinator;
- (void)setBuyWithPrimeCookieInWebView:(id)view url:(id)url;
- (void)setNavigationController:(id)controller;
- (BOOL)shouldSetLocalStorage;
- (void)setBuyWithPrimeLocalStorageInWebView:(id)view url:(id)url;
- (BOOL)shouldLoadURL:(id)url;
- (id)overrideRequestHeader:(id)header;
- (void)logBuyWithPrimeIABEvent:(unsigned long long)iabevent extraLoggingParams:(id)params;
- (void)exchangeTokenFromURL:(id)url webView:(id)view;
- (void)handleScriptMessageFromWebView:(id)view frame:(id)frame websiteURL:(id)url messageName:(id)name messageParams:(id)params;
- (BOOL)requireAppId;
- (BOOL)requireHttps;
- (BOOL)requireDomainToBeAllowlisted;
- (BOOL)supportsCallback;
- (BOOL)requireDelegateSetUp;
- (void)promptGenericErrorToast;
- (void)promptDenyLinkAccountToast;
- (void)promptLinkAccountSuccessToast;
- (void)openAuthURL:(id)url;
@end

#endif /* IGIABBuyWithPrimeController_h */
