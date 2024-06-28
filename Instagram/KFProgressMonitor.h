//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFProgressMonitor_h
#define KFProgressMonitor_h
@import Foundation;

#include "KFInteractivityListenerAnnouncer.h"

@class CADisplayLink, NSMutableSet;
@protocol KFPlaybackControllerProtocol;

@interface KFProgressMonitor : NSObject {
  /* instance variables */
  NSObject<KFPlaybackControllerProtocol> *_animationPlaybackController;
  KFInteractivityListenerAnnouncer *_announcer;
  NSMutableSet *_mutableProgressEvents;
  NSMutableSet *_progressEvents;
  double _previousProgress;
  BOOL _pollProgressOnMainThread;
  CADisplayLink *_displayLink;
  BOOL _displayLinkWasActive;
}

/* instance methods */
- (id)initWithAnnouncer:(id)announcer animationPlaybackController:(id)controller pollProgressOnMainThread:(BOOL)thread;
- (void)dealloc;
- (void)_displayLinkFire;
- (void)_didEnterBackground:(id)background;
- (void)_willEnterForeground:(id)foreground;
@end

#endif /* KFProgressMonitor_h */
