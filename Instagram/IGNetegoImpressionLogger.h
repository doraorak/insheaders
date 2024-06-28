//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNetegoImpressionLogger_h
#define IGNetegoImpressionLogger_h
@import Foundation;

#include "IGNetegoFalcoLoggerExperiments.h"

@class NSMutableSet;

@interface IGNetegoImpressionLogger : NSObject {
  /* instance variables */
  NSMutableSet *_loggedImpressions;
  NSMutableSet *_loggedExperimentalImpressions;
  IGNetegoFalcoLoggerExperiments *_experiments;
}

/* instance methods */
- (id)initWithExperiments:(id)experiments;
@end

#endif /* IGNetegoImpressionLogger_h */
