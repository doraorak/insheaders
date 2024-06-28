//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMPGestureOutput_h
#define FBMPGestureOutput_h
@import Foundation;

#include "FBMPSingleOutput.h"

@interface FBMPGestureOutput : FBMPSingleOutput {
  /* instance variables */
  id /* block */ _callback;
}

/* class methods */
+ (id)newGestureOutputWithCallback:(id /* block */)callback;

/* instance methods */
- (id)initWithGestureType:(Class)type callback:(id /* block */)callback;
- (id)initWithCallback:(id /* block */)callback;
- (void)consume:(id)consume metadata:(struct FBMPDataMetadata { unsigned long long x0; unsigned long long x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })metadata;
@end

#endif /* FBMPGestureOutput_h */
