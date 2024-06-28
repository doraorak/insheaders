//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDevicePermissionMicrophoneCoreAPI_h
#define IGDevicePermissionMicrophoneCoreAPI_h
@import Foundation;

#include "DevicePermissionCoreAPI.h"
#include "NSObject-Protocol.h"

@class DPKDevicePermission, IGDevicePermissionAppSettingsRedirector, NSString;

@interface IGDevicePermissionMicrophoneCoreAPI : DevicePermissionCoreAPI<NSObject> {
  /* instance variables */
  IGDevicePermissionAppSettingsRedirector *_settingRedirector;
}

@property (readonly, @dynamic, nonatomic) DPKDevicePermission *devicePermission;
@property (copy, @dynamic, nonatomic) id /* block */ onRequestPermissionCompletionCallback;
@property (copy, @dynamic, nonatomic) id /* block */ onOpenSettingsCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOnRequestPermissionCompletionCallback:(id /* block */)callback onOpenSettingsCallback:(id /* block */)callback;
- (void)navigateToAppDevicePermissionSettings;
- (void)navigateToAppSettings;
- (long long)checkAppWideAuthorizationStatus;
@end

#endif /* IGDevicePermissionMicrophoneCoreAPI_h */