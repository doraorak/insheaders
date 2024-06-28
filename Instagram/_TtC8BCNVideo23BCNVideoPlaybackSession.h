//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC8BCNVideo23BCNVideoPlaybackSession_h
#define _TtC8BCNVideo23BCNVideoPlaybackSession_h
@import Foundation;

#include "IGPlaybackCoordinatorSession-Protocol.h"

@interface _TtC8BCNVideo23BCNVideoPlaybackSession : NSObject<IGPlaybackCoordinatorSession> { // (Swift)
  /* instance variables */
   provider;
}

/* instance methods */
- (void)willAttachToCoordinator:(id)coordinator;
- (id)playbackEligibility;
- (void)applyCoordinatedEvent:(long long)event withContext:(id)context;
- (id)init;
@end

#endif /* _TtC8BCNVideo23BCNVideoPlaybackSession_h */