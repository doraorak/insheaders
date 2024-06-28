//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageDjangoSendService_h
#define IGDirectMessageDjangoSendService_h
@import Foundation;

#include "IGAnalyticsSessionIdProvider.h"
#include "IGDirectInboxSubscriptionService.h"
#include "IGDirectInstamadilloMediaAssetFetchService.h"
#include "IGDirectMessageSendingListener-Protocol.h"
#include "IGDirectMutationManager.h"
#include "IGDirectMutationManagerListener-Protocol.h"
#include "IGDirectMutationPrefetchListener-Protocol.h"
#include "IGDirectOneTraceIDLogger.h"
#include "IGDirectOutgoingMessageReliabilityLogger.h"
#include "IGDirectPermanentMediaUploadPreparerProtocol-Protocol.h"
#include "IGDirectUIThreadSet.h"
#include "IGDirectVisualMessageTranscodedVideoURLCache.h"
#include "IGPostCreationManager.h"
#include "IGScopeEnding-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"
#include "IGUserSession.h"

@class NSString;

@interface IGDirectMessageDjangoSendService : NSObject<IGDirectMutationManagerListener, IGDirectMutationPrefetchListener, IGScopeEnding> {
  /* instance variables */
  IGDirectMutationManager *_mutationManager;
  IGPostCreationManager *_postCreationManager;
  IGDirectOutgoingMessageReliabilityLogger *_reliabilityLogger;
  IGDirectOneTraceIDLogger *_oneTraceIDLogger;
  IGDirectInboxSubscriptionService *_inboxSubscriptionService;
  NSObject<IGDirectPermanentMediaUploadPreparerProtocol> *_permMediaUploadPreparer;
  IGDirectVisualMessageTranscodedVideoURLCache *_visualMessageVideoURLCache;
  IGUserSession *_userSession;
  IGAnalyticsSessionIdProvider *_sessionIdProvider;
  IGDirectUIThreadSet *_threadSet;
  NSObject<IGSubscriptionToken> *_inboxSubscriptionToken;
  IGDirectInstamadilloMediaAssetFetchService *_instamadilloMediaAssetFetchService;
}

@property (weak, nonatomic) NSObject<IGDirectMessageSendingListener> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDirectMutationManager:(id)manager permMediaUploadPreparer:(id)preparer visualMessageVideoURLCache:(id)urlcache session:(id)session sessionIdProvider:(id)provider postCreationManager:(id)manager reliabilityLogger:(id)logger inboxSubscriptionService:(id)service;
- (void)scopeWillEnd;
- (id)sendLinkMessageContent:(id)content toThreadTarget:(id)target attribution:(id)attribution privateReplyPayload:(id)payload messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sendSilently:(BOOL)silently latestPublishedMessageDateOverride:(id)override isBlendedDualSend:(BOOL)send;
- (void)_sendPermanentPhotoWithImageEncoding:(id)encoding isForwarded:(BOOL)forwarded threadTarget:(id)target attribution:(id)attribution privateReplyPayload:(id)payload latestPublishedMessageDateOverride:(id)override isBlendedDualSend:(BOOL)send clientContextOrOfflineThreadingId:(id)id sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (id)sendPermanentPhotoWithMetaGalleryAsset:(id)asset previewImageEncoding:(id)encoding threadTarget:(id)target attribution:(id)attribution privateReplyPayload:(id)payload quotedPublishedMessage:(id)message sessionId:(id)id mediaSelectedCount:(unsigned long long)count latestPublishedMessageDateOverride:(id)override isBlendedDualSend:(BOOL)send sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (long long)_uploadProviderTypeWithSendViaInstamadillo:(BOOL)instamadillo sendViaMessengerInfra:(BOOL)infra;
- (id)createUploadFlowForOptimisticUploadWithPersistentType:(long long)type;
- (id)startOptimisticUploadForAsset:(id)asset optimisticUploadPostId:(id)id clientContext:(id)context assetIndex:(unsigned long long)index;
- (void)removeOptimisticallyUploadedMediaWithUploadId:(id)id forPostId:(id)id;
- (void)removePendingSessionForPostId:(id)id;
- (id)sendForwardedMessageContent:(id)content threadTarget:(id)target attribution:(id)attribution sendSilently:(BOOL)silently latestPublishedMessageDateOverride:(id)override isBlendedDualSend:(BOOL)send;
- (id)_instamadilloMediaResolverWithContext:(id)context;
- (void)mutationRequestWasAcknowledged:(id)acknowledged;
- (void)mutationRequestDidSucceed:(id)succeed successResponseDict:(id)dict;
- (void)mutationRequestFailedAndIsIneligibleForAutoRetry:(id)retry withError:(id)error manualRetryPermitted:(BOOL)permitted;
- (void)mutationPrefetchedThreadMetadata:(id)metadata forOutgoingMessage:(id)message;
- (void)_syncE2EEDisappearingMessageEligibilityForThreadIfNeeded:(id)needed threadMetadata:(id)metadata;
- (id)_contentNoteMessageContentWithNote:(id)note media:(id)media targetURL:(id)url auxiliaryText:(id)text actionType:(long long)type noteReplyText:(id)text;
- (void)_uploadMediaIfNeeded:(id)needed toThreadTarget:(id)target attribution:(id)attribution completion:(id /* block */)completion;
- (void)_uploadForInstamadilloAvatarSticker:(id)sticker messageContent:(id)content threadTarget:(id)target threadMetadata:(id)metadata attribution:(id)attribution completion:(id /* block */)completion;
- (void)_uploadForInstamadilloAnimatedMedia:(id)media messageContent:(id)content threadTarget:(id)target threadMetadata:(id)metadata attribution:(id)attribution completion:(id /* block */)completion;
- (void)_uploadForInstamadilloAudio:(id)audio messageContent:(id)content threadMetadata:(id)metadata threadTarget:(id)target attribution:(id)attribution completion:(id /* block */)completion;
- (void)_getUploadInformationForAudio:(id)audio threadMetadata:(id)metadata threadTarget:(id)target sendAttribution:(id)attribution shouldSendViaInstamadillo:(BOOL)instamadillo completion:(id /* block */)completion;
- (BOOL)_isGroupThreadWithThreadTarget:(id)target threadMetadata:(id)metadata;
- (BOOL)_shouldUsePreGeneratedUploadIdWithThreadMetadata:(id)metadata threadTarget:(id)target sendAttribution:(id)attribution;
- (id)_mediaPileAssetUploadIdsAndMediaListWithAssets:(id)assets shouldSendViaInstamadillo:(BOOL)instamadillo shouldUploadViaMI:(BOOL)mi previewImageEncodings:(id)encodings;
- (id)_mediaPileAssetUploadIdsAndMediaListWithMediaPileItems:(id)items shouldSendViaInstamadillo:(BOOL)instamadillo shouldUploadViaMI:(BOOL)mi previewImageEncodings:(id)encodings;
- (void)_mediaPileAssetUploadIdsAndMediaListWithXmaItems:(id)items shouldSendViaInstamadillo:(BOOL)instamadillo shouldUploadViaMI:(BOOL)mi completion:(id /* block */)completion;
@end

#endif /* IGDirectMessageDjangoSendService_h */
