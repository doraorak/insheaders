//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectNotesUserActionUpdateState_h
#define IGDirectNotesUserActionUpdateState_h
@import Foundation;

#include "IGDirectNotesServiceListener-Protocol.h"
#include "IGFriendStatusChangedListener-Protocol.h"
#include "IGUserBlockingActionListener-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSString;
@protocol IGDirectNotesUserActionUpdateStateDelegate;

@interface IGDirectNotesUserActionUpdateState : NSObject<IGFriendStatusChangedListener, IGUserBlockingActionListener, IGDirectNotesServiceListener> {
  /* instance variables */
  NSObject<IGDirectNotesUserActionUpdateStateDelegate> *_userActionUpdateStateDelegate;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  BOOL _shouldBypassRefreshTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFriendStatusChangedAnnouncer:(id)announcer userBlockingActionAnnouncer:(id)announcer userContentMuteUpdatedAnnouncer:(id)announcer featureSets:(id)sets userActionUpdateStateDelegate:(id)delegate;
- (void)user:(id)user blocked:(BOOL)blocked messagingOnlyBlocked:(BOOL)blocked;
- (void)friendStatusChangedForUser:(id)user withUserAction:(long long)action;
- (void)didUpdateMuteStatusForUser:(id)user isMuted:(BOOL)muted contentType:(long long)type;
- (void)notesServiceDidReceiveUpdate:(id)update updatedNotes:(id)notes didFetchNewNotes:(BOOL)notes;
- (void)notesServiceNotesFetchDidComplete:(id)complete isFetchFromNewMobileConfigUpdate:(BOOL)update;
@end

#endif /* IGDirectNotesUserActionUpdateState_h */
