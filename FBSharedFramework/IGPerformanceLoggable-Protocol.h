//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPerformanceLoggable_Protocol_h
#define IGPerformanceLoggable_Protocol_h
@import Foundation;

@protocol IGPerformanceLoggable <NSObject>

@property (weak, nonatomic) NSObject<IGPerformanceLoggerDelegate> *delegate;

/* instance methods */
- (void)start;
- (BOOL)startWithTimestamp:(long long)timestamp;
- (void)addPointWithName:(id)name;
- (void)addPointWithName:(id)name dataString:(id)string;
- (void)addPointWithName:(id)name timestamp:(long long)timestamp;
- (void)success;
- (void)fail;
- (void)failWithError:(id)error;
- (void)failWithError:(id)error timestamp:(long long)timestamp;
- (void)failWithReason:(id)reason;
- (void)cancel;
- (void)endWithActionID:(short)id;
- (void)endWithActionID:(short)id timestamp:(long long)timestamp;
- (void)drop;
- (BOOL)isActive;
- (BOOL)isActiveAndSampled;
@end

#endif /* IGPerformanceLoggable_Protocol_h */