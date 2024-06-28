//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBTPTimestampsStore_h
#define IGBTPTimestampsStore_h
@import Foundation;

@class IGUserDefaults;
@protocol IGScheduler><IGSynchronousScheduler;

@interface IGBTPTimestampsStore : NSObject {
  /* instance variables */
  NSObject<IGScheduler><IGSynchronousScheduler> *_scheduler;
  IGUserDefaults *_sessionUserDefaults;
  struct { long long x[12] timestamps; double loadTimestamp; char state; long long type; } _feedPredictedTimestampsInfo;
  struct { long long x[12] timestamps; double loadTimestamp; char state; long long type; } _storiesPredictedTimestampsInfo;
}

/* instance methods */
- (id)initWithQueueScheduler:(id)scheduler sessionUserDefaults:(id)defaults;
- (id)bestTimesInfoForFeedSortedFromTimestamp:(double)timestamp maxCount:(long long)count;
- (id)_extractBestTimesFromSurfaceInfo:(struct { long long x0[12] double x1; char x2; long long x3; })info;
@end

#endif /* IGBTPTimestampsStore_h */