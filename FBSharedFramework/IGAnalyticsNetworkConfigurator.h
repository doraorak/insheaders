//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnalyticsNetworkConfigurator_h
#define IGAnalyticsNetworkConfigurator_h
@import Foundation;

#include "FBAnalyticsNetworkConfigurator.h"

@interface IGAnalyticsNetworkConfigurator : FBAnalyticsNetworkConfigurator
/* instance methods */
- (BOOL)performRequestWithContext:(id)context requestContext:(struct FBAnalyticsRequestContext { unsigned long long x0; struct FBStructuredLogUploadMetadata { double x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; double x6; unsigned long long x7; long long x8; id x9; double x10; unsigned long long x11; id x12; } x1; id x2; id x3; })context;
@end

#endif /* IGAnalyticsNetworkConfigurator_h */
