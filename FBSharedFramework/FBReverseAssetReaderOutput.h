//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBReverseAssetReaderOutput_h
#define FBReverseAssetReaderOutput_h
@import Foundation;

@class AVAssetReaderOutput, NSMutableArray;

@interface FBReverseAssetReaderOutput : NSObject {
  /* instance variables */
  NSMutableArray *_frameChunk;
  struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _chunkTimeRange;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPresentationTime;
  struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
  AVAssetReaderOutput *_output;
}

/* instance methods */
- (id)initWithOutput:(id)output timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)resetForReadingTimeRanges:(id)ranges;
- (void)markConfigurationAsFinal;
@end

#endif /* FBReverseAssetReaderOutput_h */
