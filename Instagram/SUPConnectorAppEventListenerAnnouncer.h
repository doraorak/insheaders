//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SUPConnectorAppEventListenerAnnouncer_h
#define SUPConnectorAppEventListenerAnnouncer_h
@import Foundation;

#include "FBAnnouncerBase.h"
#include "SUPConnectorAppEventListener-Protocol.h"

@class NSString;

@interface SUPConnectorAppEventListenerAnnouncer : FBAnnouncerBase<SUPConnectorAppEventListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)supConnector:(id)connector didReceiveVideoMuteUpdate:(BOOL)update;
- (void)didFinishNux;
- (void)didStartCobroadcast;
- (void)didTapViewFinder;
- (void)didRequireAppUpdate;
- (void)didRequireMwaUpdate;
- (void)didRequireFirmwareUpdate;
- (void)didPassVersionChecks;
- (void)willEnterForeground;
- (void)didToggleSUPCameraOff;
@end

#endif /* SUPConnectorAppEventListenerAnnouncer_h */
