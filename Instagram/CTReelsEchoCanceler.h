//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CTReelsEchoCanceler_h
#define CTReelsEchoCanceler_h
@import Foundation;

@class AVAsset, NSMutableData;

@interface CTReelsEchoCanceler : NSObject {
  /* instance variables */
  AVAsset *_videoAssetRef;
  void * _audioSync;
  void * _processor;
  NSMutableData *_recData;
  NSMutableData *_echoRefData;
  float * _recFloatBuffer;
  float * _echoRefFloatBuffer;
  int _numSamplesRec;
  int _numSamplesEchoRef;
  int _numChannels;
  float _sampleRate;
  int _digitalSilenceSamples;
  float _processingTime;
}

/* instance methods */
- (id)initWithCapturedVideoAsset:(id)asset andOriginalAudioAsset:(id)asset;
- (void)cancel;
- (void)dealloc;
@end

#endif /* CTReelsEchoCanceler_h */
