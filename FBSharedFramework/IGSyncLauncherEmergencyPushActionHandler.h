//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSyncLauncherEmergencyPushActionHandler_h
#define IGSyncLauncherEmergencyPushActionHandler_h
@import Foundation;

#include "IGDeviceSession.h"
#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGSyncLauncherEmergencyPushActionHandler : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDeviceSession *_deviceSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDeviceSession:(id)session userSession:(id)session;
- (BOOL)isRequestedAction:(id)action;
- (void)performActionWithCompletion:(id /* block */)completion;
@end

#endif /* IGSyncLauncherEmergencyPushActionHandler_h */
