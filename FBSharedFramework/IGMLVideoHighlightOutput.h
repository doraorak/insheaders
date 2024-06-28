//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMLVideoHighlightOutput_h
#define IGMLVideoHighlightOutput_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray;

@interface IGMLVideoHighlightOutput : NSObject<NSCoding> {
  /* instance variables */
  NSArray *_sceneOutputs;
}

@property (retain, nonatomic) NSArray *frames;

/* class methods */
+ (id)newWithFrames:(id)frames;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGMLVideoHighlightOutput_h */