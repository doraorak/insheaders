//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPushKitService_h
#define IGPushKitService_h
@import Foundation;

#include "IGPushKitServiceInterface-Protocol.h"
#include "IGPushNotificationRegisterListener-Protocol.h"
#include "PKPushRegistryDelegate-Protocol.h"

@class NSData, NSSet, NSString, PKPushRegistry;

@interface IGPushKitService : NSObject<PKPushRegistryDelegate, IGPushNotificationRegisterListener, IGPushKitServiceInterface> {
  /* instance variables */
  id /* block */ _pushHandlingBlock;
  id /* block */ _coldStartBlock;
  PKPushRegistry *_pushRegistry;
  NSSet *_supportedTypes;
  BOOL _canRegisterPushToken;
  NSData *_voipPushToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPushHandlingBlock:(id /* block */)block coldStartBlock:(id /* block */)block;
- (void)registerPushKitTokenIfPresent;
- (void)pushNotificationsEnabled;
- (void)pushRegistry:(id)registry didUpdatePushCredentials:(id)credentials forType:(id)type;
- (void)pushRegistry:(id)registry didInvalidatePushTokenForType:(id)type;
- (void)pushRegistry:(id)registry didReceiveIncomingPushWithPayload:(id)payload forType:(id)type;
@end

#endif /* IGPushKitService_h */