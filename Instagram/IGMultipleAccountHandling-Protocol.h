//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMultipleAccountHandling_Protocol_h
#define IGMultipleAccountHandling_Protocol_h
@import Foundation;

@protocol IGMultipleAccountHandling <IGConcurrentSessionHandling>
/* instance methods */
- (id)userMatchingUserPK:(id)pk;
- (id)userMatchingUserPK:(id)pk;
- (id)loginDeferredAccountMatchingAccountPK:(id)pk;
- (id)loginDeferredAccountMatchingAccountPK:(id)pk;
- (id)deviceBasedLoginAccountMatchingAccountPK:(id)pk;
- (id)deviceBasedLoginAccountMatchingAccountPK:(id)pk;
- (id)usernameMatchingAccountPK:(id)pk;
- (id)usernameMatchingAccountPK:(id)pk;
- (id)currentUsersSortedByAccessTime;
- (id)currentUsersSortedByUsername;
- (id)currentUsersSortedByAccessTimeExcludingActiveUser;
- (id)currentUsersSortedByUsernameExcludingActiveUser;
- (id)currentUsersSortedByAccountLinkingMainAccountEligibility;
- (BOOL)hasMultipleAccounts;
- (BOOL)hasMultipleLoggedInAccounts;
- (BOOL)hasLoggedInAccountsAndOneTapLoginEnabledButLoggedOutAccounts;
- (BOOL)hasMultipleLogoutUnits;
- (BOOL)accountShouldBeLoggedOutIndividually:(id)individually;
- (BOOL)accountIsChildAndHasMainAccountsLoggedIn:(id)in;
- (BOOL)accountIsChildAndHasMainAccountsLoggedIn:(id)in;
- (id)loggedInMainAccountsForAccountPK:(id)pk;
- (id)loggedInMainAccountsForAccountPK:(id)pk;
- (id)loggedInChildAccountsForAccount:(id)account;
- (id)loggedInChildAccountsForAccount:(id)account;
- (id)accountGroupUsernamesForUser:(id)user;
- (id)accountGroupUsernamesForUser:(id)user;
- (id)loginDeferredChildAccountsForAccount:(id)account;
- (id)loginDeferredChildAccountsForAccount:(id)account;
- (BOOL)hasMaximumNumberOfAccounts;
- (long long)numberOfDistinctUsers;
- (void)addMultipleAccountHandlingListener:(id)listener;
- (void)addMultipleAccountHandlingListener:(id)listener;
- (void)switchedToAccountWithPk:(id)pk;
- (void)switchedToAccountWithPk:(id)pk;
- (void)markUserRecentlyUsed:(id)used;
- (void)removeUser:(id)user;
- (void)removeUser:(id)user;
@end

#endif /* IGMultipleAccountHandling_Protocol_h */