//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP28IGNotificationsFeedDataStore28IGNotificationsFeedDataStore__Protocol_h
#define _TtP28IGNotificationsFeedDataStore28IGNotificationsFeedDataStore__Protocol_h
@import Foundation;

@protocol _TtP28IGNotificationsFeedDataStore28IGNotificationsFeedDataStore_ 
/* instance methods */
- (BOOL)add:(id)add isPriorityEligibile:(BOOL)eligibile error:(id *)error;
- (void)remove:(id)remove;
- (void)removeAllNotificationsWith:(long long)with;
- (void)impressed:(id)impressed;
- (BOOL)hasSeen:(id)seen;
- (long long)impressionCountFor:(id)for;
- (id)unseenNotificationsWithExcludedNotificationTypes:(id)types;
- (id)priorityNotificationsWithExcludedNotificationTypes:(id)types;
- (id)seenNotificationsWith:(id)with excludedNotificationTypes:(id)types;
- (BOOL)isNotificationTypeSupported:(long long)supported;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* _TtP28IGNotificationsFeedDataStore28IGNotificationsFeedDataStore__Protocol_h */