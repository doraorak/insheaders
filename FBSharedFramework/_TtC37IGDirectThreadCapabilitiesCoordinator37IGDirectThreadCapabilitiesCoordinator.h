//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC37IGDirectThreadCapabilitiesCoordinator37IGDirectThreadCapabilitiesCoordinator_h
#define _TtC37IGDirectThreadCapabilitiesCoordinator37IGDirectThreadCapabilitiesCoordinator_h
@import Foundation;

#include "_TtP45IGDirectThreadCapabilitiesCoordinatorProtocol45IGDirectThreadCapabilitiesCoordinatorProtocol_-Protocol.h"

@interface _TtC37IGDirectThreadCapabilitiesCoordinator37IGDirectThreadCapabilitiesCoordinator : NSObject<_TtP45IGDirectThreadCapabilitiesCoordinatorProtocol45IGDirectThreadCapabilitiesCoordinatorProtocol_> { // (Swift)
  /* instance variables */
   user;
   featureSetProvider;
   staticHelpers;
   evaluators;
   userDefaults;
}

/* class methods */
+ (unsigned long long)localThreadCapabilities;

/* instance methods */
- (id)initWithUser:(id)user userDefaults:(id)defaults featureSetProvider:(id)provider;
- (BOOL)isFeatureEnabled:(id)enabled threadKey:(id)key threadMetadata:(id)metadata;
- (id)init;
@end

#endif /* _TtC37IGDirectThreadCapabilitiesCoordinator37IGDirectThreadCapabilitiesCoordinator_h */