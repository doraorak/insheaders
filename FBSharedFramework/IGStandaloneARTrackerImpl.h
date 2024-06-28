//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStandaloneARTrackerImpl_h
#define IGStandaloneARTrackerImpl_h
@import Foundation;

#include "FBARTrackingControllerFactory.h"
#include "NSObject-Protocol.h"

@class NSMutableArray, NSString;
@protocol FBARTrackingControlling, IGStandaloneARTrackerDataSnapshot, OS_dispatch_group, OS_dispatch_queue, {vector<arfx::delivery::VersionedCapability, std::allocator<arfx::delivery::VersionedCapability>>="__begin_"^i"__end_"^i"__end_cap_"{__compressed_pair<arfx::delivery::VersionedCapability *, std::allocator<arfx::delivery::VersionedCapability>>="__value_"^i}};

@interface IGStandaloneARTrackerImpl : NSObject<NSObject> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_processingQueue;
  NSObject<OS_dispatch_group> *_dispatch_group;
  FBARTrackingControllerFactory *_trackingControllerFactory;
  NSObject<FBARTrackingControlling> *_trackingController;
  NSMutableArray *_serviceHostConfigurations;
  long long _capabilities;
  struct vector<arfx::delivery::VersionedCapability, std::allocator<arfx::delivery::VersionedCapability>> { int *__begin_; int *__end_; struct __compressed_pair<arfx::delivery::VersionedCapability *, std::allocator<arfx::delivery::VersionedCapability>> { int *__value_; } __end_cap_; } _versionedCapabilities;
}

@property (readonly) NSObject<IGStandaloneARTrackerDataSnapshot> *lastSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithUserSession:(id)session capabilities:(long long)capabilities completion:(id /* block */)completion;
- (id)processSampleBufferSync:(struct opaqueCMSampleBuffer *)sync;
- (id)processPixelBufferSync:(struct __CVBuffer *)sync presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)processPixelbuffer:(struct __CVBuffer *)pixelbuffer presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
@end

#endif /* IGStandaloneARTrackerImpl_h */
