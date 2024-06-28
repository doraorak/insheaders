//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoBroadcastSessionTimingDataModel_h
#define FBVideoBroadcastSessionTimingDataModel_h
@import Foundation;

@interface FBVideoBroadcastSessionTimingDataModel : NSObject {
  /* instance variables */
  double _recordedAudioDuration;
  unsigned long long _recordedAudioSamples;
  unsigned long long _recordedVideoFrames;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _recordingLastPTS;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _mostRecentAudioPTS;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _mostRecentVideoPTS;
}

/* instance methods */
- (id)init;
@end

#endif /* FBVideoBroadcastSessionTimingDataModel_h */