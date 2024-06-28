//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOneCameraLogger_h
#define IGOneCameraLogger_h
@import Foundation;

#include "IGOneCameraConfiguration.h"
#include "NSObject-Protocol.h"

@class FBCCFacebookPerformanceLogger, FBCaptureCoordinatorLogger, NSString;

@interface IGOneCameraLogger : NSObject<NSObject> {
  /* instance variables */
  IGOneCameraConfiguration *_configuration;
  FBCCFacebookPerformanceLogger *_performanceLogger;
  NSString *_productSessionID;
}

@property (readonly, nonatomic) FBCaptureCoordinatorLogger *captureCoordinatorLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)setProductSessionId:(id)id;
- (id)productSessionID;
- (id)performanceLogger;
@end

#endif /* IGOneCameraLogger_h */
