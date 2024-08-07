//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAnalyticsPersistentStoreProvider_h
#define FBAnalyticsPersistentStoreProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBAnalyticsPersistentStoreProvider : NSObject<NSObject> {
  /* instance variables */
  NSString *_persistentStoreFilePath;
  NSObject<OS_dispatch_queue> *_processingQueue;
  int _numberOfAnalyticsEventsInStore;
  struct sqlite3 * _logEventsDBHandle;
  unsigned int _lastRetrievedEventID;
  struct sqlite3_stmt * _insertLogEventStatement;
  struct sqlite3_stmt * _selectBatchOfLogEventsStatement;
  struct sqlite3_stmt * _logEventsCountStatement;
  struct sqlite3_stmt * _deleteRetrievedLogEventsStatement;
  struct FBAnalyticsExperimentValues { NSSet *topLevelEventBlockList; BOOL bufferEventsDuringStartup; BOOL disableLogging; BOOL enableSampling; BOOL flipDefaultSamplingRateToZero; NSSet *samplingAllowList; NSSet *samplingDisallowList; BOOL checkForEventThrottling; BOOL throttleEvent; long long throttleEventRate; NSSet *doNotThrottleEventsList; BOOL shouldLogThrottledError; NSDictionary *throttlingConfig; BOOL shouldSendBeacon; long long beaconSendInterval; BOOL isExternalBuild; BOOL useMultiBatch; long long maxNumberOfEventsInBatch; long long maxNumberOfEventsInMultiBatch; long long maxByteSizeOfMultiBatch; double defaultRegularEventRequestedLatency; double defaultRealtimeEventRequestedLatency; NSDictionary *realtimeEventLatencyOverrides; NSDictionary *nonRealtimeEventLatencyOverrides; NSSet *regularDefaultLatencyExemptList; NSSet *realtimeDefaultLatencyExemptList; unsigned long long storeOptions; BOOL enableOneFabricLogger; long long eventExpiryIntervalInDays; long long maxNumberOfEventsBeforePurge; long long minNumberOfEventsAfterPurge; long long maxNumberOfUploadsBeforePurge; long long minNumberOfUploadsAfterPurge; BOOL dispatchNetworkRequestsOnMainQueue; BOOL attributeIdentitiesToEventsDuringStartup; BOOL beginSessionOnAppForeground; BOOL beginSessionOnlyOnUserSwitch; BOOL performFlushOnAppBackground; long long safeCopyFunction; BOOL pauseAnalyticsOnBackground; BOOL delayAnalyticsQueueOnHighVolume; BOOL disableAppLifecycleCallbacksAtUserSessionScope; BOOL enableLegacyMigration; BOOL enableProdHealthCounters; BOOL uploadOldestEventsFirst; BOOL useSyncPlugin; BOOL captureEventsInBackground; BOOL handleAppStateChangeInBackground; BOOL enableHighPriorityAnalyticsQueue; BOOL immediatelyResumeFBanalyticsAfterStartup; BOOL enableIdentityScopedAnalytics; BOOL enableOptimizedUploadBackOffTimer; BOOL enableBlockCopyInPersistentStore; NSSet *lsLegacyEvents; BOOL enableRoutingLSLegacyEvents; BOOL enableDeepCopyDuringStartup; BOOL enableIdToNameMappingInFBAnalytics; BOOL enableLogForIdToNameMappedPayload; BOOL attachACSClaimToBatches; long long acsTokenFetchTimeout; BOOL convertEnumWithCString; NSSet *deIdentifiedEvents; BOOL enableProcessingExtensionEvents; BOOL enableEventsDedupingInStore; long long simulateDuplicateEntriesRate; NSSet *fullyFederatedAnalyticsEvents; NSSet *partiallyFederatedAnalyticsEvents; BOOL peakLatencyMultiplierEnabled; double peakLatencyMultiplier; long long peakLatencyMultiplierStartMinutesSinceMidnightUTC; long long peakLatencyMultiplierEndMinutesSinceMidnightUTC; BOOL enableEventStreaming; NSSet *eventsEligibleForStreaming; long long eventStreamingTimeout; NSString *falcoAmbientState; BOOL disableEventPurging; NSSet *falcoStatefulEvents; NSArray *falcoExperimentTags; long long analyticsUploadPauseInterval; long long healthCountersUploadPauseInterval; BOOL handleInvalidResponsesAsFailedUploadsInNSE; BOOL shouldCompressBody; BOOL enableAnalyticsEventTraceId; BOOL enableAnalyticsEventTraceIdDeduping; BOOL disableBase64EncodingOfCompressedPayload; BOOL performDBWipeOnError; BOOL performFlushOnBothAppFgBg; BOOL enableZstdCompression; BOOL enableVerboseDebugHealthLogs; BOOL enableDataQualityExperiment; } _experimentValues;
  BOOL _transactionsEnabled;
  BOOL _transactionIsOpen;
  long long _numberOfEventsAddedDuringTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStorePath:(id)path processingQueue:(id)queue experimentValues:(struct FBAnalyticsExperimentValues { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; BOOL x7; BOOL x8; long long x9; id x10; BOOL x11; id x12; BOOL x13; long long x14; BOOL x15; BOOL x16; long long x17; long long x18; long long x19; double x20; double x21; id x22; id x23; id x24; id x25; unsigned long long x26; BOOL x27; long long x28; long long x29; long long x30; long long x31; long long x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; long long x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; BOOL x51; BOOL x52; id x53; BOOL x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; long long x59; BOOL x60; id x61; BOOL x62; BOOL x63; long long x64; id x65; id x66; BOOL x67; double x68; long long x69; long long x70; BOOL x71; id x72; long long x73; id x74; BOOL x75; id x76; id x77; long long x78; long long x79; BOOL x80; BOOL x81; BOOL x82; BOOL x83; BOOL x84; BOOL x85; BOOL x86; BOOL x87; BOOL x88; BOOL x89; })values;
- (void)dealloc;
- (void)insertAnalyticsEvent:(id)event serializedData:(id)data appIdentity:(id)identity userIdentity:(id)identity;
- (void)insertAnalyticsEvent:(id)event;
- (id)fetchAnalyticsEventsWithMaxEventCount:(unsigned long long)count;
- (id)fetchAnalyticsEventsWithMaxEventCount:(unsigned long long)count removeOnFetch:(BOOL)fetch;
- (long long)numberOfAnalyticsEventsInStore;
- (void)removeAllAnalyticsEventsInStore;
- (id)fetchAllAnalyticsEvents;
- (void)closeAnalyticsEventStore;
- (void)removeEventsFromLastFetch;
@end

#endif /* FBAnalyticsPersistentStoreProvider_h */
