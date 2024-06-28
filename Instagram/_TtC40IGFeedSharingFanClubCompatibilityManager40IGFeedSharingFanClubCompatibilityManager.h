//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC40IGFeedSharingFanClubCompatibilityManager40IGFeedSharingFanClubCompatibilityManager_h
#define _TtC40IGFeedSharingFanClubCompatibilityManager40IGFeedSharingFanClubCompatibilityManager_h
@import Foundation;

@interface _TtC40IGFeedSharingFanClubCompatibilityManager40IGFeedSharingFanClubCompatibilityManager : NSObject // (Swift)
/* class methods */
+ (long long)canSelectFanClubRowForMediaMetadata:(id)metadata isSharingToOtherPlatform:(BOOL)platform isSharingToOtherIGAccounts:(BOOL)igaccounts hasMusic:(BOOL)music isPromoteOn:(BOOL)on;
+ (long long)canSelectFanClubMediaAudienceForMediaMetadata:(id)metadata isSharingToOtherPlatform:(BOOL)platform isSharingToOtherIGAccounts:(BOOL)igaccounts hasMusic:(BOOL)music isPromoteOn:(BOOL)on;

/* instance methods */
- (id)init;
@end

#endif /* _TtC40IGFeedSharingFanClubCompatibilityManager40IGFeedSharingFanClubCompatibilityManager_h */
