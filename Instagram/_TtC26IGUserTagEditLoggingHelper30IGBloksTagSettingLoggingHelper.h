//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC26IGUserTagEditLoggingHelper30IGBloksTagSettingLoggingHelper_h
#define _TtC26IGUserTagEditLoggingHelper30IGBloksTagSettingLoggingHelper_h
@import Foundation;

@interface _TtC26IGUserTagEditLoggingHelper30IGBloksTagSettingLoggingHelper : NSObject { // (Swift)
  /* instance variables */
   sharedLogger;
   eventConfig;
}

/* class methods */
+ (id)settingLoggingEntrypoint;
+ (id)notificationsLoggingEntrypoint;
+ (id)profileLoggingEntrypoint;

/* instance methods */
- (id)initWithSession:(id)session;
- (void)logBloksTagSettingsWithUserSession:(id)session eventName:(long long)name entrypoint:(id)entrypoint;
- (id)init;
@end

#endif /* _TtC26IGUserTagEditLoggingHelper30IGBloksTagSettingLoggingHelper_h */