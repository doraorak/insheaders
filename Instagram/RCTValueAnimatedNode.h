//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTValueAnimatedNode_h
#define RCTValueAnimatedNode_h
@import Foundation;

#include "RCTAnimatedNode.h"
#include "RCTValueAnimatedNodeObserver-Protocol.h"

@interface RCTValueAnimatedNode : RCTAnimatedNode

@property (nonatomic) double offset;
@property (nonatomic) double value;
@property (readonly, nonatomic) id animatedObject;
@property (weak, nonatomic) NSObject<RCTValueAnimatedNodeObserver> *valueObserver;

/* instance methods */
- (id)initWithTag:(id)tag config:(id)config;
- (void)flattenOffset;
- (void)extractOffset;
@end

#endif /* RCTValueAnimatedNode_h */