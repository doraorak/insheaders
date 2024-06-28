//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCFileVideoCapturer_h
#define FB_RTCFileVideoCapturer_h
@import Foundation;

#include "FB_RTCVideoCapturer.h"

@class AVAssetReader, AVAssetReaderTrackOutput, NSURL;
@protocol OS_dispatch_queue;

@interface FB_RTCFileVideoCapturer : FB_RTCVideoCapturer {
  /* instance variables */
  AVAssetReader *_reader;
  AVAssetReaderTrackOutput *_outTrack;
  long long _status;
  NSObject<OS_dispatch_queue> *_frameQueue;
}

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } lastPresentationTime;
@property (retain, nonatomic) NSURL *fileURL;

/* instance methods */
- (void)startCapturingFromFileNamed:(id)named onError:(id /* block */)error;
- (void)setupReaderOnError:(id /* block */)error;
- (void)stopCapture;
- (id)pathForFileName:(id)name;
- (id)frameQueue;
- (void)readNextBuffer;
- (void)publishSampleBuffer:(struct opaqueCMSampleBuffer *)buffer;
- (id)createStrictTimer;
- (void)dealloc;
@end

#endif /* FB_RTCFileVideoCapturer_h */
