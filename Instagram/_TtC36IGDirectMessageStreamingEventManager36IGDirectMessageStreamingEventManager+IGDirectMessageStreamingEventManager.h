//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC36IGDirectMessageStreamingEventManager36IGDirectMessageStreamingEventManager_IGDirectMessageStreamingEventManager_h
#define _TtC36IGDirectMessageStreamingEventManager36IGDirectMessageStreamingEventManager_IGDirectMessageStreamingEventManager_h
@import Foundation;

@interface _TtC36IGDirectMessageStreamingEventManager36IGDirectMessageStreamingEventManager (IGDirectMessageStreamingEventManager) <IGDirectRealtimeIrisDeltaListener>
/* instance methods */
- (void)irisDeltaHandlerDidReceiveDelta:(id)delta;
- (void)irisDeltaHandlerDidApplyDelta:(id)delta;
- (void)irisDeltaHandlerDroppedDeltaSilently:(id)silently;
@end

#endif /* _TtC36IGDirectMessageStreamingEventManager36IGDirectMessageStreamingEventManager_IGDirectMessageStreamingEventManager_h */
