//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFindUsersViewDataSourceDelegate_Protocol_h
#define IGFindUsersViewDataSourceDelegate_Protocol_h
@import Foundation;

@protocol IGFindUsersViewDataSourceDelegate <NSObject>
/* instance methods */
- (void)findUsersViewDataSourceWillLoadUserList:(id)list;
- (void)findUsersViewDataSource:(id)source didLoadUserList:(id)list andNearbyBusinesses:(id)businesses;
- (void)findUsersViewDataSource:(id)source didLoadUserListFromCache:(id)cache;
- (void)findUsersViewDataSource:(id)source didLoadThumbnailsForUsers:(id)users;
- (void)findUsersViewDataSource:(id)source didFailWithError:(id)error;
- (void)findUsersViewDataSource:(id)source didLoadMoreUsers:(id)users allUsers:(id)users;
- (void)findUsersViewDataSource:(id)source didLoadAllUserIDs:(id)ids;
@end

#endif /* IGFindUsersViewDataSourceDelegate_Protocol_h */
