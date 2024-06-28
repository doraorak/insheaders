//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoProcessor_h
#define FBVideoProcessor_h
@import Foundation;

#include "FBFilterContext.h"
#include "FBFilterGroup.h"
#include "FBGLAppStateMonitor.h"
#include "FBGLContext.h"
#include "FBVideoProcessorConfig.h"
#include "FBVideoProcessorDiscardDrawsUntilLoaded.h"
#include "NSObject-Protocol.h"

@class NSArray, NSError, NSString;
@protocol FBCCExperimentManager, FBIGLSurface, OS_dispatch_queue, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}}, {shared_ptr<igl::IDevice>="__ptr_"^{IDevice}"__cntrl_"^{__shared_weak_count}};

@interface FBVideoProcessor : NSObject<NSObject> {
  /* instance variables */
  FBVideoProcessorConfig *_videoProcessorConfig;
  FBFilterGroup *_filterGroup;
  struct __CVOpenGLESTextureCache * _textureCache;
  NSObject<FBIGLSurface> *_currentOutputSurface;
  FBVideoProcessorDiscardDrawsUntilLoaded *_discardDrawsUntilLoaded;
  struct shared_ptr<igl::IDevice> { struct IDevice *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
  struct FBIGLActivations { BOOL surfaceDisabled; BOOL metalEnabled; BOOL imageFilterEnabled; BOOL imageOverlayFilterEnabled; BOOL dynamicImageOverlayFilterEnabled; } _iglActivations;
  BOOL _isIGLMetal;
  NSObject<FBCCExperimentManager> *_experimentManager;
  FBGLAppStateMonitor *_glAppStateMonitor;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _canUseOpenGL;
  NSObject<OS_dispatch_queue> *_prepareQueue;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _prepareLock;
  unsigned char _preparationState;
  NSError *_latestProcessingSoftException;
}

@property (readonly, nonatomic) FBGLContext *openGLContext;
@property (readonly, nonatomic) FBFilterContext *filterContext;
@property (readonly, copy, nonatomic) NSArray *filterConfigs;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRectangle;
@property (nonatomic) struct _GLKMatrix4 { float x0[16] } contentTransform;
@property (nonatomic) BOOL forceAspectRatioMatching;
@property (nonatomic) BOOL cropAspectFitUsingPreviewAspectRatio;
@property (readonly, nonatomic) BOOL canRenderProcessedBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoProcessorConfig:(id)config device:(struct shared_ptr<igl::IDevice> { struct IDevice * x0; struct __shared_weak_count * x1; })device resourcePool:(struct shared_ptr<iglu::resourceloader::ResourcePool> { struct ResourcePool * x0; struct __shared_weak_count * x1; })pool;
- (id)initWithVideoProcessorConfig:(id)config openGLContext:(id)glcontext;
- (id)initWithVideoProcessorConfig:(id)config openGLContext:(id)glcontext usingSharedPixelBufferPool:(BOOL)pool GLAppStateMonitor:(id)monitor;
- (id)initWithVideoProcessorConfig:(id)config openGLContext:(id)glcontext device:(struct shared_ptr<igl::IDevice> { struct IDevice * x0; struct __shared_weak_count * x1; })device resourcePool:(struct shared_ptr<iglu::resourceloader::ResourcePool> { struct ResourcePool * x0; struct __shared_weak_count * x1; })pool usingSharedPixelBufferPool:(BOOL)pool GLAppStateMonitor:(id)monitor;
- (void)dealloc;
- (void)_handleBackgroundNotification:(id)notification;
- (void)_handleForegroundNotification:(id)notification;
- (void)_handlePipStateChangeNotification:(id)notification;
- (id)latestProcessingSoftException;
- (void)frameFinishedCallback;
- (void)_finish;
- (BOOL)insertFilter:(id)filter atIndex:(unsigned long long)index;
- (id)removeFilterAtIndex:(unsigned long long)index;
- (unsigned long long)filtersCount;
- (void)sendFilterCommand:(id)command toFilterAtIndex:(unsigned long long)index;
- (struct __CVBuffer *)createPixelBuffer:(struct opaqueCMSampleBuffer *)buffer withPixelBufferPool:(struct __CVPixelBufferPool *)pool error:(id *)error;
- (struct opaqueCMSampleBuffer *)createProcessedSampleBuffer:(struct opaqueCMSampleBuffer *)buffer;
- (void)filterContext:(id)context didReceiveNotification:(id)notification;
- (void)setSlowLoading:(BOOL)loading condition:(id /* block */)condition;
- (BOOL)hasFilters:(id)filters;
@end

#endif /* FBVideoProcessor_h */
