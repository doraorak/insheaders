//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMComponentMetalFilterRenderer_h
#define OCMComponentMetalFilterRenderer_h
@import Foundation;

#include "OCMComponentFilterRendererProtocol-Protocol.h"
#include "OCMComponentManagingContext-Protocol.h"

@class NSString;
@protocol {shared_ptr<igl::ICommandQueue>="__ptr_"^{ICommandQueue}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<igl::IDevice>="__ptr_"^{IDevice}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::filterkit::IFilterFactory>="__ptr_"^{IFilterFactory}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::filters::filter_chain::FilterChain>="__ptr_"^{FilterChain}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::resourceloader::IResourceLoader>="__ptr_"^{IResourceLoader}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::resourceloader::ResourcePool>="__ptr_"^{ResourcePool}"__cntrl_"^{__shared_weak_count}};

@interface OCMComponentMetalFilterRenderer : NSObject<OCMComponentFilterRendererProtocol> {
  /* instance variables */
  NSObject<OCMComponentManagingContext> *_context;
  struct shared_ptr<igl::IDevice> { struct IDevice *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
  struct shared_ptr<iglu::resourceloader::IResourceLoader> { struct IResourceLoader *__ptr_; struct __shared_weak_count *__cntrl_; } _resourceLoader;
  struct shared_ptr<iglu::resourceloader::ResourcePool> { struct ResourcePool *__ptr_; struct __shared_weak_count *__cntrl_; } _resourcePool;
  struct shared_ptr<iglu::filterkit::IFilterFactory> { struct IFilterFactory *__ptr_; struct __shared_weak_count *__cntrl_; } _filterFactory;
  struct shared_ptr<igl::ICommandQueue> { struct ICommandQueue *__ptr_; struct __shared_weak_count *__cntrl_; } _commandQueue;
  struct shared_ptr<iglu::filters::filter_chain::FilterChain> { struct FilterChain *__ptr_; struct __shared_weak_count *__cntrl_; } _filterChain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)componentID;
- (id)dependentComponentIDs;
- (long long)supportedControllerStates;
- (void)didAttachWithContext:(id)context;
- (void)willDetachWithContext:(id)context;
- (id)surfaceBackedViewCreateWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)renderFromCVPixelBufferInput:(struct __CVBuffer *)input toCVPixelBufferOutput:(struct __CVBuffer *)output mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)renderFromUIImageInput:(id)input toCVPixelBufferOutput:(struct __CVBuffer *)output mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)renderFromCVPixelBufferInput:(struct __CVBuffer *)input toSurfaceBackedViewOutput:(id)output mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time shouldPresent:(BOOL)present;
- (void)renderFromUIImageInput:(id)input toSurfaceBackedViewOutput:(id)output mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time shouldPresent:(BOOL)present;
- (void)setFilter:(id)filter index:(int)index;
- (void)setFilterEnabled:(BOOL)enabled filterIndex:(int)index;
- (void)reset;
- (void)setBoolParameter:(id)parameter value:(BOOL)value filterIndex:(int)index;
- (void)setFloat1Parameter:(id)parameter value:(float)value filterIndex:(int)index;
- (void)setFloat2Parameter:(id)parameter value:(int)value;
- (void)setFloat3Parameter:(id)parameter value:(int)value;
- (void)setFloat4x4Parameter:(id)parameter value:(struct float4x4 { x0[4] })value filterIndex:(int)index;
- (void)setIntParameter:(id)parameter value:(int)value filterIndex:(int)index;
@end

#endif /* OCMComponentMetalFilterRenderer_h */
