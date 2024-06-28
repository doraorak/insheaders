//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialGalleryCriticalPerformanceLogger_h
#define IGSundialGalleryCriticalPerformanceLogger_h
@import Foundation;

#include "IGCreationSessionStateProvider-Protocol.h"
#include "IGDebugInfoProvider-Protocol.h"

@class IGCameraLogger, IGStrictUserFlowLogger, NSString;

@interface IGSundialGalleryCriticalPerformanceLogger : NSObject<IGCreationSessionStateProvider, IGDebugInfoProvider> {
  /* instance variables */
  unsigned long long _instanceId;
  IGStrictUserFlowLogger *_strictLogger;
  long long _surface;
  IGCameraLogger *_cameraLogger;
  BOOL _isNewFlowIdOnTransitionEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)cssCameraDestination;
- (id)cssCameraSessionId;
- (id)cssEntryPoint;
- (id)cssSurface;
- (id)navChain;
@end

#endif /* IGSundialGalleryCriticalPerformanceLogger_h */