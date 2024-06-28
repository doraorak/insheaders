//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGLProgram_h
#define IGGLProgram_h
@import Foundation;

@class EAGLContext, NSDictionary, NSMutableArray, NSMutableSet;

@interface IGGLProgram : NSObject {
  /* instance variables */
  EAGLContext *_context;
  NSMutableSet *_dirtyUniforms;
  BOOL _validated;
}

@property (retain, nonatomic) NSMutableArray *deallocBlocks;
@property (readonly, nonatomic) unsigned int program;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *uniforms;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithVertexShader:(id)shader fragmentShader:(id)shader;
- (id)initWithContext:(id)context vertexShader:(id)shader fragmentShader:(id)shader;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (id)objectForKeyedSubscript:(id)subscript;
@end

#endif /* IGGLProgram_h */