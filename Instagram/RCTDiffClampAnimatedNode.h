//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTDiffClampAnimatedNode_h
#define RCTDiffClampAnimatedNode_h
@import Foundation;

#include "RCTValueAnimatedNode.h"

@class NSNumber;

@interface RCTDiffClampAnimatedNode : RCTValueAnimatedNode {
  /* instance variables */
  NSNumber *_inputNodeTag;
  double _min;
  double _max;
  double _lastValue;
}

/* instance methods */
- (id)initWithTag:(id)tag config:(id)config;
- (void)onAttachedToNode:(id)node;
- (void)performUpdate;
- (double)inputNodeValue;
@end

#endif /* RCTDiffClampAnimatedNode_h */
