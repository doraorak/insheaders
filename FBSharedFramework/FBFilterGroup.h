//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBFilterGroup_h
#define FBFilterGroup_h
@import Foundation;

#include "FBFilter.h"
#include "FBBGRAtoYUVConverterFilter.h"
#include "FBCCPixelBufferPoolCache.h"
#include "FBFilter.h"
#include "FBFilterCropping-Protocol.h"
#include "FBIGLUFilter.h"
#include "FBImageFilter.h"
#include "NSCopying-Protocol.h"
#include "NSFastEnumeration-Protocol.h"

@class NSError, NSHashTable, NSMutableArray;
@protocol {SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault>="state_"{atomic<unsigned int>="__a_"{__cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>="__a_value"AI}}}, {shared_ptr<igl::IDevice>="__ptr_"^{IDevice}"__cntrl_"^{__shared_weak_count}};

@interface FBFilterGroup : FBFilter<NSCopying, NSFastEnumeration> {
  /* instance variables */
  struct shared_ptr<igl::IDevice> { struct IDevice *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
  NSMutableArray *_filters;
  NSMutableArray *_filtersRuntime;
  NSHashTable *_croppableFilters;
  FBBGRAtoYUVConverterFilter *_BGRAToYUVFilter;
  FBImageFilter *_YUVToBGRAFilter;
  long long _outputFilterIndex;
  BOOL _supportHDR;
  BOOL _isFiltersOutputPixelFormatRGBA16;
  FBIGLUFilter *_colorConvertFilter;
  NSObject<FBFilterCropping> *_configureCacheFilter;
  struct CGSize { double width; double height; } _configureCacheInputSize;
  struct CGSize { double width; double height; } _configureCacheOutputSize;
  BOOL _needsConfigure;
  struct SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault> { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { atomic  __a_value; unsigned int x0; } __a_; } state_; } _dataMutex;
  FBCCPixelBufferPoolCache *_pixelBufferPoolCache;
  struct __CVOpenGLESTextureCache * _textureCache;
  NSError *_lastRenderingError;
  BOOL _isIGLMetal;
  BOOL _shouldSupportMismatchFormatInLastFilter;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRectangle;
@property (nonatomic) struct _GLKMatrix4 { float x0[16] } contentTransform;
@property BOOL cropAspectFitUsingPreviewAspectRatio;
@property (readonly) unsigned long long count;
@property (readonly, nonatomic) FBFilter *firstFilter;
@property (readonly, nonatomic) FBFilter *lastFilter;

/* instance methods */
- (id)initWithDevice:(struct shared_ptr<igl::IDevice> { struct IDevice * x0; struct __shared_weak_count * x1; })device initialFilters:(id)filters pixelBufferPoolCache:(id)cache textureCache:(struct __CVOpenGLESTextureCache *)cache supportHDR:(BOOL)hdr;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)inputPixelFormat;
- (unsigned long long)outputPixelFormat;
- (void)insertFilter:(id)filter atIndex:(unsigned long long)index;
- (void)removeFilterAtIndex:(unsigned long long)index;
- (void)setObject:(id)object atIndexedSubscript:(unsigned long long)subscript;
- (id)objectAtIndexedSubscript:(unsigned long long)subscript;
- (unsigned long long)countByEnumeratingWithState:(struct  *)state objects:(id *)objects count:(unsigned long long)count;
- (void)setFilterContext:(id)context;
- (BOOL)iglRender:(id)render to:(id)to time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)render:(id)render to:(id)to time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)setExperimentManager:(id)manager;
- (void)finalizeRendering;
@end

#endif /* FBFilterGroup_h */