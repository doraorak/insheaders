//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTSpringAnimation_h
#define RCTSpringAnimation_h
@import Foundation;

#include "RCTAnimationDriver-Protocol.h"
#include "RCTValueAnimatedNode.h"

@class NSNumber, NSString;

@interface RCTSpringAnimation : NSObject<RCTAnimationDriver> {
  /* instance variables */
  double _toValue;
  double _fromValue;
  BOOL _overshootClamping;
  double _restDisplacementThreshold;
  double _restSpeedThreshold;
  double _stiffness;
  double _damping;
  double _mass;
  double _initialVelocity;
  double _animationStartTime;
  double _animationCurrentTime;
  id /* block */ _callback;
  double _lastPosition;
  double _lastVelocity;
  long long _iterations;
  long long _currentLoop;
  double _t;
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
- (void)onUpdate:(double)update;
@end

#endif /* RCTSpringAnimation_h */
