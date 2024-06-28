//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserDetailDataControllerDelegate_Protocol_h
#define IGUserDetailDataControllerDelegate_Protocol_h
@import Foundation;

@protocol IGUserDetailDataControllerDelegate <IGStoryDataControllerStoryItemListener, IGStoryDataControllerBroadcastItemListener, IGStoryDataControllerPostLiveItemListener, IGStoryTrayDataSourceChangeListener>
/* instance methods */
- (void)userDetailDataControllerWillFetchFollowStatus:(id)status;
- (void)userDetailDataControllerDidFetchFollowStatus:(id)status;
- (void)userDetailDataController:(id)controller didFailToFetchFollowStatusWithError:(id)error;
- (void)userDetailDataControllerWillFetchAdditionalUserData:(id)data;
- (void)userDetailDataControllerDidFetchAdditionalUserData:(id)data;
- (void)userDetailDataController:(id)controller didFetchRecsFromFriendResponse:(id)response;
- (void)userDetailDataController:(id)controller checklistViewModel:(id)model;
- (void)userDetailDataController:(id)controller didFailToFetchUserAdditionalDetailsWithErrorMessage:(id)message showAlert:(BOOL)alert isHardError:(BOOL)error;
- (void)userDetailDataControllerDidFetchUserPk:(id)pk;
- (void)userDetailDataControllerDidFetchFollowRequestSocialContext:(id)context;
- (void)userDetailDataControllerDidFetchFanClubSubscriptionDetails:(id)details canSeeButton:(BOOL)button;
- (void)userDetailDataControllerDidFetchFanClubSubscriptionNotificationStatusWithViewModel:(id)model;
- (void)userDetailDataControllerDidFailToFetchFanClubSubscriptionNotificationStatus;
- (void)userDetailDataControllerDidFetchMusicOnProfile:(id)profile;
- (void)userDetailDataControllerDidFetchReconAdCTAOnProfile:(id)profile isEligibleForOrganicCTA:(BOOL)cta;
- (void)userDetailDataController:(id)controller didFetchProfileNote:(id)note;
- (void)userDetailDataControllerDidFetchAllFetchTypes;
@end

#endif /* IGUserDetailDataControllerDelegate_Protocol_h */