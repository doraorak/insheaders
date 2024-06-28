//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBBGRAtoYUVConverterFilter_h
#define FBBGRAtoYUVConverterFilter_h
@import Foundation;

#include "FBOpenGLFilter.h"
#include "FBFilterCroppingWithTransform-Protocol.h"
#include "FBOpenGLProgram.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBBGRAtoYUVConverterFilter : FBOpenGLFilter<NSCopying, FBFilterCroppingWithTransform> {
  /* instance variables */
  BOOL _flip;
  FBOpenGLProgram *_uvProgram;
  struct _GLKMatrix4 { float x[16] m; } _croppingContentTransform;
  struct _GLKMatrix4 { float x[16] m; } _croppingTextureTransform;
  struct FBBGRAtoYUVConverterFilterUniformData { struct { x[4] columns; } contentTransform; struct { x[4] columns; } texCoordTransform; } _uniformData;
}

@property (nonatomic) struct _GLKMatrix4 { float x0[16] } contentTransform;
@property (nonatomic) struct _GLKMatrix4 { float x0[16] } textureTransform;
@property (readonly, copy, nonatomic) NSString *fullFragmentShader;
@property (readonly, copy, nonatomic) NSString *fullVertexShader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)inputPixelFormat;
- (unsigned long long)outputPixelFormat;
- (void)finalizeRendering;
- (id)fullVertexShaderUV;
- (id)fullFragmentShaderUV;
- (void)setCroppingContentTransform:(struct _GLKMatrix4 { float x0[16] })transform;
- (void)setCroppingTextureTransform:(struct _GLKMatrix4 { float x0[16] })transform;
- (BOOL)flip;
- (void)configureProgram:(id)program;
- (BOOL)render:(id)render to:(id)to program:(id)program time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time iglActivations:(struct FBIGLActivations { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })activations;
- (BOOL)render:(id)render to:(id)to time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time iglActivations:(struct FBIGLActivations { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })activations;
- (BOOL)render:(id)render to:(id)to program:(id)program time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (const char *)metalVertexShader;
- (const char *)metalFragShader;
- (const char *)metalVertexShaderUV;
- (const char *)metalFragShaderUV;
- (BOOL)iglRender:(id)render to:(id)to;
- (struct shared_ptr<iglu::ManagedUniformBuffer> { struct ManagedUniformBuffer * x0; struct __shared_weak_count * x1; })getUniformBuffer;
- (struct FilterUniformUpdate { void * x0; unsigned long long x1; unsigned long long x2; })prepareFilterUniformUpdate;
@end

#endif /* FBBGRAtoYUVConverterFilter_h */