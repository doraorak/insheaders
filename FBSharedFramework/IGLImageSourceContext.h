//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLImageSourceContext_h
#define IGLImageSourceContext_h
@import Foundation;

#include "FBCCPixelBufferPoolCache.h"
#include "ImageSourceContext-Protocol.h"
#include "ImageSourceContextTextureDelegate-Protocol.h"
#include "MTLDevice-Protocol.h"

@class NSMutableArray, NSMutableDictionary;
@protocol {shared_ptr<igl::ICommandQueue>="__ptr_"^{ICommandQueue}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<igl::IDevice>="__ptr_"^{IDevice}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::cache::WeakCache<igl::IShaderModule, igl::ShaderModuleDesc>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::filterkit::IFilterFactory>="__ptr_"^{IFilterFactory}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::resourceloader::IResourceLoader>="__ptr_"^{IResourceLoader}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::resourceloader::ResourcePool>="__ptr_"^{ResourcePool}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<iglu::resourceloader::ios::ResourceLoader>="__ptr_"^{ResourceLoader}"__cntrl_"^{__shared_weak_count}};

@interface IGLImageSourceContext : NSObject<ImageSourceContext> {
  /* instance variables */
  struct shared_ptr<iglu::resourceloader::ios::ResourceLoader> { struct ResourceLoader *__ptr_; struct __shared_weak_count *__cntrl_; } _iosResourceLoader;
  struct shared_ptr<iglu::cache::WeakCache<igl::IShaderModule, igl::ShaderModuleDesc>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _shaderCache;
  struct shared_ptr<igl::ICommandQueue> { struct ICommandQueue *__ptr_; struct __shared_weak_count *__cntrl_; } _commandQueue;
  double _maxTextureDimension;
  NSMutableDictionary *_processorCache;
  NSMutableDictionary *_surfaceCache;
  NSMutableArray *_processorPool;
  NSMutableArray *_surfacePool;
  id _lock;
}

@property (readonly, nonatomic) FBCCPixelBufferPoolCache *pixelBufferPoolCache;
@property (weak, nonatomic) NSObject<ImageSourceContextTextureDelegate> *textureDelegate;
@property (nonatomic) BOOL processorCachingEnabled;
@property (nonatomic) BOOL surfaceCachingEnabled;
@property (nonatomic) long long scalingMethod;
@property (nonatomic) BOOL shouldPrioritizeSurfaceReuse;
@property (nonatomic) BOOL useCommonCommandQueue;
@property (nonatomic) BOOL shouldResetFilterInputOutputAfterRender;
@property (readonly, nonatomic) const void * device;
@property (readonly, nonatomic) const void * resourceLoader;
@property (readonly, nonatomic) const void * resourcePool;
@property (readonly, nonatomic) const void * filterFactory;
@property (readonly, nonatomic) NSObject<MTLDevice> *metalDevice;

/* class methods */
+ (id)sharedShaderCache;

/* instance methods */
- (id)init;
- (id)initWithDevice:(struct shared_ptr<igl::IDevice> { struct IDevice * x0; struct __shared_weak_count * x1; })device resourceLoader:(struct shared_ptr<iglu::resourceloader::IResourceLoader> { struct IResourceLoader * x0; struct __shared_weak_count * x1; })loader resourcePool:(struct shared_ptr<iglu::resourceloader::ResourcePool> { struct ResourcePool * x0; struct __shared_weak_count * x1; })pool shaderCache:(struct shared_ptr<iglu::cache::WeakCache<igl::IShaderModule, igl::ShaderModuleDesc>> { void * x0; struct __shared_weak_count * x1; })cache;
- (id)removeAndReturnProcessorFromPoolWithIdentifier:(id)identifier;
- (id)makeRenderableImageSourceProcessorAndReturnError:(id *)error;
- (id)makeColorSpaceMatchingImageSourceProcessorAndReturnError:(id *)error;
- (id)makeGradientImageSourceProcessorWithColors:(id)colors error:(id *)error;
- (id)makeLanczosImageSourceProcessorForUpscaling:(BOOL)upscaling error:(id *)error;
- (id)makeImageSourceProcessorWithIdentifier:(id)identifier error:(id *)error;
- (id)makeSharedRenderCommandEncoderWithOutput:(id)output commandBuffer:(id)buffer shouldClear:(BOOL)clear error:(id *)error;
- (struct __CVBuffer *)makePixelBufferWithSize:(struct CGSize { double x0; double x1; })size format:(unsigned int)format error:(id *)error;
- (id)_removeAndReturnSurfaceFromPoolWithSize:(struct CGSize { double x0; double x1; })size pixelBufferBacking:(BOOL)backing;
- (id)makeSurfaceWithTexture:(id)texture colorSpace:(struct CGColorSpace *)space alphaIsPremultiplied:(BOOL)premultiplied label:(id)label error:(id *)error;
- (id)makeSurfaceWithPixelBuffer:(struct __CVBuffer *)buffer colorSpace:(struct CGColorSpace *)space alphaIsPremultiplied:(BOOL)premultiplied label:(id)label error:(id *)error;
- (id)makeSurfaceWithSize:(struct CGSize { double x0; double x1; })size format:(unsigned long long)format colorSpace:(struct CGColorSpace *)space label:(id)label pixelBufferBacking:(BOOL)backing alphaIsPremultiplied:(BOOL)premultiplied error:(id *)error;
- (struct shared_ptr<igl::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; })_makeIGLTextureWithPixelBuffer:(struct __CVBuffer *)buffer plane:(unsigned long long)plane error:(id *)error;
- (struct shared_ptr<igl::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; })_makeIGLTextureWithSize:(struct CGSize { double x0; double x1; })size format:(unsigned long long)format;
- (id)cachedProcessorWithKey:(id)key;
- (void)cacheProcessor:(id)processor withKey:(id)key;
- (void)purgeCachedProcessorsWithoutKeys:(id)keys;
- (id)cachedSurfaceWithKey:(id)key;
- (void)cacheSurface:(id)surface withKey:(id)key;
- (void)purgeCachedSurfacesWithoutKeys:(id)keys;
- (void)returnProcessorsToPool:(id)pool;
- (void)returnSurfacesToPool:(id)pool;
- (void)flushSurfacePool;
- (void)flushProcessorPool;
@end

#endif /* IGLImageSourceContext_h */