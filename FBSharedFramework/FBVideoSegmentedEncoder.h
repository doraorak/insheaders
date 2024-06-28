//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoSegmentedEncoder_h
#define FBVideoSegmentedEncoder_h
@import Foundation;

#include "METAMediaSource.h"
#include "NSObject-Protocol.h"

@class AVAssetReader, NSDictionary, NSError, NSMutableArray, NSString;
@protocol FBAssetReaderOutputProtocol, FBAssetWriter, FBVideoProcessing, OS_dispatch_queue, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}};

@interface FBVideoSegmentedEncoder : NSObject<NSObject> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _segmentDuration;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _cancelled;
  AVAssetReader *_reader;
  NSObject<FBAssetReaderOutputProtocol> *_assetOutput;
  NSObject<FBVideoProcessing> *_videoProcessor;
  NSObject<FBAssetWriter> *_writer;
  long long _imageSampleFrameInterval;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _imageSampleTimestamp;
  NSDictionary *_optionalConfig;
  METAMediaSource *_mediaSource;
  struct OpaqueVTDecompressionSession * _decompressionSession;
  NSError *_latestEncoderSoftException;
  NSMutableArray *_timeStamps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAssetWriter:(id)writer assetReader:(id)reader decompressionSession:(struct OpaqueVTDecompressionSession *)session assetOutput:(id)output videoProcessor:(id)processor segmentDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration imageSampleFrameInterval:(long long)interval imageSampleTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp optionalConfig:(id)config queue:(id)queue mediaSource:(id)source;
- (void)startEncodingWithFinishCallback:(id /* block */)callback progressCallback:(id /* block */)callback imageCallback:(id /* block */)callback;
- (void)cancelEncoding;
- (id)latestEncoderSoftException;
@end

#endif /* FBVideoSegmentedEncoder_h */
