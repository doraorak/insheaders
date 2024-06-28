//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnalyticsUsingFBAnalyticsCoreLogger_h
#define IGAnalyticsUsingFBAnalyticsCoreLogger_h
@import Foundation;

#include "FBAnalyticsUnifiedLogging-Protocol.h"
#include "IGAnalyticsFBAnalyticsCoreLoggerLifecycleManager.h"
#include "IGAnalyticsProcessingQueue.h"
#include "IGSessionChainProvider-Protocol.h"
#include "IGTimeSpent.h"

@class NSString;

@interface IGAnalyticsUsingFBAnalyticsCoreLogger : NSObject<FBAnalyticsUnifiedLogging> {
  /* instance variables */
  NSObject<IGSessionChainProvider> *_sessionChainProvider;
  struct { NSString *userID; NSString *accountID; NSString *actorID; NSString *appUID; NSString *analyticsClaim; } _userIdentity;
  NSString *_serializedUserIdentity;
  IGAnalyticsProcessingQueue *_queue;
  IGTimeSpent *_timeSpent;
  IGAnalyticsFBAnalyticsCoreLoggerLifecycleManager *_lifecycleManager;
}

@property (readonly, copy, nonatomic) NSString *previousSessionID;
@property (readonly, nonatomic) NSString *userId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserIdentity:(struct { id x0; id x1; id x2; id x3; id x4; })identity sessionChainProvider:(id)provider;
- (void)_appWillResignActive:(id)active;
- (void)appendEvents:(id)events;
- (void)beginSessionWithUserID:(id)id completion:(id /* block */)completion;
- (void)enableLogFileCompression;
- (void)endSession;
- (void)logEvent:(id)event;
- (void)logEventImmediately:(id)immediately;
- (void)logTimeSpentWithTimeStamp:(double)stamp;
- (void)uploadEvents;
- (void)uploadEventsIfNecessary;
- (void)logUntypedEvent:(id)event logEventMetadata:(struct FBStructuredLogEventMetadata { id x0; id x1; id x2; double x3; double x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; long long x8; BOOL x9; struct FBAnalyticsSerializedIdentities { id x0; id x1; id x2; } x10; struct FBAnalyticsPrivacyContext { id x0; id x1; id x2; } x11; struct FBAnalyticsSamplingResult { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; unsigned long long x4; } x12; double x13; unsigned long long x14; id x15; })metadata payloadBlock:(id /* block */)block;
- (void)flush;
- (unsigned long long)samplingRateForEvent:(id)event subEvent:(id)event;
- (void)logCounter:(id)counter;
- (void)logCounter:(id)counter value:(id)value;
- (void)logCounter:(id)counter value:(id)value eventName:(id)name;
- (void)setUserIdentity:(struct { id x0; id x1; id x2; id x3; id x4; })identity;
- (id)userFBID;
- (void)setUserFBID:(id)fbid;
- (void)setNonFBUserID:(id)id;
- (void)suspendAnalyticsQueueWithDelay:(unsigned long long)delay;
- (void)resumeAnalyticsQueue;
- (void)unsafelyPauseAnalyticsLogUploads;
- (void)resumeAnalyticsLogUploads;
- (void)unsafelyPauseHealthCountersUploads;
- (void)resumeHealthCountersUploads;
- (void)toggleState:(unsigned long long)state;
@end

#endif /* IGAnalyticsUsingFBAnalyticsCoreLogger_h */