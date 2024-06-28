//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFindFriendsHelperDelegate_Protocol_h
#define IGFindFriendsHelperDelegate_Protocol_h
@import Foundation;

@protocol IGFindFriendsHelperDelegate <NSObject>
/* instance methods */
- (void)findFriendsHelper:(id)helper didAuthorizeWithDataRequest:(id)request;
- (void)findFriendsHelper:(id)helper didFailToAuthorizeWithMessage:(id)message;
@optional
/* instance methods */
- (void)findFriendsHelperSystemContactsPermissionDenied:(id)denied;
- (void)findFriendsHelper:(id)helper didAuthorizeWithContacts:(id)contacts;
- (void)findFriendsHelper:(id)helper didAuthorizeWithContacts:(id)contacts;
@end

#endif /* IGFindFriendsHelperDelegate_Protocol_h */
