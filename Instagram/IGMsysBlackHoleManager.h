//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMsysBlackHoleManager_h
#define IGMsysBlackHoleManager_h
@import Foundation;

#include "IGUserLauncherSet-Protocol.h"

@class IGDirectMsysMessagingMailbox;
@protocol IGDWellBeingDatabaseProtocol, IGMsysBlackHoleUpdateDelegate;

@interface IGMsysBlackHoleManager : NSObject {
  /* instance variables */
  IGDirectMsysMessagingMailbox *_messagingMailbox;
  NSObject<IGDWellBeingDatabaseProtocol> *_database;
  NSObject<IGUserLauncherSet> *_launcherSet;
}

@property (weak, nonatomic) NSObject<IGMsysBlackHoleUpdateDelegate> *delegate;

/* instance methods */
- (id)initWithUserScopedObjects:(id)objects;
@end

#endif /* IGMsysBlackHoleManager_h */
