//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAREngineSurface_h
#define FBAREngineSurface_h
@import Foundation;

@protocol struct shared_ptr<igl::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; }, {shared_ptr<igl::ITexture>="__ptr_"^{ITexture}"__cntrl_"^{__shared_weak_count}};

@interface FBAREngineSurface : NSObject {
  /* instance variables */
  unsigned int _pixelFormatType;
  struct __CVOpenGLESTextureCache * _textureCache;
  struct shared_ptr<igl::ITexture> { struct ITexture *__ptr_; struct __shared_weak_count *__cntrl_; } _iglLumaTexture;
  struct shared_ptr<igl::ITexture> { struct ITexture *__ptr_; struct __shared_weak_count *__cntrl_; } _iglRgbaTexture;
}

@property (readonly, nonatomic) struct __CVBuffer * pixelBuffer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) struct shared_ptr<igl::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; } iglChromaTexture;

/* instance methods */
- (id)initWithPixelBuffer:(struct __CVBuffer *)buffer textureCache:(struct __CVOpenGLESTextureCache *)cache;
- (void)dealloc;
@end

#endif /* FBAREngineSurface_h */
