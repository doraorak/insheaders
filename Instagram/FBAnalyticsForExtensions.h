//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAnalyticsForExtensions_h
#define FBAnalyticsForExtensions_h
@import Foundation;

#include "FBAnalyticsUnifiedLogging-Protocol.h"

@class NSString;
@protocol FBAnalyticsStoreProvider, OS_dispatch_queue;

@interface FBAnalyticsForExtensions : NSObject<FBAnalyticsUnifiedLogging> {
  /* instance variables */
  struct FBAnalyticsExperimentValues { NSSet *topLevelEventBlockList; BOOL bufferEventsDuringStartup; BOOL disableLogging; BOOL enableSampling; BOOL flipDefaultSamplingRateToZero; NSSet *samplingAllowList; NSSet *samplingDisallowList; BOOL checkForEventThrottling; BOOL throttleEvent; long long throttleEventRate; NSSet *doNotThrottleEventsList; BOOL shouldLogThrottledError; NSDictionary *throttlingConfig; BOOL shouldSendBeacon; long long beaconSendInterval; BOOL isExternalBuild; BOOL useMultiBatch; long long maxNumberOfEventsInBatch; long long maxNumberOfEventsInMultiBatch; long long maxByteSizeOfMultiBatch; double defaultRegularEventRequestedLatency; double defaultRealtimeEventRequestedLatency; NSDictionary *realtimeEventLatencyOverrides; NSDictionary *nonRealtimeEventLatencyOverrides; NSSet *regularDefaultLatencyExemptList; NSSet *realtimeDefaultLatencyExemptList; unsigned long long storeOptions; BOOL enableOneFabricLogger; long long eventExpiryIntervalInDays; long long maxNumberOfEventsBeforePurge; long long minNumberOfEventsAfterPurge; long long maxNumberOfUploadsBeforePurge; long long minNumberOfUploadsAfterPurge; BOOL dispatchNetworkRequestsOnMainQueue; BOOL attributeIdentitiesToEventsDuringStartup; BOOL beginSessionOnAppForeground; BOOL beginSessionOnlyOnUserSwitch; BOOL performFlushOnAppBackground; long long safeCopyFunction; BOOL pauseAnalyticsOnBackground; BOOL delayAnalyticsQueueOnHighVolume; BOOL disableAppLifecycleCallbacksAtUserSessionScope; BOOL enableLegacyMigration; BOOL enableProdHealthCounters; BOOL uploadOldestEventsFirst; BOOL useSyncPlugin; BOOL captureEventsInBackground; BOOL handleAppStateChangeInBackground; BOOL enableHighPriorityAnalyticsQueue; BOOL immediatelyResumeFBanalyticsAfterStartup; BOOL enableIdentityScopedAnalytics; BOOL enableOptimizedUploadBackOffTimer; BOOL enableBlockCopyInPersistentStore; NSSet *lsLegacyEvents; BOOL enableRoutingLSLegacyEvents; BOOL enableDeepCopyDuringStartup; BOOL enableIdToNameMappingInFBAnalytics; BOOL enableLogForIdToNameMappedPayload; BOOL attachACSClaimToBatches; long long acsTokenFetchTimeout; BOOL convertEnumWithCString; NSSet *deIdentifiedEvents; BOOL enableProcessingExtensionEvents; BOOL enableEventsDedupingInStore; long long simulateDuplicateEntriesRate; NSSet *fullyFederatedAnalyticsEvents; NSSet *partiallyFederatedAnalyticsEvents; BOOL peakLatencyMultiplierEnabled; double peakLatencyMultiplier; long long peakLatencyMultiplierStartMinutesSinceMidnightUTC; long long peakLatencyMultiplierEndMinutesSinceMidnightUTC; BOOL enableEventStreaming; NSSet *eventsEligibleForStreaming; long long eventStreamingTimeout; NSString *falcoAmbientState; BOOL disableEventPurging; NSSet *falcoStatefulEvents; NSArray *falcoExperimentTags; long long analyticsUploadPauseInterval; long long healthCountersUploadPauseInterval; BOOL handleInvalidResponsesAsFailedUploadsInNSE; BOOL shouldCompressBody; BOOL enableAnalyticsEventTraceId; BOOL enableAnalyticsEventTraceIdDeduping; BOOL disableBase64EncodingOfCompressedPayload; BOOL performDBWipeOnError; BOOL performFlushOnBothAppFgBg; BOOL enableZstdCompression; BOOL enableVerboseDebugHealthLogs; BOOL enableDataQualityExperiment; } _experimentValues;
  BOOL _isFlushing;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) NSObject<FBAnalyticsStoreProvider> *extensionStoreProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedAnalytics;

/* instance methods */
- (id)initWithStorePath:(id)path;
- (void)logUntypedEvent:(id)event logEventMetadata:(struct FBStructuredLogEventMetadata { id x0; id x1; id x2; double x3; double x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; long long x8; BOOL x9; struct FBAnalyticsSerializedIdentities { id x0; id x1; id x2; } x10; struct FBAnalyticsPrivacyContext { id x0; id x1; id x2; } x11; struct FBAnalyticsSamplingResult { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; unsigned long long x4; } x12; double x13; unsigned long long x14; id x15; })metadata payloadBlock:(id /* block */)block;
- (void)flush;
- (unsigned long long)samplingRateForEvent:(id)event subEvent:(id)event;
- (void)logCounter:(id)counter;
- (void)logCounter:(id)counter value:(id)value;
- (void)logCounter:(id)counter value:(id)value eventName:(id)name;
- (void)suspendAnalyticsQueueWithDelay:(unsigned long long)delay;
- (void)resumeAnalyticsQueue;
- (void)unsafelyPauseAnalyticsLogUploads;
- (void)resumeAnalyticsLogUploads;
- (void)unsafelyPauseHealthCountersUploads;
- (void)resumeHealthCountersUploads;
- (void)toggleState:(unsigned long long)state;
- (void)setUserIdentity:(struct { id x0; id x1; id x2; id x3; id x4; })identity;
- (void)setUserFBID:(id)fbid;
- (void)setNonFBUserID:(id)id;
- (id)userFBID;
- (void)flushWithCompletion:(id /* block */)completion;
- (void)flushWithCompletion:(id /* block */)completion needsBackgroundTask:(BOOL)task;
- (void)_flushOnQueueWithCompletion:(id /* block */)completion needsBackgroundTask:(BOOL)task;
- (void)flushWithCompletionImpl:(id /* block */)impl;
@end

#endif /* FBAnalyticsForExtensions_h */
