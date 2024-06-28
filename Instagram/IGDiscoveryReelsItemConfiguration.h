//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryReelsItemConfiguration_h
#define IGDiscoveryReelsItemConfiguration_h
@import Foundation;

#include "IGReelsItemConfigurationType-Protocol.h"

@interface IGDiscoveryReelsItemConfiguration : NSObject<IGReelsItemConfigurationType> // (Swift)
/* instance methods */
- (BOOL)shouldShowWAIST;
- (BOOL)shouldShowPositiveControls;
- (BOOL)shouldShowNegativeControls;
- (BOOL)shouldShowControlCenterEntryPoint;
- (id)init;
@end

#endif /* IGDiscoveryReelsItemConfiguration_h */
