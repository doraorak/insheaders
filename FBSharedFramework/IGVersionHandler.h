//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVersionHandler_h
#define IGVersionHandler_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDate, NSRecursiveLock, NSString, NSUserDefaults;

@interface IGVersionHandler : NSObject<NSObject> {
  /* instance variables */
  NSUserDefaults *_userDefaults;
  NSUserDefaults *_igDefaults;
  NSString *_currentAppVersion;
  NSString *_lastSavedVersion;
  NSDate *_installDate;
  NSRecursiveLock *_lock;
  BOOL _installDateChanged;
  BOOL _savedVersionAtLeastOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNSDefaults:(id)nsdefaults igSharedDefaults:(id)defaults currentAppVersion:(id)version;
- (id)lastSavedVersion;
- (void)saveVersion;
- (BOOL)versionChanged;
@end

#endif /* IGVersionHandler_h */
