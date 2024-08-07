//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCMTLRGBRenderer_h
#define FB_RTCMTLRGBRenderer_h
@import Foundation;

#include "FB_RTCMTLRenderer.h"
#include "MTLTexture-Protocol.h"

@protocol MTLBuffer;

@interface FB_RTCMTLRGBRenderer : FB_RTCMTLRenderer {
  /* instance variables */
  struct __CVMetalTextureCache * _textureCache;
  NSObject<MTLTexture> *_texture;
  NSObject<MTLBuffer> *_uniformsBuffer;
}

/* instance methods */
- (BOOL)addRenderingDestination:(id)destination;
- (BOOL)initializeTextureCache;
- (id)shaderSource;
- (void)getWidth:(int *)width height:(int *)height cropWidth:(int *)width cropHeight:(int *)height cropX:(int *)x cropY:(int *)y ofFrame:(id)frame;
- (BOOL)setupTexturesForFrame:(id)frame;
- (void)uploadTexturesToRenderEncoder:(id)encoder;
- (void)dealloc;
@end

#endif /* FB_RTCMTLRGBRenderer_h */
