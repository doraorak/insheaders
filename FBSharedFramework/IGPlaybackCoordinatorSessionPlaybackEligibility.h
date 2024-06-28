//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPlaybackCoordinatorSessionPlaybackEligibility_h
#define IGPlaybackCoordinatorSessionPlaybackEligibility_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@interface IGPlaybackCoordinatorSessionPlaybackEligibility : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  long long _bypass_state;
  long long _override_state;
  long long _overrideActive_state;
}

/* class methods */
+ (id)bypassWithState:(long long)state;
+ (id)default;
+ (id)ineligible;
+ (id)overrideActiveWithState:(long long)state;
+ (id)overrideWithState:(long long)state;
@end

#endif /* IGPlaybackCoordinatorSessionPlaybackEligibility_h */
