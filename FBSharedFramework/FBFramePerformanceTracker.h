//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBFramePerformanceTracker_h
#define FBFramePerformanceTracker_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol FBFramePerformanceTrackerLogger;

@interface FBFramePerformanceTracker : NSObject<NSObject> {
  /* instance variables */
  NSObject<FBFramePerformanceTrackerLogger> *_logger;
  struct FBFramePerformanceTrackerConfig { long long singleFrameDropEventFrameNumber; long long twoConsecFrameDropEventFrameNumber; long long fourConsecFrameDropEventFrameNumber; long long eightConsecFrameDropEventFrameNumber; long long maxFrameDropAccount; long long initialTrackedFrame; } _config;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
  BOOL _tracking;
  long long _updateCount;
  long long _renderedFrameCount;
  unsigned long long _startTime;
  unsigned long long _lastFrameStartTimestamp;
  unsigned long long _lastFrameInterval;
  unsigned long long _totalRenderTime;
  unsigned long long _targetFrameTime;
  struct FrameDrops { double singleFrameDrop; double twoConsecFrameDrops; double fourConsecFrameDrops; double eightConsecFrameDrops; } _frameDrops;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithConfig:(struct FBFramePerformanceTrackerConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; })config;
- (void)setLogger:(id)logger;
- (void)startTrackingWithTargetFPS:(long long)fps;
- (void)stopTracking;
- (struct FBFramePerformanceResult { double x0; double x1; double x2; long long x3; double x4; double x5; double x6; double x7; double x8; })currentPerformanceResult;
- (void)_reset;
@end

#endif /* FBFramePerformanceTracker_h */
