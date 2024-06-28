//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFRenderingThread_h
#define FNFRenderingThread_h
@import Foundation;

#include "NSThread.h"

@class NSRunLoop;

@interface FNFRenderingThread : NSThread {
  /* instance variables */
  BOOL _useQoS;
}

@property (readonly, nonatomic) NSRunLoop *runLoop;
@property (nonatomic) double priority;

/* class methods */
+ (void)setUsesQualityOfServiceInsteadOfPriority:(BOOL)priority;
+ (BOOL)usesQualityOfServiceInsteadOfPriority;

/* instance methods */
- (id)initAllowingAppInactivePlayback:(BOOL)playback useQoS:(BOOL)s;
- (void)_applicationDidBecomeActive:(id)active;
- (void)_applicationWillResignActive:(id)active;
- (void)addDisplayLink:(id)link;
- (void)addTimer:(id)timer;
- (void)performBlock:(id /* block */)block;
- (void)dispatchSync:(id /* block */)sync;
- (void)_addDisplayLinkInternal:(id)internal;
- (void)_addTimerInternal:(id)internal;
- (void)main;
@end

#endif /* FNFRenderingThread_h */
