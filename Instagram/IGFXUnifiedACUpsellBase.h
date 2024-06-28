//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFXUnifiedACUpsellBase_h
#define IGFXUnifiedACUpsellBase_h
@import Foundation;

#include "FXUnifiedACUpsellContent.h"
#include "IGFXUnifiedACUpsellImpressionLogger.h"
#include "IGFXUpsellDataFetcher.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSArray, NSString;

@interface IGFXUnifiedACUpsellBase : NSObject<NSObject> {
  /* instance variables */
  IGFXUpsellDataFetcher *_dataFetcher;
  BOOL _alreadyPrefetchedEligibility;
  NSArray *_opaqueVerifiedNativeAuthData;
}

@property (nonatomic) long long linkingScenario;
@property (retain, nonatomic) NSString *targetAccountName;
@property (nonatomic) BOOL isUpsellEligible;
@property (retain, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) IGFXUnifiedACUpsellImpressionLogger *impressionLogger;
@property (weak, nonatomic) NSString *entryPoint;
@property (retain, nonatomic) FXUnifiedACUpsellContent *prescreenContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEntryPoint:(id)point userSession:(id)session;
- (void)prefetchEligibilityWithMultiNativeAuth:(BOOL)auth holdoutType:(id)type targetAccountType:(id)type;
- (BOOL)isKillswitchEnabled;
- (void)showUpsellWithViewController:(id)controller primaryCtaAction:(id /* block */)action secondaryCtaAction:(id /* block */)action;
- (void)showUpsellWithoutPrescreen:(id)prescreen linkingFlowSuccessHandler:(id /* block */)handler linkingFlowFailureHandler:(id /* block */)handler;
- (BOOL)isEligibleToPrefetchOnce;
- (BOOL)passNativeAuthTokensToBloksLinkingFlow;
- (BOOL)useServerImpressionLogging;
- (id)clientPrescreenContent;
- (void)_showToastMessage:(id)message;
@end

#endif /* IGFXUnifiedACUpsellBase_h */
