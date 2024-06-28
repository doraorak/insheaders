//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTexture_h
#define IGTexture_h
@import Foundation;

@class EAGLContext, GLKTextureInfo;

@interface IGTexture : NSObject {
  /* instance variables */
  GLKTextureInfo *_textureInfo;
}

@property (retain, nonatomic) EAGLContext *context;
@property (nonatomic) long long wrapSMode;
@property (nonatomic) long long wrapTMode;
@property (nonatomic) long long minFilter;
@property (nonatomic) long long magFilter;

/* instance methods */
- (id)initWithContext:(id)context textureInfo:(id)info;
- (id)initWithContext:(id)context cgImage:(struct CGImage *)image options:(id)options error:(id *)error;
- (id)initWithContext:(id)context contentsOfFile:(id)file options:(id)options error:(id *)error;
- (id)initWithContext:(id)context contentsOfData:(id)data options:(id)options error:(id *)error;
- (id)initWithContext:(id)context width:(int)width height:(int)height data:(void *)data;
- (void)dealloc;
@end

#endif /* IGTexture_h */
