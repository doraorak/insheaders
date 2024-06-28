//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityToastData_h
#define IGActivityToastData_h
@import Foundation;

@interface IGActivityToastData : NSObject {
  /* instance variables */
  BOOL _dotBadgeNotification;
  BOOL _campaignNotification;
  BOOL _copyrightNotification;
  BOOL _doubleToasting;
  BOOL _hasUnseenBadgeableBrandedContentNotification;
  BOOL _hasUnstaleBrandedContent;
  unsigned long long _likes;
  unsigned long long _storyMentions;
  unsigned long long _photosOfYou;
  unsigned long long _brandedContent;
  unsigned long long _newPosts;
  unsigned long long _shoppingNotifications;
  unsigned long long _otherActivityAlerts;
  unsigned long long _notificationLocalBadgeUpdates;
  unsigned long long _professionalNotification;
  unsigned long long _notificationsFeedLocalDataStoreNotifications;
}

@property (readonly, nonatomic) unsigned long long comments;
@property (readonly, nonatomic) unsigned long long relationships;
@property (readonly, nonatomic) unsigned long long userTags;
@property (readonly, nonatomic) unsigned long long fundraisers;
@property (readonly, nonatomic) unsigned long long promotions;
@property (readonly, nonatomic) unsigned long long activity;
@property (readonly, nonatomic) unsigned long long mediaToApprove;

/* instance methods */
- (id)initWithComments:(unsigned long long)comments likes:(unsigned long long)likes relationships:(unsigned long long)relationships storyMentions:(unsigned long long)mentions userTags:(unsigned long long)tags photosOfYou:(unsigned long long)you brandedContent:(unsigned long long)content newPosts:(unsigned long long)posts shoppingNotifications:(unsigned long long)notifications dotBadgeNotification:(BOOL)notification campaignNotification:(BOOL)notification copyrightNotification:(BOOL)notification doubleToasting:(BOOL)toasting hasUnseenBadgeableBrandedContentNotification:(BOOL)notification hasUnstaleBrandedContent:(BOOL)content fundraisers:(unsigned long long)fundraisers otherActivityAlerts:(unsigned long long)alerts notificationLocalBadgeUpdates:(unsigned long long)updates promotions:(unsigned long long)promotions activity:(unsigned long long)activity professionalNotification:(unsigned long long)notification notificationsFeedLocalDataStoreNotifications:(unsigned long long)notifications mediaToApprove:(unsigned long long)approve;
@end

#endif /* IGActivityToastData_h */