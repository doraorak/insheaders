//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserListSectionControllerFollowDelegate_Protocol_h
#define IGUserListSectionControllerFollowDelegate_Protocol_h
@import Foundation;

@protocol IGUserListSectionControllerFollowDelegate <NSObject>
/* instance methods */
- (void)userListSectionController:(id)controller followButtonStatusDidChangeForAccount:(id)account withAction:(long long)action;
- (void)userListSectionController:(id)controller followButtonStatusDidChangeForAccount:(id)account withAction:(long long)action;
- (void)userListSectionController:(id)controller didRemoveUser:(id)user;
- (void)userListSectionController:(id)controller didRemoveUser:(id)user;
@end

#endif /* IGUserListSectionControllerFollowDelegate_Protocol_h */
