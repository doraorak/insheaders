//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMsysAggregatedMediaService_h
#define IGDirectMsysAggregatedMediaService_h
@import Foundation;

#include "IGDirectMsysThreadAccessoryInput.h"
#include "IGDirectMsysThreadSubscriptionService.h"
#include "IGUserLauncherSet-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "_IGDirectMsysSecureMediaResolutionServiceWrapper.h"

@class FBAggregatingDebouncer, IGDirectMsysMessagingMailbox, IGRingViewSpecFactory, IGUser, NSMutableDictionary, NSString;

@interface IGDirectMsysAggregatedMediaService : NSObject<NSObject, NSCopying> {
  /* instance variables */
  IGDirectMsysThreadSubscriptionService *_threadSubscriptionService;
  IGDirectMsysMessagingMailbox *_messagingMailbox;
  IGUser *_currentUser;
  NSObject<IGUserLauncherSet> *_launcherSet;
  IGRingViewSpecFactory *_ringViewSpecFactory;
  _IGDirectMsysSecureMediaResolutionServiceWrapper *_mediaCacheResolverWrapper;
  IGDirectMsysThreadAccessoryInput *_threadAccessoryInput;
  NSMutableDictionary *_mediaSetAssociationForContentToken;
  NSMutableDictionary *_attachmentsPendingFetchForThreadKey;
  NSMutableDictionary *_mediaUpdatesSubscriptionEntries;
  FBAggregatingDebouncer *_secureMediaResolutionDebouncer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithThreadSubscriptionService:(id)service messagingMailbox:(id)mailbox currentUser:(id)user launcherSet:(id)set featureSetProvider:(id)provider ringViewSpecFactory:(id)factory;
- (void)fetchAggregatedMediaWithThreadKey:(id)key cursor:(id)cursor mediaType:(long long)type successBlock:(id /* block */)block failureBlock:(id /* block */)block currentMediaSetBlock:(id /* block */)block;
- (id)subscribeToMediaUpdatesForThreadKey:(id)key updateBlock:(id /* block */)block errorBlock:(id /* block */)block currentMediaSetBlock:(id /* block */)block;
- (void)setMsysMediaCacheResolver:(id)resolver;
- (void)secureMediaResolutionServiceDidUpdateForContentToken:(id)token attachmentPk:(long long)pk;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGDirectMsysAggregatedMediaService_h */