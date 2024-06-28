//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC54IGDirectBroadcastChannelAcceptModeratorInviteMegaphone66IGDirectBroadcastChannelAcceptModeratorInviteMegaphoneDataProvider_h
#define _TtC54IGDirectBroadcastChannelAcceptModeratorInviteMegaphone66IGDirectBroadcastChannelAcceptModeratorInviteMegaphoneDataProvider_h
@import Foundation;

#include "IGDirectThreadMegaphoneDataProvider-Protocol.h"

@interface _TtC54IGDirectBroadcastChannelAcceptModeratorInviteMegaphone66IGDirectBroadcastChannelAcceptModeratorInviteMegaphoneDataProvider : NSObject<IGDirectThreadMegaphoneDataProvider> { // (Swift)
  /* instance variables */
   delegate;
   creatorUsername;
}

/* instance methods */
- (void)startListeningForThreadMegaphoneDataWithDelegate:(id)delegate;
- (void)stopListeningForThreadMegaphoneData;
- (id)currentRequestId;
- (void)prepareThreadMegaphoneData;
- (id)init;
@end

#endif /* _TtC54IGDirectBroadcastChannelAcceptModeratorInviteMegaphone66IGDirectBroadcastChannelAcceptModeratorInviteMegaphoneDataProvider_h */