//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMSYSAndGraphQLConsistencyLogger_h
#define IGDirectMSYSAndGraphQLConsistencyLogger_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"
#include "NSObject-Protocol.h"

@class FBTimer, NSObject, NSString;
@protocol FBClock;

@interface IGDirectMSYSAndGraphQLConsistencyLogger : NSObject<NSObject> {
  /* instance variables */
  NSObject *_msysLatestData;
  NSObject *_gqlLatestData;
  long long _lastUpdatedDataSource;
  double _lastUpdatedEpochMs;
  BOOL _lastComparedMatch;
  double _lastComparedEpochMs;
  NSString *_sessionId;
  NSString *_useCase;
  NSObject<FBAnalyticsLogging> *_analyticsLogger;
  FBTimer *_periodicTimer;
  double _interval;
  NSObject<FBClock> *_clock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventLogger:(id)logger useCase:(id)case sessionId:(id)id clock:(id)clock;
- (void)start;
- (void)stop;
- (void)onUpdateWithSource:(long long)source data:(id)data;
- (void)onError:(long long)error error:(id)error;
@end

#endif /* IGDirectMSYSAndGraphQLConsistencyLogger_h */