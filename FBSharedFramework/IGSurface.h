//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSurface_h
#define IGSurface_h
@import Foundation;

#include "NSObject-Protocol.h"

@class CALayer, EAGLContext, NSString;
@protocol struct shared_ptr<igl::IFramebuffer> { struct IFramebuffer * x0; struct __shared_weak_count * x1; }, struct shared_ptr<igl::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; }, {shared_ptr<igl::IFramebuffer>="__ptr_"^{IFramebuffer}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<igl::ITexture>="__ptr_"^{ITexture}"__cntrl_"^{__shared_weak_count}};

@interface IGSurface : NSObject<NSObject> {
  /* instance variables */
  unsigned int _framebuffer;
  unsigned int _renderbuffer;
  unsigned int _internalFormat;
  unsigned int _format;
  unsigned long long _planeIndex;
  BOOL _generatedTexture;
  struct __CVOpenGLESTextureCache * _textureCache;
  struct __CVBuffer * _cvTexture;
  EAGLContext *_glContext;
  CALayer *_layer;
  BOOL _layerRenderBufferStorageNeedsRefresh;
  BOOL _supportsIgl;
  unsigned int _textureTarget;
}

@property (readonly, nonatomic) unsigned int texture;
@property (nonatomic) struct shared_ptr<igl::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; } iglTexture;
@property (nonatomic) struct shared_ptr<igl::IFramebuffer> { struct IFramebuffer * x0; struct __shared_weak_count * x1; } iglFramebuffer;
@property (readonly, nonatomic) struct __CVBuffer * pixelBuffer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) unsigned char flipped;
@property (readonly, nonatomic) BOOL isConsumable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size error:(id *)error;
- (id)initWithPixelBuffer:(struct __CVBuffer *)buffer;
- (id)initWithPixelBuffer:(struct __CVBuffer *)buffer textureInternalFormat:(int)format textureFormat:(unsigned int)format planeIndex:(unsigned long long)index;
- (id)initWithTexture:(unsigned int)texture size:(struct CGSize { double x0; double x1; })size;
- (id)initWithTexture:(unsigned int)texture target:(unsigned int)target size:(struct CGSize { double x0; double x1; })size;
- (id)initWithIGTexture:(id)igtexture;
- (id)initWithFramebuffer:(unsigned int)framebuffer size:(struct CGSize { double x0; double x1; })size;
- (id)initWithLayer:(id)layer;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)present;
- (unsigned char)isFlipped;
@end

#endif /* IGSurface_h */
