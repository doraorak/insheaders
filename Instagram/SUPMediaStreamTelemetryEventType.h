//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SUPMediaStreamTelemetryEventType_h
#define SUPMediaStreamTelemetryEventType_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface SUPMediaStreamTelemetryEventType : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_canonicals_deviceType;
  NSString *_canonicals_deviceBuildType;
  NSString *_canonicals_socVersion;
  NSString *_canonicals_buildFlavor;
  long long _start_videoConvergenceLatencyMs;
  long long _start_videoStartTTFFMs;
  long long _start_audioStartTTFFMs;
  long long _start_batteryPercentage;
  long long _start_thermalState;
  BOOL _configureAudio_audioOn;
  NSString *_configureAudio_audioMime;
  long long _configureAudio_audioSampleRateHz;
  long long _configureAudio_audioBitrate;
  long long _configureAudio_audioNumChannels;
  long long _configureAudio_audioCodecProfile;
  long long _configureAudio_audioStartTTFFMs;
  BOOL _configureVideo_videoOn;
  NSString *_configureVideo_videoMime;
  long long _configureVideo_videoWidth;
  long long _configureVideo_videoHeight;
  long long _configureVideo_videoFramerate;
  long long _configureVideo_videoBitrate;
  long long _configureVideo_videoIFrameIntervalMs;
  long long _configureVideo_videoConvergenceLatencyMs;
  long long _configureVideo_videoStartTTFFMs;
  long long _inProgress_videoEncodingLatencyMs;
  long long _inProgress_videoEISLatencyMs;
  long long _inProgress_batteryPercentage;
  long long _inProgress_thermalState;
  long long _end_batteryPercentage;
  long long _end_thermalState;
}

/* class methods */
+ (id)canonicalsWithDeviceType:(id)type deviceBuildType:(id)type socVersion:(id)version buildFlavor:(id)flavor;
+ (id)configureAudioWithAudioOn:(BOOL)on audioMime:(id)mime audioSampleRateHz:(long long)hz audioBitrate:(long long)bitrate audioNumChannels:(long long)channels audioCodecProfile:(long long)profile audioStartTTFFMs:(long long)ttffms;
+ (id)configureVideoWithVideoOn:(BOOL)on videoMime:(id)mime videoWidth:(long long)width videoHeight:(long long)height videoFramerate:(long long)framerate videoBitrate:(long long)bitrate videoIFrameIntervalMs:(long long)ms videoConvergenceLatencyMs:(long long)ms videoStartTTFFMs:(long long)ttffms;
+ (id)endWithBatteryPercentage:(long long)percentage thermalState:(long long)state;
+ (id)inProgressWithVideoEncodingLatencyMs:(long long)ms videoEISLatencyMs:(long long)ms batteryPercentage:(long long)percentage thermalState:(long long)state;
+ (id)startWithVideoConvergenceLatencyMs:(long long)ms videoStartTTFFMs:(long long)ttffms audioStartTTFFMs:(long long)ttffms batteryPercentage:(long long)percentage thermalState:(long long)state;

/* instance methods */
- (void)matchCanonicals:(id /* block */)canonicals start:(id /* block */)start configureAudio:(id /* block */)audio configureVideo:(id /* block */)video inProgress:(id /* block */)progress end:(id /* block */)end;
@end

#endif /* SUPMediaStreamTelemetryEventType_h */
