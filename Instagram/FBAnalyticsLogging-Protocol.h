//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAnalyticsLogging_Protocol_h
#define FBAnalyticsLogging_Protocol_h
@import Foundation;

@protocol FBAnalyticsLogging <NSObject>
/* instance methods */
- (void)logUntypedEvent:(id)event logEventMetadata:(struct FBStructuredLogEventMetadata { id x0; id x1; id x2; double x3; double x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; long long x8; BOOL x9; struct FBAnalyticsSerializedIdentities { id x0; id x1; id x2; } x10; struct FBAnalyticsPrivacyContext { id x0; id x1; id x2; } x11; struct FBAnalyticsSamplingResult { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; unsigned long long x4; } x12; double x13; unsigned long long x14; id x15; })metadata payloadBlock:(id /* block */)block;
@end

#endif /* FBAnalyticsLogging_Protocol_h */