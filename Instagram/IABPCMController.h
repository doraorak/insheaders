//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABPCMController_h
#define IABPCMController_h
@import Foundation;

#include "EnigmaIABListener-Protocol.h"
#include "IABAEMNetworker.h"
#include "IABAEMPixelEventProcessor.h"
#include "IABLoggingCoordinator.h"
#include "IABPCMControllerConforming-Protocol.h"
#include "IABPCMEventCounters.h"
#include "IABPCMJSMessageHandler.h"
#include "IABPCMSecurityTokenController.h"

@class FBStashSQLite, IABPCMAdConversionsStorage, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol EnigmaIABControllerConforming, IABPCMWebViewControllerDelegate;

@interface IABPCMController : NSObject<IABPCMControllerConforming> {
  /* instance variables */
  IABPCMSecurityTokenController *_securityTokenController;
  IABPCMJSMessageHandler *_jsMessageHandler;
  IABPCMAdConversionsStorage *_conversionsStorage;
  FBStashSQLite *_adClickStash;
  IABAEMPixelEventProcessor *_pixelEventsProcessor;
  IABLoggingCoordinator *_loggingCoordinator;
  NSObject<IABPCMWebViewControllerDelegate> *_delegate;
  NSObject<EnigmaIABControllerConforming> *_enigmaIabController;
  NSObject<EnigmaIABListener> *_onDeviceIABPixelEventHandler;
  NSString *_adClientToken;
  NSDate *_userClickExpirationTimestamp;
  long long _priority;
  long long _conversionId;
  NSMutableDictionary *_queuedConversions;
  BOOL _conversionIsSending;
  BOOL _invalidAdClickForOrganicConversion;
  unsigned long long _delayFlow;
  long long _adClickExpirationWindow;
  NSArray *_clickInfo;
  BOOL _clickInfosFetchedWithValidAdDestination;
  BOOL _allFrameInjectonEnabled;
  NSString *_clickIDToken;
  long long _debugCustomConsumptionDelay;
  long long _numberOfAEMNetworkTries;
  long long _aemNetworkRetryDelay;
  IABAEMNetworker *_adDataFetchNetworker;
  NSMutableSet *_conversionDataFetchNetworkers;
  IABAEMNetworker *_conversionDataSendingNetworker;
  BOOL _shouldDropNonJSConversions;
}

@property (nonatomic) BOOL browserIsVisible;
@property (readonly, nonatomic) IABPCMEventCounters *eventCounters;
@property (readonly, copy, nonatomic) NSString *adDestination;
@property (readonly, nonatomic) NSNumber *campaignId;
@property (readonly, copy, nonatomic) NSString *securityToken;
@property (nonatomic) BOOL userIsInScopeOfCCPA;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedMessageNames;

/* instance methods */
- (id)initWithAdClientToken:(id)token userClickTimestamp:(id)timestamp adClickExpirationWindow:(long long)window delayFlow:(unsigned long long)flow delegate:(id)delegate loggingCoordinator:(id)coordinator securityTokenProvider:(id)provider debugCustomConsumptionDelay:(long long)delay delayedConversionsProcessingEnabled:(BOOL)enabled numberOfAEMNetworkTries:(long long)tries aemNetworkRetryDelay:(long long)delay allFrameInjectonEnabled:(BOOL)enabled enigmaIabController:(id)controller shouldDropNonJSConversions:(BOOL)jsconversions onDeviceIABPixelEventHandler:(id)handler;
- (id)initWithAdClientToken:(id)token userClickTimestamp:(id)timestamp adClickExpirationWindow:(long long)window delayFlow:(unsigned long long)flow delegate:(id)delegate loggingCoordinator:(id)coordinator conversionsStorage:(id)storage adClickStash:(id)stash securityTokenProvider:(id)provider pixelEventsProcessor:(id)processor debugCustomConsumptionDelay:(long long)delay numberOfAEMNetworkTries:(long long)tries aemNetworkRetryDelay:(long long)delay allFrameInjectonEnabled:(BOOL)enabled enigmaIabController:(id)controller shouldDropNonJSConversions:(BOOL)jsconversions;
- (void)maybeInjectJSScriptIntoWebView:(id)view forURLDomain:(id)urldomain;
- (id)supportedEvents;
- (BOOL)shouldAvoidiFrameCheckForOriginHost:(id)host messageName:(id)name messageParams:(id)params;
- (void)handleScriptMessageFromWebView:(id)view frame:(id)frame websiteURL:(id)url messageName:(id)name messageParams:(id)params;
- (BOOL)requireAppId;
- (BOOL)requireHttps;
- (BOOL)requireDomainToBeAllowlisted;
- (BOOL)supportsCallback;
- (BOOL)requireDelegateSetUp;
- (void)jsMessageHandlerDidFailToProcessMessageWithReason:(unsigned long long)reason error:(id)error currentWebsiteURL:(id)url;
- (void)jsMessageHandlerDidReceiveInitializationMessageWithCallbackHandlerName:(id)name currentWebsiteURL:(id)url;
- (void)jsMessageHandlerDidReceiveGetNonceMessageWithParams:(id)params currentWebsiteURL:(id)url;
- (void)jsMessageHandlerDidReceivePixelData:(id)data withCurrentWebsiteURL:(id)url;
- (void)_processPixelData:(id)data withCurrentWebsiteURL:(id)url;
- (void)jsMessageHandlerDidReceiveImgPixelData:(id)data withCurrentWebsiteURL:(id)url;
- (unsigned long long)attributeConversionIfNeeded:(id)needed;
- (BOOL)_shouldUseJSLocalComputation:(id)computation;
- (BOOL)_shouldLogJSLocalComputation:(id)computation;
- (id)_tryGenerateCombinedToken;
- (void)_fetchAdDataIfNeeded;
- (BOOL)_adDataIsFetched;
- (BOOL)_isOrganicCase;
- (void)_handleFetchedConversionData:(id)data fromJS:(id)js frameLevel:(id)level;
- (void)_processQueuedConversionIfNeeded;
- (BOOL)_sendConversion:(id)conversion;
- (void)_handleConversionSending:(id)sending result:(unsigned long long)result;
- (id)_conversionForAdDestination:(id)destination advertiserID:(id)id;
- (void)_saveConversion:(id)conversion forAdDestination:(id)destination;
- (void)_saveConversion:(id)conversion forKey:(id)key;
- (void)_logEvent:(id)event;
- (void)_logRetryingResultIfNeeded:(id)needed numberOfTriesRemaining:(long long)remaining success:(BOOL)success;
- (id)_earliestClickForDomain:(id)domain;
- (id)_generateClickInfo;
- (id)_generateClickInfoForKeys:(id)keys;
@end

#endif /* IABPCMController_h */
