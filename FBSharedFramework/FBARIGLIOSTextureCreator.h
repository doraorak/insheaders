//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARIGLIOSTextureCreator_h
#define FBARIGLIOSTextureCreator_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface FBARIGLIOSTextureCreator : NSObject<NSObject> {
  /* instance variables */
  struct __CVOpenGLESTextureCache * _oglTextureCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithOpenGLESTextureCache:(struct __CVOpenGLESTextureCache *)cache;

/* instance methods */
- (id)initWithOpenGLESTextureCache:(struct __CVOpenGLESTextureCache *)cache;
- (void)dealloc;
- (struct unique_ptr<igl::ITexture, std::default_delete<igl::ITexture>> { struct __compressed_pair<igl::ITexture *, std::default_delete<igl::ITexture>> { struct ITexture * x0; } x0; })createTextureFromPlaneAtIndex:(unsigned long long)index ofPixelBuffer:(struct __CVBuffer *)buffer withDevice:(void *)device;
@end

#endif /* FBARIGLIOSTextureCreator_h */