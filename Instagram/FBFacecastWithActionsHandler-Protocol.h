//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBFacecastWithActionsHandler_Protocol_h
#define FBFacecastWithActionsHandler_Protocol_h
@import Foundation;

@protocol FBFacecastWithActionsHandler <NSObject>

@property (readonly, copy, nonatomic) NSSet *currentOrInvitedGuests;

/* instance methods */
- (void)ringUsers:(id)users withLayout:(unsigned long long)layout;
- (void)addUsers:(id)users withLayout:(unsigned long long)layout;
- (void)removeGuest:(id)guest completion:(id /* block */)completion;
- (void)cancelInvitationForGuest:(id)guest completion:(id /* block */)completion;
- (void)startCall;
- (void)setMicrophoneEnabled:(BOOL)enabled;
- (BOOL)isMicrophoneEnabled;
- (void)join;
- (void)leave;
- (void)softMuteUsers:(id)users;
- (void)declineInvitation;
@end

#endif /* FBFacecastWithActionsHandler_Protocol_h */