//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC12SUPConnector12SUPConnector_h
#define _TtC12SUPConnector12SUPConnector_h
@import Foundation;

#include "FBVideoBroadcastABRListener-Protocol.h"
#include "_TtP13SUPConnecting13SUPConnecting_-Protocol.h"
#include "_TtP27SUPConnectorCaptureDelegate27SUPConnectorCaptureDelegate_-Protocol.h"

@class NSArray, NSString, UIView;

@interface _TtC12SUPConnector12SUPConnector : NSObject<_TtP13SUPConnecting13SUPConnecting_> { // (Swift)
  /* instance variables */
   ocmComponentManagingContext;
   sessionInactivityTimeoutSec;
   inferenceConfigProvider;
   supSession;
   notificationService;
   engagementProducer;
   isStreamFeatureStarted;
   shouldPrepareEarly;
   cameraInputToggleEnabled;
   shouldConnectOnSetup;
   appEventAnnouncer;
   discoverLinkableDevices;
   getBooleanLocalUserSetting;
   setBooleanLocalUserSetting;
   lastAnnouncedUserEdTime;
   hasEnteredStreamFeature;
   config;
   shouldConfigureAudioConfigEncodingOnSetup;
   initialAudioConfigProvider;
}

@property (nonatomic, readonly) BOOL isStreamClientConnected;
@property (nonatomic, readonly) BOOL isStreaming;
@property (nonatomic, readonly) BOOL supCaptureModeActive;
@property (nonatomic, readonly) BOOL supMediaInputActive;
@property (nonatomic, readonly) BOOL isNux;
@property (nonatomic, readonly) BOOL isHevcEnabled;
@property (nonatomic, readonly) NSObject<FBVideoBroadcastABRListener> *abrListener;
@property (nonatomic, readonly) BOOL hasDiscoveredDevices;
@property (nonatomic, readonly) BOOL isHnDevice;
@property (nonatomic, weak) NSObject<_TtP27SUPConnectorCaptureDelegate27SUPConnectorCaptureDelegate_> *captureDelegate;
@property (nonatomic, readonly) NSArray *privacyDisclosureContent;
@property (nonatomic, readonly) NSString *privacyDisclosureContentHeader;
@property (nonatomic, readonly) NSArray *privacyDisclosureTitleContent;
@property (nonatomic) BOOL isStreamPausedByUser;
@property (nonatomic) BOOL hasSeenPrivacyDisclosure;
@property (nonatomic, readonly) BOOL hasSeenPostConnectionNUX;
@property (nonatomic, retain) UIView *captureToggleBtn;

/* instance methods */
- (id)initWithSupSession:(id)session config:(id)config notificationService:(id)service discoverLinkableDevices:(id /* block */)devices appEventAnnouncer:(id)announcer;
- (id)initWithSupSession:(id)session config:(id)config notificationService:(id)service discoverLinkableDevices:(id /* block */)devices appEventAnnouncer:(id)announcer getBooleanLocalUserSetting:(id /* block */)setting setBooleanLocalUserSetting:(id /* block */)setting;
- (void)setupWithOcmComponentManagingContext:(id)context;
- (void)connectIfAvailable;
- (void)connectSUP;
- (void)toggleCamera:(BOOL)camera completion:(id /* block */)completion;
- (void)stopCameraWithToggle:(BOOL)toggle;
- (void)stopCameraWithToggle:(BOOL)toggle allowSessionStop:(BOOL)stop;
- (void)prepareOneCameraConfig:(id)config;
- (id)createEngagementProducer;
- (void)setMicrophoneEnabled:(BOOL)enabled;
- (void)streamFeatureEntered:(long long)entered;
- (void)streamFeatureExited;
- (void)streamFeatureStarted;
- (void)streamFeatureEnded;
- (void)streamFeatureIdUpdated:(id)updated;
- (void)videoMuteUpdated:(BOOL)updated;
- (void)didFinishNux;
- (void)didStartCobroadcast;
- (void)didTapViewFinder;
- (void)didRequireAppUpdate;
- (void)didRequireMwaUpdate;
- (void)didRequireFirmwareUpdate;
- (void)didPassVersionChecks;
- (void)willEnterForeground;
- (void)didToggleSUPCameraOff;
- (void)addStreamSessionEventListenerFor:(id)for;
- (void)addStreamSessionHealthListenerFor:(id)for;
- (void)connectWithoutCamera;
- (id)init;
@end

#endif /* _TtC12SUPConnector12SUPConnector_h */
