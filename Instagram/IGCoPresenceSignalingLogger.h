//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoPresenceSignalingLogger_h
#define IGCoPresenceSignalingLogger_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSString;

@interface IGCoPresenceSignalingLogger : NSObject {
  /* instance variables */
  NSString *_peerUserPk;
  NSString *_selfUserPk;
  NSObject<FBAnalyticsLogging> *_logger;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  BOOL _receiverIsInForeground;
  BOOL _peerThreadCoPresenceEnabled;
  BOOL _hasSetPeerThreadCoPresence;
  BOOL _hasRecordedReceiverThreadPresenceState;
  BOOL _receiverIsInThread;
}

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger launcherSet:(id)set selfUserPk:(id)pk peerUserPk:(id)pk;
- (void)setLogger:(id)logger;
- (void)setLauncherSet:(id)set;
@end

#endif /* IGCoPresenceSignalingLogger_h */