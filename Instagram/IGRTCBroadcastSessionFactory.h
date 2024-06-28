//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRTCBroadcastSessionFactory_h
#define IGRTCBroadcastSessionFactory_h
@import Foundation;

#include "FBVideoBroadcastRTCSessionFactoryProtocol-Protocol.h"
#include "FBVideoBroadcastSessionLiveWithDelegate-Protocol.h"

@class NSString;
@protocol IGLiveBroadcastInfoProvider, IGLiveRTCEngine;

@interface IGRTCBroadcastSessionFactory : NSObject<FBVideoBroadcastRTCSessionFactoryProtocol> {
  /* instance variables */
  struct { struct CGSize { double width; double height; } encodingDimension; long long initialBitrateBps; long long maxBitrateBps; } _config;
  NSObject<FBVideoBroadcastSessionLiveWithDelegate> *_liveWithDelegate;
  NSObject<IGLiveBroadcastInfoProvider> *_liveInfoDelegate;
  NSString *_broadcastId;
  NSObject<IGLiveRTCEngine> *_rtcRoomEngine;
  BOOL _initialAudioEnabled;
  id /* block */ _audioControllerReadyBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBroadcastId:(id)id config:(struct { struct CGSize { double x0; double x1; } x0; long long x1; long long x2; })config logger:(id)logger mwsRealtimeTopicHandlingService:(id)service networker:(id)networker mqttClient:(id)client launcherSet:(id)set userPk:(id)pk rtcRoomEngine:(id)engine audioControllerReadyBlock:(id /* block */)block liveWithDelegate:(id)delegate liveInfoDelegate:(id)delegate;
- (id)createWithBroadcastConfig:(struct { struct DiskVideoRecorderConfig { int x0; struct duration<double, std::ratio<1>> { double x0; } x1; struct duration<double, std::ratio<1>> { double x0; } x2; struct VideoConfig { int x0; int x1; int x2; int x3; BOOL x4; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x5; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x6; BOOL x7; unsigned char x8; BOOL x9; } x3; struct AudioConfig { int x0; int x1; int x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; } x4; BOOL x5; int x6; int x7; double x8; int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; BOOL x14; BOOL x15; int x16; int x17; int x18; double x19; } x0; BOOL x1; BOOL x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; id x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; })config;
- (void)setAudioEnabled:(BOOL)enabled;
@end

#endif /* IGRTCBroadcastSessionFactory_h */