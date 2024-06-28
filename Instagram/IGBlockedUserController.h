//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBlockedUserController_h
#define IGBlockedUserController_h
@import Foundation;

#include "IGBlockedListNetworkDataSource.h"
#include "IGUserBlockingActionListener-Protocol.h"

@class NSMutableOrderedSet, NSString;
@protocol IGBlockedUserControllerDelegate, IGUserBlockingActionAnnouncer;

@interface IGBlockedUserController : NSObject<IGUserBlockingActionListener> {
  /* instance variables */
  IGBlockedListNetworkDataSource *_blockedUsersNetworkDataSource;
  NSObject<IGUserBlockingActionAnnouncer> *_blockedUserControllerAnnouncer;
  long long _datasourceType;
  BOOL _hasSyncedWithServer;
  BOOL _hasFailedSyncWithServer;
  NSMutableOrderedSet *_blockedUsers;
}

@property (weak, nonatomic) NSObject<IGBlockedUserControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworkDataSource:(id)source blockedUserControllerAnnouncer:(id)announcer dataSourceType:(long long)type;
- (void)dealloc;
- (void)user:(id)user blocked:(BOOL)blocked messagingOnlyBlocked:(BOOL)blocked;
@end

#endif /* IGBlockedUserController_h */
