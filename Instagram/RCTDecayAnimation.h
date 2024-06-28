//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTDecayAnimation_h
#define RCTDecayAnimation_h
@import Foundation;

#include "RCTAnimationDriver-Protocol.h"
#include "RCTValueAnimatedNode.h"

@class NSNumber, NSString;

@interface RCTDecayAnimation : NSObject<RCTAnimationDriver> {
  /* instance variables */
  double _velocity;
  double _deceleration;
  double _frameStartTime;
  double _fromValue;
  double _lastValue;
  long long _iterations;
  long long _currentLoop;
  id /* block */ _callback;
}

@property (retain, nonatomic) NSNumber *animationId;
@property (retain, nonatomic) RCTValueAnimatedNode *valueNode;
@property (nonatomic) BOOL animationHasBegun;
@property (nonatomic) BOOL animationHasFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithId:(id)id config:(id)config forNode:(id)node callBack:(id /* block */)back;
- (void)resetAnimationConfig:(id)config;
- (id)init;
- (void)startAnimation;
- (void)stopAnimation;
- (void)stepAnimationWithTime:(double)time;
- (void)updateValue:(double)value;
@end

#endif /* RCTDecayAnimation_h */
