//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoClipRecorder_h
#define IGVideoClipRecorder_h
@import Foundation;

@class NSString;
@protocol IGAssetRecorder;

@interface IGVideoClipRecorder : NSObject {
  /* instance variables */
  NSObject<IGAssetRecorder> *_assetRecorder;
}

@property (readonly, nonatomic) double runningTime;
@property (nonatomic) long long position;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *deviceID;

/* instance methods */
- (id)initWithOutputFileURL:(id)url videoSize:(struct CGSize { double x0; double x1; })size maxKeyFrameInterval:(id)interval audioCodec:(unsigned int)codec audioPerChannelBitrate:(long long)bitrate audioSampleRate:(long long)rate launcherSet:(id)set;
- (id)startRecordingWithVideoTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform maxRecordingDuration:(double)duration completionHandler:(id /* block */)handler;
- (BOOL)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)buffer;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)buffer;
- (void)cancelRecording;
@end

#endif /* IGVideoClipRecorder_h */