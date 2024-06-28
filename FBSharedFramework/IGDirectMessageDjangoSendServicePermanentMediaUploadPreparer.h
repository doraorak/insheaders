//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageDjangoSendServicePermanentMediaUploadPreparer_h
#define IGDirectMessageDjangoSendServicePermanentMediaUploadPreparer_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGAnalyticsWaterfallManager.h"
#include "IGDirectInstamadilloMediaAssetFetchService.h"
#include "IGDirectInstamadilloMediaUploadManager.h"
#include "IGDirectOutgoingPermanentMediaLocalCache.h"
#include "IGDirectPermanentMediaUploadPreparerProtocol-Protocol.h"
#include "IGPostCreationManager.h"
#include "IGUserDefaults.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserSessionProvider.h"

@protocol IGDirectGalleryMediaRequesting;

@interface IGDirectMessageDjangoSendServicePermanentMediaUploadPreparer : NSObject<IGDirectPermanentMediaUploadPreparerProtocol> {
  /* instance variables */
  IGPostCreationManager *_postCreationManager;
  IGDirectInstamadilloMediaUploadManager *_instamadilloMediaManager;
  IGAnalyticsWaterfallManager *_waterfallManager;
  NSObject<IGDirectGalleryMediaRequesting> *_mediaRequester;
  IGDirectOutgoingPermanentMediaLocalCache *_outgoingPermanentMediaLocalCache;
  NSObject<IGAnalyticsEventLoggingProtocol> *_logger;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  IGUserSessionProvider *_userSessionProvider;
  IGUserDefaults *_userDefaults;
  IGDirectInstamadilloMediaAssetFetchService *_instamadilloMediaAssetFetchService;
}

@property (readonly, nonatomic) NSObject<IGDirectGalleryMediaRequesting> *requestingDispatcher;

/* instance methods */
- (id)initWithPostCreationManager:(id)manager instamadilloMediaManager:(id)manager waterfallManager:(id)manager configurationCoordinator:(id)coordinator mediaRequester:(id)requester outgoingPermanentMediaLocalCache:(id)cache logger:(id)logger featureSets:(id)sets userSessionProvider:(id)provider;
- (void)_initiateAndCleanUploadIdExpirationsDict;
- (BOOL)hasUploadIdInRecord:(id)record;
- (void)_addUploadIdRecord:(id)record;
- (id)startUploadForPermanentPhotoWithImageEncoding:(id)encoding clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo uploadId:(id)id;
- (id)startUploadForPermanentPhotoWithAsset:(id)asset clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo uploadId:(id)id;
- (id)startUploadForPermanentPhotoWithMetaGalleryAsset:(id)asset clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo uploadId:(id)id;
- (id)startUploadForSelfieStickerWithComposition:(id)composition previewImageEncoding:(id)encoding uploadId:(id)id;
- (id)startUploadForPermanentVideoWithAsset:(id)asset clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo uploadId:(id)id;
- (id)startUploadForPermanentVideoWithMetaGalleryAsset:(id)asset clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo uploadId:(id)id;
- (id)startUploadForPermanentVideoWithAVAsset:(id)avasset clientContext:(id)context mediaUploaderProviderType:(long long)type uploadId:(id)id;
- (id)startUploadForAudioWithURL:(id)url mediaUploaderProviderType:(long long)type uploadId:(id)id;
- (id)startUploadAnimatedMediaWithURL:(id)url renderAsSticker:(BOOL)sticker mediaUploaderProviderType:(long long)type uploadId:(id)id uploadParams:(id)params threadParticipantIds:(id)ids stickerTemplate:(id)template isAvatarSticker:(BOOL)sticker;
- (id)startUploadFileWithURL:(id)url mediaUploaderProviderType:(long long)type uploadId:(id)id;
- (id)startUploadForPermanentMediaListWithAssets:(id)assets clientContext:(id)context mediaUploaderProviderType:(long long)type assetUploadIds:(id)ids;
- (id)startUploadForPermanentMediaListWithMediaPileItems:(id)items clientContext:(id)context mediaUploaderProviderType:(long long)type assetUploadIds:(id)ids;
- (id)_startUploadForPermanentMediaListWithMediaPileItems:(id)items clientContext:(id)context uploadId:(id)id mediaUploaderProviderType:(long long)type assetUploadIds:(id)ids;
- (id)startUploadForPermanentMediaListWithXmaItems:(id)items clientContext:(id)context mediaUploaderProviderType:(long long)type assetUploadIds:(id)ids usePJPEG:(BOOL)pjpeg;
- (id)startUploadForPermanentMediaListWithXmaItems:(id)items clientContext:(id)context uploadId:(id)id mediaUploaderProviderType:(long long)type assetUploadIds:(id)ids usePJPEG:(BOOL)pjpeg;
- (id)startUploadForPermanentMediaListWithPermanentMedia:(id)media clientContext:(id)context mediaUploaderProviderType:(long long)type assetUploadIds:(id)ids usePJPEG:(BOOL)pjpeg;
- (id)startUploadForPermanentMediaListWithPermanentMedia:(id)media clientContext:(id)context uploadId:(id)id mediaUploaderProviderType:(long long)type assetUploadIds:(id)ids usePJPEG:(BOOL)pjpeg;
- (id)videoThumbnailIdForUploadId:(id)id;
- (id)createUploadId;
- (id)startUploadForPermanentPhotoWithImageEncoding:(id)encoding clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo;
- (id)startUploadForPermanentPhotoWithAsset:(id)asset clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo;
- (id)startUploadForPermanentPhotoWithMetaGalleryAsset:(id)asset clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo;
- (id)startUploadForSelfieStickerWithComposition:(id)composition previewImageEncoding:(id)encoding;
- (id)startUploadForPermanentVideoWithAsset:(id)asset clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo;
- (id)startUploadForPermanentVideoWithMetaGalleryAsset:(id)asset clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo;
- (id)startUploadForPermanentVideoWithAVAsset:(id)avasset clientContext:(id)context mediaUploaderProviderType:(long long)type;
- (id)startUploadForPermanentVideoWithRenderableVideoVariant:(id)variant previewImageEncoding:(id)encoding clientContext:(id)context mediaUploaderProviderType:(long long)type shouldSendViaInstamadillo:(BOOL)instamadillo;
- (id)startUploadForAudioWithURL:(id)url mediaUploaderProviderType:(long long)type;
- (id)startUploadFileWithURL:(id)url mediaUploaderProviderType:(long long)type;
- (id)startUploadAnimatedMediaWithURL:(id)url renderAsSticker:(BOOL)sticker mediaUploaderProviderType:(long long)type uploadParams:(id)params threadParticipantIds:(id)ids stickerTemplate:(id)template isAvatarSticker:(BOOL)sticker;
- (id)createUploadFlowForPermanentMediaOptimisticUpload;
- (id)createUploadFlowForEphemeralMediaOptimisticUpload;
- (id)startOptimisticUploadForAsset:(id)asset optimisticUploadPostId:(id)id clientContext:(id)context assetIndex:(unsigned long long)index;
- (void)commitOptimisticUploadforUploadId:(id)id mediaDataType:(long long)type;
- (void)removeOptimisticallyUploadedMediaWithUploadId:(id)id forPostId:(id)id;
- (void)removePendingSessionForPostId:(id)id;
- (id)_videoConfigurationWithMediaUploaderType:(long long)type;
- (id)_instamadilloMediaResolverWithContext:(id)context;
@end

#endif /* IGDirectMessageDjangoSendServicePermanentMediaUploadPreparer_h */
