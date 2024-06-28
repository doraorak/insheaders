//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PreLiveRecordingManager_h
#define PreLiveRecordingManager_h
@import Foundation;

#include "AVAudioRecorderDelegate-Protocol.h"
#include "FBAudioSessionManagerClient-Protocol.h"

@class AVAudioRecorder, NSArray, NSString;

@interface PreLiveRecordingManager : NSObject<FBAudioSessionManagerClient, AVAudioRecorderDelegate> {
  /* instance variables */
  AVAudioRecorder *_audioRecorder;
  int _sampleRate;
  int _numChannels;
  double _duration;
}

@optional
@property (readonly, nonatomic) unsigned long long audioDirection;
@optional
@property (readonly, nonatomic) unsigned long long outputCoordinationMode;
@optional
@property (readonly, nonatomic) unsigned long long outputOptions;
@optional
@property (readonly, nonatomic) unsigned long long inputOptions;
@optional
@property (readonly, nonatomic) BOOL isRTCClient;
@optional
@property (readonly, nonatomic) unsigned long long audioSessionMode;
@optional
@property (readonly, nonatomic) BOOL disableOverrideOutputPort;
@optional
@property (nonatomic) BOOL enableBackgroundAudio;
@optional
@property (nonatomic) BOOL isCastingClient;
@optional
@property (readonly, nonatomic) NSArray *preferredInputOrientations;
@optional
@property (nonatomic) BOOL prefersExternalMic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSampleRate:(int)rate andNumOfChannels:(int)channels forDuration:(double)duration;
- (void)dealloc;
- (void)prepareAndRecording;
- (void)preLiveStartRecording;
- (void)preLiveStopRecording;
- (void)preLiveResetRecording;
- (id)fileUrlForRecording;
- (void)beginInterruption;
- (void)finishInterruptionAndResume:(BOOL)resume;
- (void)audioRecorderDidFinishRecording:(id)recording successfully:(BOOL)successfully;
- (void)audioRecorderEncodeErrorDidOccur:(id)occur error:(id)error;
@end

#endif /* PreLiveRecordingManager_h */
