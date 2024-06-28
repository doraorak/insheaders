//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMPOutput_h
#define IGMPOutput_h
@import Foundation;

#include "FBMPOutput-Protocol.h"

@class FBMPBaseConsumerPort, NSString;
@protocol IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerVideoPreviewSampleBufferDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGCaptureManagerVideoSampleBufferProcessing;

@interface IGMPOutput : NSObject<FBMPOutput> {
  /* instance variables */
  FBMPBaseConsumerPort *_videoPort;
  FBMPBaseConsumerPort *_audioPort;
  struct CGSize { double width; double height; } _lastSampleBufferSize;
}

@property (weak, nonatomic) NSObject<IGCaptureManagerVideoSampleBufferProcessing> *videoSampleBufferProcessor;
@property (weak, nonatomic) NSObject<IGCaptureManagerVideoPreviewSampleBufferDelegate> *videoPreviewSampleBufferDelegate;
@property (weak, nonatomic) NSObject<IGCaptureManagerVideoSampleBufferDelegate> *videoSampleBufferDelegate;
@property (weak, nonatomic) NSObject<IGCaptureManagerAudioSampleBufferDelegate> *audioSampleBufferDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)consumerPorts;
@end

#endif /* IGMPOutput_h */