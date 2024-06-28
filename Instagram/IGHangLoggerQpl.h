//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHangLoggerQpl_h
#define IGHangLoggerQpl_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGHangLoggerQpl : NSObject<NSObject> {
  /* instance variables */
  struct IGHangLoggerQplConfiguration { BOOL startOnWatchdogTimeout; double maxDuration; } _config;
  atomic int _instanceKey;
  atomic BOOL _hangInWatchdogTimeout;
  atomic BOOL _exceededMaxDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(struct IGHangLoggerQplConfiguration { BOOL x0; double x1; })configuration;
- (void)hangEventDidBegin:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })begin;
- (void)hangEvent:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })event didExceedWatchdogTimeout:(double)timeout;
- (void)hangEventDidUpdate:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })update;
- (void)hangEventDidEnterForeground:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })foreground;
- (void)hangEventDidEnterBackground:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })background;
- (void)hangEventDidEnd:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })end;
- (void)runLoopCompleted;
@end

#endif /* IGHangLoggerQpl_h */
