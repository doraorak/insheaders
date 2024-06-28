//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSystemicNavigationLatencyNavigationHolder_h
#define IGSystemicNavigationLatencyNavigationHolder_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface IGSystemicNavigationLatencyNavigationHolder : NSObject<NSCopying> {
  /* instance variables */
  NSString *_sourceNavigationChain;
  NSString *_destinationNavigationChain;
  NSString *_sourceEndpoint;
  NSString *_destinationEndpoint;
}

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGSystemicNavigationLatencyNavigationHolder_h */