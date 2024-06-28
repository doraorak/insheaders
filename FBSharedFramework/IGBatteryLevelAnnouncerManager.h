//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBatteryLevelAnnouncerManager_h
#define IGBatteryLevelAnnouncerManager_h
@import Foundation;

@protocol IGBatteryLevelAnnouncer;

@interface IGBatteryLevelAnnouncerManager : NSObject {
  /* instance variables */
  NSObject<IGBatteryLevelAnnouncer> *_announcer;
  BOOL _oldEnabledState;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initPrivate;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)_batteryLevelChanged;
@end

#endif /* IGBatteryLevelAnnouncerManager_h */