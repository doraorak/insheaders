//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBGLContext_h
#define FBGLContext_h
@import Foundation;

#include "FBCCPixelBufferPoolCache.h"

@class EAGLContext, NSMutableArray;
@protocol {shared_ptr<igl::IDevice>="__ptr_"^{IDevice}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::resourceloader::ResourcePool>="__ptr_"^{ResourcePool}"__cntrl_"^{__shared_weak_count}};

@interface FBGLContext : NSObject {
  /* instance variables */
  NSMutableArray *_resources;
  struct shared_ptr<igl::IDevice> { struct IDevice *__ptr_; struct __shared_weak_count *__cntrl_; } _currentDevice;
  struct shared_ptr<iglu::resourceloader::ResourcePool> { struct ResourcePool *__ptr_; struct __shared_weak_count *__cntrl_; } _resourcePool;
  struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
}

@property (readonly, nonatomic) EAGLContext *systemGLContext;
@property (readonly, nonatomic) struct __CVOpenGLESTextureCache * textureCache;
@property (readonly, nonatomic) FBCCPixelBufferPoolCache *pixelBufferPoolCache;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (readonly, nonatomic) BOOL supportsTextureRGExtension;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maxTextureSize;
@property (readonly, nonatomic) unsigned int squareVertexBuffer;
@property (nonatomic) struct FBIGLActivations { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } iglActivations;

/* class methods */
+ (id)newWithSharedContext:(id)context;
+ (id)new;
+ (id)newConcurrentContext;
+ (id)newWithSystemGLContext:(id)glcontext;
+ (id)newWithIGLDevice:(struct shared_ptr<igl::IDevice> { struct IDevice * x0; struct __shared_weak_count * x1; })igldevice systemGLContext:(id)glcontext;
+ (id)currentContext;
+ (struct CGSize { double x0; double x1; })allowedSizeMatchingAspectRatioOfSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (void)dealloc;
- (id)initWithConcurrentBindingAllowed:(BOOL)allowed sharedContext:(id)context;
- (id)initWithConcurrentBindingAllowed:(BOOL)allowed systemGLContext:(id)glcontext;
- (struct shared_ptr<igl::IDevice> { struct IDevice * x0; struct __shared_weak_count * x1; })iglDevice;
- (struct shared_ptr<iglu::resourceloader::ResourcePool> { struct ResourcePool * x0; struct __shared_weak_count * x1; })resourcePool;
- (void)flush;
- (struct CGSize { double x0; double x1; })allowedSizeMatchingAspectRatioOfSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* FBGLContext_h */
