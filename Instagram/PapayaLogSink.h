//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PapayaLogSink_h
#define PapayaLogSink_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface PapayaLogSink : NSObject<NSObject> {
  /* instance variables */
  NSString *_currentPFHFeature;
  NSString *_sessionId;
  NSObject<FBAnalyticsLogging> *_logger;
  BOOL _firstRun;
  BOOL _executionSucceeded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPFHFeature:(id)pfhfeature userSession:(id)session sessionId:(id)id;
- (id)initWithPFHFeature:(id)pfhfeature;
- (void)logLevel:(long long)level counter:(unsigned long long)counter date:(id)date threadID:(unsigned long long)id filename:(id)filename line:(long long)line message:(id)message;
- (void)logEvent:(long long)event counter:(unsigned long long)counter date:(id)date threadID:(unsigned long long)id metadata:(id)metadata message:(id)message;
@end

#endif /* PapayaLogSink_h */
