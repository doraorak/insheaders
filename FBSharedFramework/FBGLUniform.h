//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBGLUniform_h
#define FBGLUniform_h
@import Foundation;

@class NSString, NSValue;

@interface FBGLUniform : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int location;
@property (readonly, nonatomic) int size;
@property (readonly, nonatomic) unsigned int type;
@property (retain, nonatomic) NSValue *value;

/* instance methods */
- (id)initWithName:(id)name location:(int)location size:(int)size type:(unsigned int)type;
- (void)flush;
@end

#endif /* FBGLUniform_h */
