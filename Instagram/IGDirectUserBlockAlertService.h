//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectUserBlockAlertService_h
#define IGDirectUserBlockAlertService_h
@import Foundation;

#include "IGDirectThreadStateManager.h"
#include "IGRestrictedUserControllerListener-Protocol.h"
#include "IGUserBlockingActionListener-Protocol.h"

@class NSString;

@interface IGDirectUserBlockAlertService : NSObject<IGUserBlockingActionListener, IGRestrictedUserControllerListener> {
  /* instance variables */
  IGDirectThreadStateManager *_threadStateManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserDefaults:(id)defaults blockAnnouncer:(id)announcer restrictAnnouncer:(id)announcer featureSets:(id)sets;
- (void)user:(id)user blocked:(BOOL)blocked messagingOnlyBlocked:(BOOL)blocked;
- (void)didRestrictUser:(id)user;
- (void)didUnrestrictUser:(id)user;
@end

#endif /* IGDirectUserBlockAlertService_h */
