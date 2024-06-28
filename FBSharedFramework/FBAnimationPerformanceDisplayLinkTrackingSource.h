//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAnimationPerformanceDisplayLinkTrackingSource_h
#define FBAnimationPerformanceDisplayLinkTrackingSource_h
@import Foundation;

#include "FBAnimationPerformanceTrackerDisplayLinkTarget.h"
#include "NSObject-Protocol.h"

@class CADisplayLink, NSRunLoop, NSString;
@protocol FBAnimationPerformanceTrackingSourceDelegate;

@interface FBAnimationPerformanceDisplayLinkTrackingSource : NSObject<NSObject> {
  /* instance variables */
  NSRunLoop *_runLoop;
  CADisplayLink *_displayLink;
  FBAnimationPerformanceTrackerDisplayLinkTarget *_displayLinkTarget;
  BOOL _displayLinkPrepared;
  BOOL _firstDisplayLinkUpdate;
  double _previousFrameTimestamp;
}

@property (weak, nonatomic) NSObject<FBAnimationPerformanceTrackingSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)start;
- (void)stop;
- (BOOL)prepareTrackingSource;
- (double)lastFrameTimestamp;
- (void)dealloc;
- (void)_displayLinkUpdate;
@end

#endif /* FBAnimationPerformanceDisplayLinkTrackingSource_h */
