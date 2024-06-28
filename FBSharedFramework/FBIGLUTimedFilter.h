//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBIGLUTimedFilter_h
#define FBIGLUTimedFilter_h
@import Foundation;

#include "FBIGLUFilter.h"
#include "FBIGLUFilter.h"

@interface FBIGLUTimedFilter : FBIGLUFilter {
  /* instance variables */
  struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _effectiveRange;
  FBIGLUFilter *_passthrough;
}

/* instance methods */
- (id)initWithIgluFilter:(struct shared_ptr<iglu::filterkit::IFilter> { struct IFilter * x0; struct __shared_weak_count * x1; })filter effectiveRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range passthroughFilter:(struct shared_ptr<iglu::filterkit::IFilter> { struct IFilter * x0; struct __shared_weak_count * x1; })filter device:(struct shared_ptr<igl::IDevice> { struct IDevice * x0; struct __shared_weak_count * x1; })device resourceLoader:(struct shared_ptr<iglu::resourceloader::IResourceLoader> { struct IResourceLoader * x0; struct __shared_weak_count * x1; })loader resourcePool:(struct shared_ptr<iglu::resourceloader::ResourcePool> { struct ResourcePool * x0; struct __shared_weak_count * x1; })pool commandQueue:(struct shared_ptr<igl::ICommandQueue> { struct ICommandQueue * x0; struct __shared_weak_count * x1; })queue;
- (id)initWithIgluFilter:(struct shared_ptr<iglu::filterkit::IFilter> { struct IFilter * x0; struct __shared_weak_count * x1; })filter device:(struct shared_ptr<igl::IDevice> { struct IDevice * x0; struct __shared_weak_count * x1; })device resourceLoader:(struct shared_ptr<iglu::resourceloader::IResourceLoader> { struct IResourceLoader * x0; struct __shared_weak_count * x1; })loader resourcePool:(struct shared_ptr<iglu::resourceloader::ResourcePool> { struct ResourcePool * x0; struct __shared_weak_count * x1; })pool commandQueue:(struct shared_ptr<igl::ICommandQueue> { struct ICommandQueue * x0; struct __shared_weak_count * x1; })queue;
- (id)initWithIgluFilter:(struct shared_ptr<iglu::filterkit::IFilter> { struct IFilter * x0; struct __shared_weak_count * x1; })filter;
- (void)setFilterContext:(id)context;
- (void)setParameters:(id)parameters;
- (BOOL)iglRender:(id)render to:(id)to time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)iglRender:(id)render to:(id)to time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time waitForGPUIdle:(BOOL)gpuidle;
- (BOOL)render:(id)render to:(id)to time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
@end

#endif /* FBIGLUTimedFilter_h */
