//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18BCNAccountSwitcher32BCNAccountSwitcherViewController_BCNAccountSwitcher1_h
#define _TtC18BCNAccountSwitcher32BCNAccountSwitcherViewController_BCNAccountSwitcher1_h
@import Foundation;

@interface _TtC18BCNAccountSwitcher32BCNAccountSwitcherViewController (BCNAccountSwitcher1) <IGSessionManagingListener>
/* instance methods */
- (void)loginSuccessfulWithUserSession:(id)session previousUser:(id)user loginDestination:(id)destination authLoginType:(long long)type entryPoint:(long long)point;
- (void)willLogoutActiveUserFromEntryPoint:(long long)point;
- (void)didLogoutAllUsersWithLastUserPK:(id)pk fromEntryPoint:(long long)point;
@end

#endif /* _TtC18BCNAccountSwitcher32BCNAccountSwitcherViewController_BCNAccountSwitcher1_h */
