//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOutgoingUpdateService_h
#define IGDirectOutgoingUpdateService_h
@import Foundation;

#include "IGDirectBlendedOutgoingUpdateService.h"
#include "IGDirectOutgoingDjangoUpdateService.h"
#include "IGDirectOutgoingUpdateSending-Protocol.h"

@class NSString;
@protocol IGDirectOutgoingMsysUpdateSending, IGDirectOutgoingUpdateAnnouncer;

@interface IGDirectOutgoingUpdateService : NSObject<IGDirectOutgoingUpdateSending> {
  /* instance variables */
  IGDirectOutgoingDjangoUpdateService *_djangoUpdateService;
  NSObject<IGDirectOutgoingMsysUpdateSending> *_msysUpdateService;
  IGDirectBlendedOutgoingUpdateService *_blendedUpdateService;
  NSObject<IGDirectOutgoingUpdateAnnouncer> *_serviceAnnouncer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDjangoUpdateService:(id)service msysUpdateService:(id)service blendedUpdateService:(id)service;
- (id)sendMessageUpdate:(id)update messageId:(id)id threadKey:(id)key originalMessageClientContext:(id)context sentDate:(id)date productType:(long long)type isTAMMessage:(BOOL)tammessage isInstamadillo:(BOOL)instamadillo isInstamadilloTTLC:(BOOL)ttlc;
- (id)sendThreadUpdate:(id)update threadKey:(id)key completion:(id /* block */)completion;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGDirectOutgoingUpdateService_h */
