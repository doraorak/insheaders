//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _IGLRenderBufferHolder_h
#define _IGLRenderBufferHolder_h
@import Foundation;

@protocol {weak_ptr<igl::opengl::TextureTarget>="__ptr_"^{TextureTarget}"__cntrl_"^{__shared_weak_count}};

@interface _IGLRenderBufferHolder : NSObject {
  /* instance variables */
  struct weak_ptr<igl::opengl::TextureTarget> { struct TextureTarget *__ptr_; struct __shared_weak_count *__cntrl_; } _renderBuffer;
}

/* instance methods */
@end

#endif /* _IGLRenderBufferHolder_h */
