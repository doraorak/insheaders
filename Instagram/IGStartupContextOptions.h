//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStartupContextOptions_h
#define IGStartupContextOptions_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "NSCoding-Protocol.h"

@class IGPushNotificationInfo, NSURL, NSUserActivity, UIApplicationShortcutItem;

@interface IGStartupContextOptions : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  NSURL *_openURL_url;
  IGPushNotificationInfo *_pushNotification_notificationInfo;
  UIApplicationShortcutItem *_shortcut_shortcutItem;
  NSUserActivity *_continueUserActivity_userActivity;
}

/* class methods */
+ (id)continueUserActivityWithUserActivity:(id)activity;
+ (id)openURLWithUrl:(id)url;
+ (id)pushNotificationWithNotificationInfo:(id)info;
+ (id)shortcutWithShortcutItem:(id)item;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGStartupContextOptions_h */
