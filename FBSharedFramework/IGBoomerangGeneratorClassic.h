//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBoomerangGeneratorClassic_h
#define IGBoomerangGeneratorClassic_h
@import Foundation;

#include "IGBoomerangGenerator.h"

@interface IGBoomerangGeneratorClassic : IGBoomerangGenerator
/* instance methods */
- (id)frameInfoSequenceForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withCaptureFramrateInMillseconds:(long long)millseconds;
- (long long)durationPerFrame;
@end

#endif /* IGBoomerangGeneratorClassic_h */
