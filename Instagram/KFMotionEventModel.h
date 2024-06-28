//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFMotionEventModel_h
#define KFMotionEventModel_h
@import Foundation;

#include "KFEventModel.h"

@class CMDeviceMotion;

@interface KFMotionEventModel : KFEventModel {
  /* instance variables */
  unsigned long long _motionDataOptions;
  double _relativeRoll;
  double _relativePitch;
  double _relativeYaw;
  CMDeviceMotion *_initialMotion;
  CMDeviceMotion *_currentMotion;
}

/* instance methods */
- (id)initWithMotionDataOptions:(unsigned long long)options initialDeviceMotion:(id)motion currentDeviceMotion:(id)motion;
- (id)initWithMotionDataOptions:(unsigned long long)options;
- (id)createEventWithInteractivityToolbox:(id)toolbox;
- (unsigned long long)hash;
@end

#endif /* KFMotionEventModel_h */