//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSafetyInterventionsPlatformImplementation_h
#define IGSafetyInterventionsPlatformImplementation_h
@import Foundation;

#include "IGSafetyInterventionsPlatformProtocol-Protocol.h"
#include "IGSafetyInterventionsPlatformUserLevelProtocol-Protocol.h"

@interface IGSafetyInterventionsPlatformImplementation : NSObject<IGSafetyInterventionsPlatformProtocol> { // (Swift)
  /* instance variables */
   dataSource;
}

@property (nonatomic, retain) NSObject<IGSafetyInterventionsPlatformUserLevelProtocol> *userLevel;

/* instance methods */
- (void)start;
- (id)init;
@end

#endif /* IGSafetyInterventionsPlatformImplementation_h */