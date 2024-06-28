//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29METAAVPlayerTrackingResources29METAAVPlayerTrackingResources_h
#define _TtC29METAAVPlayerTrackingResources29METAAVPlayerTrackingResources_h
@import Foundation;

#include "AVPlayer.h"

@interface _TtC29METAAVPlayerTrackingResources29METAAVPlayerTrackingResources : AVPlayer // (Swift)

@property (nonatomic) float rate;

/* instance methods */
- (void)play;
- (void)pause;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })before toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })after completionHandler:(id /* block */)handler;
- (void)setRate:(float)rate time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)prerollAtRate:(float)rate completionHandler:(id /* block */)handler;
- (id)initWithURL:(id)url;
- (id)initWithPlayerItem:(id)item;
- (id)init;
@end

#endif /* _TtC29METAAVPlayerTrackingResources29METAAVPlayerTrackingResources_h */