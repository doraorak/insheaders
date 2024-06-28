//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP25SUPStreamTelemetryLogging25SUPStreamTelemetryLogging__Protocol_h
#define _TtP25SUPStreamTelemetryLogging25SUPStreamTelemetryLogging__Protocol_h
@import Foundation;

@protocol _TtP25SUPStreamTelemetryLogging25SUPStreamTelemetryLogging_ 

@property (nonatomic, weak) NSObject<_TtP25SUPStreamTelemetryLogging33SUPStreamTelemetryLoggingDelegate_> *delegate;
@property (nonatomic, weak) NSObject<SUPStreamTelemetryLoggerCommitting> *secondaryLogger;
@property (nonatomic, readonly) NSObject<SUPStreamTelemetryLoggerCommitting> *committer;

/* instance methods */
- (void)streamFeatureStarted;
- (void)streamFeatureEnded;
- (void)streamFeatureExited;
- (void)firstFrameRendered;
- (void)updateTelemetryWithAppStreamSessionID:(id)id;
- (void)updateTelemetryWithColdStartSessionId:(id)id;
- (void)updateTelemetryWithWarmStartSessionId:(id)id;
- (void)updateTelemetryWithStreamFeatureId:(id)id;
- (void)updateTelemetryWithHealthStatus:(id)status eventType:(long long)type;
- (void)updateTelemetryWithEvent:(id)event;
- (void)updateTelemetryWithError:(id)error;
- (void)updateTelemetryWithAudioConfig:(id)config;
- (void)updateTelemetryWithVideoConfig:(id)config;
- (void)updateTelemetryWithBroadcastAudioConfig:(struct { long long x0; long long x1; long long x2; unsigned long long x3; })config;
- (void)updateTelemetryWithBroadcastVideoConfig:(struct { long long x0; long long x1; long long x2; long long x3; unsigned long long x4; })config;
- (void)updateTelemetryWithLatency:(long long)latency;
- (void)supToggledOn;
- (void)supToggledOff;
- (id)cachedDeviceType;
- (id)cachedDeviceBuildType;
- (id)cachedSocVersion;
- (id)cachedBuildFlavor;
@end

#endif /* _TtP25SUPStreamTelemetryLogging25SUPStreamTelemetryLogging__Protocol_h */