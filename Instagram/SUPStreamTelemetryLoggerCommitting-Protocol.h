//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SUPStreamTelemetryLoggerCommitting_Protocol_h
#define SUPStreamTelemetryLoggerCommitting_Protocol_h
@import Foundation;

@protocol SUPStreamTelemetryLoggerCommitting <NSObject>
/* instance methods */
- (void)logInProgressEventWithTimestamp:(long long)timestamp buildFlavor:(id)flavor deviceBuildType:(id)type deviceType:(id)type socVersion:(id)version appStreamSessionId:(id)id coldStartSessionId:(id)id warmStartSessionId:(id)id smartGlassesStreamSessionId:(id)id healthStatus:(id)status isLive:(BOOL)live videoEisLatency:(long long)latency videoEncodingLatency:(long long)latency;
- (void)logFoASessionEndEventWithTimestamp:(long long)timestamp appStreamSessionStartTimestamp:(long long)timestamp buildFlavor:(id)flavor deviceBuildType:(id)type deviceType:(id)type socVersion:(id)version appStreamSessionId:(id)id healthStatus:(id)status startHealthStatus:(id)status liveDuration:(long long)duration preLiveDuration:(long long)duration isLive:(BOOL)live broadcastId:(id)id;
- (void)logErrorEventWithTimestamp:(long long)timestamp buildFlavor:(id)flavor deviceBuildType:(id)type deviceType:(id)type socVersion:(id)version appStreamSessionId:(id)id coldStartSessionId:(id)id warmStartSessionId:(id)id smartGlassesStreamSessionId:(id)id streamStage:(long long)stage failureCategory:(long long)category failureReason:(id)reason isLive:(BOOL)live;
- (void)logSessionEndEventWithTimestamp:(long long)timestamp smartGlassesStreamSessionStartTimestamp:(long long)timestamp buildFlavor:(id)flavor deviceBuildType:(id)type deviceType:(id)type socVersion:(id)version appStreamSessionId:(id)id coldStartSessionId:(id)id warmStartSessionId:(id)id smartGlassesStreamSessionId:(id)id healthStatus:(id)status startHealthStatus:(id)status glassPhoneAudio:(id)audio glassPhoneVideo:(id)video phoneServerAudio:(id)audio phoneServerVideo:(id)video latency:(id)latency isLive:(BOOL)live broadcastId:(id)id;
- (void)logColdStartWithBuildFlavor:(id)flavor deviceBuildType:(id)type deviceType:(id)type socVersion:(id)version appStreamSessionId:(id)id coldStartSessionId:(id)id result:(long long)result failureReason:(id)reason;
- (void)logWarmStartWithBuildFlavor:(id)flavor deviceBuildType:(id)type deviceType:(id)type socVersion:(id)version appStreamSessionId:(id)id coldStartSessionId:(id)id warmStartSessionId:(id)id warmStartSequenceId:(long long)id result:(long long)result failureReason:(id)reason;
@end

#endif /* SUPStreamTelemetryLoggerCommitting_Protocol_h */
