//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMPWorldTrackingData_h
#define FBMPWorldTrackingData_h
@import Foundation;

#include "NSObject-Protocol.h"

@class ARCamera, NSString;
@protocol struct DepthMapData { struct shared_ptr<std::vector<float>> { void * x0; struct __shared_weak_count * x1; } x0; struct shared_ptr<std::vector<unsigned char>> { void * x0; struct __shared_weak_count * x1; } x1; unsigned long long x2; unsigned long long x3; }, struct array<double, 5UL> { double x0[5] }, struct shared_ptr<facebook::pointtools::PointCloud<facebook::pointtools::Point3<float>>> { void * x0; struct __shared_weak_count * x1; }, struct shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPlaneTrackableData>> { void * x0; struct __shared_weak_count * x1; }, struct shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPointTrackableData>> { void * x0; struct __shared_weak_count * x1; }, struct shared_ptr<std::vector<unsigned long long>> { void * x0; struct __shared_weak_count * x1; }, {DepthMapData="data"{shared_ptr<std::vector<float>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}"confidence"{shared_ptr<std::vector<unsigned char>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}"width"Q"height"Q}, {array<double, 5UL>="__elems_"[5d]}, {shared_ptr<facebook::pointtools::PointCloud<facebook::pointtools::Point3<float>>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}, {shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPlaneTrackableData>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}, {shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPointTrackableData>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}, {shared_ptr<std::vector<unsigned long long>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}};

@interface FBMPWorldTrackingData : NSObject<NSObject>

@property (readonly, nonatomic) double timestampSec;
@property (readonly, nonatomic) long long trackingState;
@property (readonly, nonatomic) long long trackingStateReason;
@property (readonly, nonatomic) struct shared_ptr<facebook::pointtools::PointCloud<facebook::pointtools::Point3<float>>> { void * x0; struct __shared_weak_count * x1; } pointCloud;
@property (readonly, nonatomic) struct shared_ptr<std::vector<unsigned long long>> { void * x0; struct __shared_weak_count * x1; } pointCloudIdentifiers;
@property (readonly, nonatomic) struct shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPointTrackableData>> { void * x0; struct __shared_weak_count * x1; } pointAnchors;
@property (readonly, nonatomic) struct shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPlaneTrackableData>> { void * x0; struct __shared_weak_count * x1; } planeAnchors;
@property (readonly, nonatomic) ARCamera *camera;
@property (readonly, nonatomic) struct array<double, 5UL> { double x0[5] } cameraIntrinsics;
@property (readonly, nonatomic) struct DepthMapData { struct shared_ptr<std::vector<float>> { void * x0; struct __shared_weak_count * x1; } x0; struct shared_ptr<std::vector<unsigned char>> { void * x0; struct __shared_weak_count * x1; } x1; unsigned long long x2; unsigned long long x3; } depthMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithTimestamp:(double)timestamp trackingState:(long long)state trackingStateReason:(long long)reason pointCloud:(struct shared_ptr<facebook::pointtools::PointCloud<facebook::pointtools::Point3<float>>> { void * x0; struct __shared_weak_count * x1; })cloud pointCloudIdentifiers:(struct shared_ptr<std::vector<unsigned long long>> { void * x0; struct __shared_weak_count * x1; })identifiers pointAnchors:(struct shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPointTrackableData>> { void * x0; struct __shared_weak_count * x1; })anchors planeAnchors:(struct shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPlaneTrackableData>> { void * x0; struct __shared_weak_count * x1; })anchors camera:(id)camera cameraIntrinsics:(const void *)intrinsics depthMap:(struct DepthMapData { struct shared_ptr<std::vector<float>> { void * x0; struct __shared_weak_count * x1; } x0; struct shared_ptr<std::vector<unsigned char>> { void * x0; struct __shared_weak_count * x1; } x1; unsigned long long x2; unsigned long long x3; })map;

/* instance methods */
- (id)initWithTimestamp:(double)timestamp trackingState:(long long)state trackingStateReason:(long long)reason pointCloud:(struct shared_ptr<facebook::pointtools::PointCloud<facebook::pointtools::Point3<float>>> { void * x0; struct __shared_weak_count * x1; })cloud pointCloudIdentifiers:(struct shared_ptr<std::vector<unsigned long long>> { void * x0; struct __shared_weak_count * x1; })identifiers pointAnchors:(struct shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPointTrackableData>> { void * x0; struct __shared_weak_count * x1; })anchors planeAnchors:(struct shared_ptr<std::vector<facebook::artech::anchorservice::datawrappers::ARPlaneTrackableData>> { void * x0; struct __shared_weak_count * x1; })anchors camera:(id)camera cameraIntrinsics:(const void *)intrinsics depthMap:(struct DepthMapData { struct shared_ptr<std::vector<float>> { void * x0; struct __shared_weak_count * x1; } x0; struct shared_ptr<std::vector<unsigned char>> { void * x0; struct __shared_weak_count * x1; } x1; unsigned long long x2; unsigned long long x3; })map;
@end

#endif /* FBMPWorldTrackingData_h */
