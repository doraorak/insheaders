//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBWebViewProvider_h
#define FBWebViewProvider_h
@import Foundation;

#include "FBTRInterceptionConfig.h"

@class NSArray, NSString;
@protocol FBWebViewAlertHandler, FBWebViewAnalytics, {FBWKWebViewProviderInitParams="analytics"@"<FBWebViewAnalytics>""alertHandler"@"<FBWebViewAlertHandler>""hostsForCookieInjector"@"NSArray""enableAutomaticMediaPlayback"B"enablePaymentAutofill"B"trInterceptionConfig"@"FBTRInterceptionConfig""injectPCMJSToAllFrames"B"enableTextSizeInherit"B"textSizeInheritValues"@"NSString""autofillOdOverride"@"NSString""allowPIPMediaPlayback"B"enableITPLoginFlow"B"enableCookieHeaderFiddlingForITP"B"enableAddingLandingURLToClickID"B"landingURLDelimiter"@"NSString""enableReplacingAEMPayloadWithTokenForClickID"B"enableClickIDAttachingAfterRedirections"B"shouldHandleBrowserPropertiesJSRequest"B"shouldHandleBrowserPropertiesForEpdOptIn"B"shouldLimitJSExecutionScope"B"enableArchV2PopupNavigator"B"enableNavigationDecisionOnDealloc"B"enableUserInteractionDetectionFix"B"enableJSCompletionHandlerFix"B"defaultUserAgent"@"NSString""enableUserAgentQuirkFix"B"expandableFooterEnabled"B"useIabAutofillQRT"B"enableWebViewV2"B"enableMultiWindow"B"enableContentfulPaintLogging"B"enableArchV2JSEvaluation"B"enablePaymentAutofillStaticJsInjection"B"productID"@"NSString"};

@interface FBWebViewProvider : NSObject

@property (retain, nonatomic) NSObject<FBWebViewAnalytics> *analytics;
@property (retain, nonatomic) NSObject<FBWebViewAlertHandler> *alertHandler;
@property (copy, nonatomic) NSArray *hostsForCookieInjector;
@property (nonatomic) BOOL enableAutomaticMediaPlayback;
@property (nonatomic) BOOL enablePaymentAutofill;
@property (retain, nonatomic) FBTRInterceptionConfig *trInterceptionConfig;
@property (nonatomic) BOOL injectPCMJSToAllFrames;
@property (nonatomic) BOOL enableTextSizeInherit;
@property (retain, nonatomic) NSString *textSizeInheritValues;
@property (retain, nonatomic) NSString *autofillOdOverride;
@property (nonatomic) BOOL allowPIPMediaPlayback;
@property (nonatomic) BOOL enableITPLoginFlow;
@property (nonatomic) BOOL enableCookieHeaderFiddlingForITP;
@property (nonatomic) BOOL enableAddingLandingURLToClickID;
@property (retain, nonatomic) NSString *landingURLDelimiter;
@property (nonatomic) BOOL enableReplacingAEMPayloadWithTokenForClickID;
@property (nonatomic) BOOL enableClickIDAttachingAfterRedirections;
@property (nonatomic) BOOL shouldHandleBrowserPropertiesJSRequest;
@property (nonatomic) BOOL shouldHandleBrowserPropertiesForEpdOptIn;
@property (nonatomic) BOOL shouldLimitJSExecutionScope;
@property (nonatomic) BOOL enableArchV2PopupNavigator;
@property (nonatomic) BOOL enableNavigationDecisionOnDealloc;
@property (nonatomic) BOOL enableUserInteractionDetectionFix;
@property (nonatomic) BOOL enableJSCompletionHandlerFix;
@property (copy, nonatomic) NSString *defaultUserAgent;
@property (nonatomic) BOOL enableUserAgentQuirkFix;
@property (nonatomic) BOOL enableWebViewInitParamUsage;
@property (nonatomic) BOOL expandableFooterEnabled;
@property (nonatomic) BOOL useIabAutofillQRT;
@property (nonatomic) BOOL enableArchV2JSEvaluation;
@property (nonatomic) struct FBWKWebViewProviderInitParams { id x0; id x1; id x2; BOOL x3; BOOL x4; id x5; BOOL x6; BOOL x7; id x8; id x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; id x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; id x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; id x33; } params;
@property (nonatomic) BOOL enableWebViewV2;
@property (nonatomic) BOOL enableMultiWindow;
@property (nonatomic) BOOL enablePaymentAutofillStaticJsInjection;
@property (nonatomic) BOOL enableContentfulPaintLogging;

/* instance methods */
- (id)initWithParams:(struct FBWKWebViewProviderInitParams { id x0; id x1; id x2; BOOL x3; BOOL x4; id x5; BOOL x6; BOOL x7; id x8; id x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; id x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; id x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; id x33; })params;
- (id)init;
- (id)webViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame productID:(id)id processPoolContainer:(id)container dataStoreContainer:(id)container privacyContext:(id)context;
- (id)webViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame productID:(id)id processPoolContainer:(id)container dataStoreContainer:(id)container privacyContext:(id)context analyticsInfo:(id)info;
@end

#endif /* FBWebViewProvider_h */