//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGApplicationBadging20IGApplicationBadging_h
#define _TtC20IGApplicationBadging20IGApplicationBadging_h
@import Foundation;

@interface _TtC20IGApplicationBadging20IGApplicationBadging : NSObject // (Swift)
/* class methods */
+ (id)sBadgingQueue;
+ (void)setApplicationBadgeWithApplication:(id)application notificationCenter:(id)center deviceDefaults:(id)defaults appIconBadgeValue:(long long)value directBadge:(long long)badge directOpenBadge:(long long)badge directE2EEBadge:(long long)eebadge badgeContext:(id)context setBadgeValueAsync:(BOOL)async;
+ (void)clearBadgeAndNotificationsWithApplication:(id)application notificationCenter:(id)center deviceDefaults:(id)defaults setBadgeValueAsync:(BOOL)async;
+ (long long)lastSetBadgeValueWithDeviceDefaults:(id)defaults;
+ (void)lastSetBadgeValueWithDeviceDefaults:(id)defaults completion:(id /* block */)completion;
+ (void)lastSetBadgeValueWithDeviceDefaults:(id)defaults async:(BOOL)async completion:(id /* block */)completion;
+ (long long)lastSetDirectBadgeWithDeviceDefaults:(id)defaults;
+ (void)lastSetDirectBadgeWithDeviceDefaults:(id)defaults completion:(id /* block */)completion;
+ (long long)lastSetDirectOpenBadgeWithDeviceDefaults:(id)defaults;
+ (void)lastSetDirectOpenBadgeWithDeviceDefaults:(id)defaults completion:(id /* block */)completion;
+ (long long)lastSetDirectE2EEBadgeWithDeviceDefaults:(id)defaults;
+ (void)lastSetDirectE2EEBadgeWithDeviceDefaults:(id)defaults completion:(id /* block */)completion;
+ (id)lastSetBadgeContextWithDeviceDefaults:(id)defaults;
+ (void)lastSetBadgeContextWithDeviceDefaults:(id)defaults completion:(id /* block */)completion;
+ (void)setBadgeValueWithDeviceDefaults:(id)defaults badgeValue:(long long)value badgeContext:(id)context;
+ (void)setBadgeValueWithDeviceDefaults:(id)defaults badgeValue:(long long)value userInfo:(id)info;
+ (void)setBadgeValueWithDeviceDefaults:(id)defaults badgeValue:(long long)value;
+ (void)setDirectBadgeValueWithDeviceDefaults:(id)defaults directBadge:(long long)badge openValue:(long long)value E2EEValue:(long long)eevalue;

/* instance methods */
- (id)init;
@end

#endif /* _TtC20IGApplicationBadging20IGApplicationBadging_h */
