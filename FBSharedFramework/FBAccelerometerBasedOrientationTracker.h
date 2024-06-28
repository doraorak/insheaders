//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAccelerometerBasedOrientationTracker_h
#define FBAccelerometerBasedOrientationTracker_h
@import Foundation;

#include "FBCaptureVideoOrientationTracking-Protocol.h"
#include "FBOrientationTracking-Protocol.h"
#include "SPLowpassFilter.h"

@class CMMotionManager, NSString;

@interface FBAccelerometerBasedOrientationTracker : NSObject<FBCaptureVideoOrientationTracking, FBOrientationTracking> {
  /* instance variables */
  SPLowpassFilter *_lowpassFilter;
  struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
  long long _notificationCount;
  CMMotionManager *_motionManager;
}

@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL orientationLock;
@property (nonatomic) long long interfaceOrientationOverride;
@property (readonly, nonatomic) long long captureVideoOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)beginGeneratingOrientationNotifications;
- (void)endGeneratingOrientationNotifications;
@end

#endif /* FBAccelerometerBasedOrientationTracker_h */
