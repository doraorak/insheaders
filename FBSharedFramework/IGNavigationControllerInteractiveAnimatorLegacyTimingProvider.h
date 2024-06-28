//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNavigationControllerInteractiveAnimatorLegacyTimingProvider_h
#define IGNavigationControllerInteractiveAnimatorLegacyTimingProvider_h
@import Foundation;

#include "IGNavigationControllerInteractiveAnimatorTimingProvider-Protocol.h"

@class NSString;

@interface IGNavigationControllerInteractiveAnimatorLegacyTimingProvider : NSObject<IGNavigationControllerInteractiveAnimatorTimingProvider> {
  /* instance variables */
  double _transitionDuration;
  double _springMass;
  double _springStiffness;
  double _springDamping;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithTransitionDuration:(double)duration springMass:(double)mass springStiffness:(double)stiffness springDamping:(double)damping;
- (id)timingParametersWithVelocity:(double)velocity;
- (double)transitionDuration;
@end

#endif /* IGNavigationControllerInteractiveAnimatorLegacyTimingProvider_h */
