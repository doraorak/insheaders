//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARTrackingController_h
#define FBARTrackingController_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol FBARServiceHosting, {shared_ptr<facebook::bufferpool::BufferPool>="__ptr_"^{BufferPool}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<msqrd::standalone_tracking::ITrackingController>="__ptr_"^{ITrackingController}"__cntrl_"^{__shared_weak_count}};

@interface FBARTrackingController : NSObject<NSObject> {
  /* instance variables */
  NSObject<FBARServiceHosting> *_serviceHost;
  struct shared_ptr<msqrd::standalone_tracking::ITrackingController> { struct ITrackingController *__ptr_; struct __shared_weak_count *__cntrl_; } _xplatController;
  struct shared_ptr<facebook::bufferpool::BufferPool> { struct BufferPool *__ptr_; struct __shared_weak_count *__cntrl_; } _pixelBufferPool;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithServiceHost:(id)host xplatController:(struct shared_ref<msqrd::standalone_tracking::ITrackingController> { struct shared_ptr<msqrd::standalone_tracking::ITrackingController> { struct ITrackingController * x0; struct __shared_weak_count * x1; } x0; })controller;

/* instance methods */
- (id)initWithServiceHost:(id)host xplatController:(struct shared_ref<msqrd::standalone_tracking::ITrackingController> { struct shared_ptr<msqrd::standalone_tracking::ITrackingController> { struct ITrackingController * x0; struct __shared_weak_count * x1; } x0; })controller;
- (void)updateWithPixelBuffer:(struct __CVBuffer *)buffer bufferPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time imageRotation:(int)rotation;
- (id)trackNewDataForPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
@end

#endif /* FBARTrackingController_h */
