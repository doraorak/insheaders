//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAHangLoggerActivityMonitor_h
#define METAHangLoggerActivityMonitor_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface METAHangLoggerActivityMonitor : NSObject<NSObject> {
  /* instance variables */
  atomic BOOL _hangInWatchdogTimeout;
  BOOL _hangInForeground;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)hangEventDidBegin:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })begin;
- (void)hangEvent:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })event didExceedWatchdogTimeout:(double)timeout;
- (void)hangEventDidUpdate:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })update;
- (void)hangEventDidEnterForeground:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })foreground;
- (void)hangEventDidEnterBackground:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })background;
- (void)hangEventDidEnd:(struct { double x0; double x1; int x2; unsigned long long x3; unsigned long long x4; double x5; })end;
- (void)runLoopCompleted;
@end

#endif /* METAHangLoggerActivityMonitor_h */