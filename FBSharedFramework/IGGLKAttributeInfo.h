//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGLKAttributeInfo_h
#define IGGLKAttributeInfo_h
@import Foundation;

@class NSData;

@interface IGGLKAttributeInfo : NSObject {
  /* instance variables */
  BOOL _needsNewBuffer;
}

@property (nonatomic) unsigned int location;
@property (nonatomic) unsigned int buffer;
@property (retain, nonatomic) NSData *data;

/* instance methods */
@end

#endif /* IGGLKAttributeInfo_h */
