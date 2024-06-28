//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRoomsInvitedParticipantDataSource_h
#define IGRoomsInvitedParticipantDataSource_h
@import Foundation;

@class NSMutableOrderedSet, NSOrderedSet;

@interface IGRoomsInvitedParticipantDataSource : NSObject { // (Swift)
  /* instance variables */
   profilePicModule;
   profileViewYouString;
   mutedUserButton;
   muteUserButton;
   removeUserButton;
   acceptJoinRequestButton;
   declineJoinRequestButton;
   launcherSetProvider;
   currentUser;
   isCurrentUserOwner;
   userDataSource;
   isThreadCall;
   delegate;
   activeRoomUserModels;
   invitedParticipantViewModelProviders;
   usersPendingJoinRequests;
   invitedUsers;
   activeMutedUsers;
}

@property (nonatomic) BOOL optimisticMuteAllButtonUpdate;
@property (nonatomic, retain) NSOrderedSet *filteredInvitedUsers;
@property (nonatomic, readonly) NSMutableOrderedSet *activeUsers;
@property (nonatomic, readonly) NSMutableOrderedSet *activeMutableUsers;

/* instance methods */
- (id)initWithLauncherSetProvider:(id)provider currentUser:(id)user isCurrentUserOwner:(BOOL)owner userDataSource:(id)source isThreadCall:(BOOL)call delegate:(id)delegate;
- (void)loadActiveParticipants:(id)participants;
- (void)loadInvitedParticipants:(id)participants;
- (void)addInvitedUserWithUserKey:(id)key profileImage:(id)image userName:(id)name name:(id)name reringEnabled:(BOOL)enabled;
- (id)usersPendingJoinRequestsViewModels;
- (void)startCountdownFor:(id)for;
- (void)cancelCountdownFor:(id)for;
- (long long)invitedParticipantStateFor:(id)for;
- (id)invitedUsersViewModels;
- (long long)rowNumberForInvitedUser:(id)user;
- (id)activeUsersViewModels;
- (void)addActiveUser:(id)user muted:(BOOL)muted;
- (void)removeActiveUser:(id)user;
- (void)handleCallModelPipeUpdate:(id)update;
- (id)userFor:(id)for;
- (long long)rowNumberForActiveUser:(id)user;
- (BOOL)areAllActiveMutableUsersMuted;
- (id)init;
@end

#endif /* IGRoomsInvitedParticipantDataSource_h */