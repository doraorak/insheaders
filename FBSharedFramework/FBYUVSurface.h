//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBYUVSurface_h
#define FBYUVSurface_h
@import Foundation;

#include "FBSurface.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol struct shared_ptr<igl::Color, struct shared_ptr<igl::IFramebuffer> { struct IFramebuffer * x0; struct __shared_weak_count * x1; }, struct shared_ptr<igl::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; }, {shared_ptr<igl::IFramebuffer>="__ptr_"^{IFramebuffer}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<igl::ITexture>="__ptr_"^{ITexture}"__cntrl_"^{__shared_weak_count}};

@interface FBYUVSurface : FBSurface<NSObject> {
  /* instance variables */
  struct __CVBuffer * _chromaCVTexture;
  unsigned int _chromaTexture;
  unsigned int _chromaTextureTarget;
  unsigned int _framebufferUV;
}

@property (readonly, nonatomic) struct shared_ptr<igl::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; } iglChromaTexture;
@property (readonly, nonatomic) const char * chromaName;
@property (readonly, nonatomic) struct shared_ptr<igl::IFramebuffer> { struct IFramebuffer * x0; struct __shared_weak_count * x1; } iglFramebufferUV;
@property (readonly, nonatomic) unsigned long long colorSpace;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct __CVBuffer * pixelBuffer;
@property (readonly, nonatomic) BOOL flipped;
@property (readonly, nonatomic) BOOL hdr;
@property (readonly, nonatomic) struct shared_ptr<igl::ITexture> { struct ITexture * x0; struct __shared_weak_count * x1; } iglTexture;
@property (readonly, nonatomic) const char * name;
@property (readonly, nonatomic) struct shared_ptr<igl::IFramebuffer> { struct IFramebuffer * x0; struct __shared_weak_count * x1; } iglFramebuffer;
@property (readonly, nonatomic) struct shared_ptr<igl::Color> iglClearColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)bindTexture;
- (unsigned int)createTextureIfNeeded;
- (void)flushBuffer;
- (void)createTextureIfNeededForUniformName:(id)name;
- (void)bindTextureForUniformName:(id)name;
@end

#endif /* FBYUVSurface_h */
