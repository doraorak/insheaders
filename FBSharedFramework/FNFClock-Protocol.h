//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFClock_Protocol_h
#define FNFClock_Protocol_h
@import Foundation;

@protocol FNFClock <NSObject>
/* instance methods */
- (void)initTimebase;
- (void)resume;
- (void)pause;
- (void)set:(struct { long long x0; int x1; unsigned int x2; long long x3; })set;
- (void)setRate:(float)rate;
- (float)currentPlayRate;
- (id)createTimeObserverWithInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval block:(id /* block */)block fireOnceAtExactTime:(BOOL)time followMasterClock:(BOOL)clock;
- (BOOL)addTimeObserver:(id)observer;
- (void)removeTimeObserver:(id)observer;
- (void)resumeTimeObserver:(id)observer;
- (void)suspendTimeObserver:(id)observer;
- (void)flushTimeObserver:(id)observer;
- (void)removeAllTimeObservers;
- (id)observers;
- (void)syncWithLayer:(id)layer;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (struct OpaqueCMClock *)deviceAudioClock;
- (id)renderSynchronizer;
@end

#endif /* FNFClock_Protocol_h */