//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef StateManagerApiLogger_h
#define StateManagerApiLogger_h
@import Foundation;

#include "StateManagerApiLoggerProtocol-Protocol.h"

@class NSString;

@interface StateManagerApiLogger : NSObject<StateManagerApiLoggerProtocol>

@property (nonatomic) int event;
@property atomic int loggingId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEvent:(int)event;
- (void)startEvent;
- (void)endEventSuccess;
- (void)endEventFailure:(id)failure;
- (void)annotateTransportType:(id)type;
@end

#endif /* StateManagerApiLogger_h */