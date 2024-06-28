//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialCreationConfiguration_h
#define IGSundialCreationConfiguration_h
@import Foundation;

#include "FBValueObject.h"
#include "IGAPICreationToolInfoDict.h"
#include "IGAREffectTargetModel.h"
#include "IGAudioTrackClip.h"
#include "IGCreationConfigCopyingContainer.h"
#include "IGCreationNavigationPresentable-Protocol.h"
#include "IGPerformanceLoggable-Protocol.h"
#include "IGSundialCreationHighlightedTool.h"
#include "IGSundialCreationTemplate.h"
#include "IGSundialGalleryPositionInfo.h"
#include "IGSundialReplaceSingleVideoClipInfo.h"
#include "IGWelcomeVideoPublicChatMetadata.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface IGSundialCreationConfiguration : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long actionOnCameraAppeared;
@property (readonly, copy, nonatomic) NSString *analyticsModule;
@property (readonly, copy, nonatomic) IGAudioTrackClip *audioTrackClip;
@property (readonly, copy, nonatomic) NSString *autoCreatedReelId;
@property (readonly, copy, nonatomic) NSArray *availableModes;
@property (readonly, copy, nonatomic) NSString *caption;
@property (readonly, copy, nonatomic) IGAPICreationToolInfoDict *cameraCreationToolInfo;
@property (readonly, copy, nonatomic) NSDictionary *convertedReelPKsWithStoryMediaIds;
@property (readonly, copy, nonatomic) IGSundialCreationTemplate *creationTemplate;
@property (readonly, copy, nonatomic) IGAREffectTargetModel *effectTargetModel;
@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) long long fanClubVideoType;
@property (readonly, nonatomic) BOOL isAddSingleClipFlow;
@property (readonly, copy, nonatomic) IGSundialReplaceSingleVideoClipInfo *replaceSingleVideoClipInfo;
@property (readonly, nonatomic) BOOL loadAutoSavedDraft;
@property (readonly, nonatomic) BOOL loadedFromDraft;
@property (readonly, copy, nonatomic) IGCreationConfigCopyingContainer *loadingAudioAssetContainer;
@property (readonly, nonatomic) BOOL openGalleryFirst;
@property (readonly, nonatomic) long long pivotPageEntryPoint;
@property (readonly, copy, nonatomic) NSString *pivotPageSeededMediaId;
@property (readonly, copy, nonatomic) NSString *pivotPageSessionId;
@property (readonly, copy, nonatomic) NSString *preloadedMediaID;
@property (readonly, copy, nonatomic) NSArray *prepopulatedStickers;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, copy, nonatomic) IGCreationConfigCopyingContainer *remixedVideoContainer;
@property (readonly, copy, nonatomic) IGCreationConfigCopyingContainer *remixClipInfoContainer;
@property (readonly, copy, nonatomic) IGCreationConfigCopyingContainer *reuseTextInfosContainer;
@property (readonly, nonatomic) BOOL showPreloadingSettingsToast;
@property (readonly, nonatomic) BOOL shouldDisableUnfinishedDraftPrompt;
@property (readonly, copy, nonatomic) NSString *sourceMediaAuthorPk;
@property (readonly, copy, nonatomic) NSString *sourceMediaAuthorUsername;
@property (readonly, copy, nonatomic) NSString *sourceMediaRankingInfoToken;
@property (readonly, copy, nonatomic) NSString *startingMediaId;
@property (readonly, copy, nonatomic) NSString *surface;
@property (readonly, copy, nonatomic) IGAudioTrackClip *suggestingAudio;
@property (readonly, copy, nonatomic) IGAREffectTargetModel *suggestingEffect;
@property (readonly, nonatomic) long long targetMode;
@property (readonly, copy, nonatomic) IGWelcomeVideoPublicChatMetadata *welcomeVideoPublicChatMetadata;
@property (readonly, copy, nonatomic) IGCreationConfigCopyingContainer *compositionContainer;
@property (readonly, nonatomic) NSObject<IGPerformanceLoggable> *preloadingPerfLogger;
@property (readonly, nonatomic) BOOL isEffectPreloaded;
@property (readonly, copy, nonatomic) NSString *initialAlbumTitle;
@property (readonly, nonatomic) long long acrAnalyticsSource;
@property (readonly, nonatomic) long long promptStickerType;
@property (readonly, nonatomic) long long stickerInsertSurface;
@property (readonly, nonatomic) BOOL isNewlyCreatedSticker;
@property (readonly, copy, nonatomic) IGSundialGalleryPositionInfo *lastGalleryPosition;
@property (readonly, nonatomic) NSObject<IGCreationNavigationPresentable> *creationPresenter;
@property (readonly, nonatomic) BOOL isCreationFromAudioPageFlow;
@property (readonly, nonatomic) long long mediaAudience;
@property (readonly, copy, nonatomic) IGCreationConfigCopyingContainer *useAudioClickPerfLogger;
@property (readonly, nonatomic) unsigned long long useAudioClickLoggerInstanceId;
@property (readonly, copy, nonatomic) IGSundialCreationHighlightedTool *highlightedTool;
@property (readonly, copy, nonatomic) NSString *galleryTitle;
@property (readonly, copy, nonatomic) NSString *gallerySubtitle;
@property (readonly, nonatomic) BOOL skipTrimScreen;
@property (readonly, nonatomic) BOOL shouldShowCollabEducationFlow;

/* instance methods */
- (id)initWithActionOnCameraAppeared:(long long)appeared analyticsModule:(id)module audioTrackClip:(id)clip autoCreatedReelId:(id)id availableModes:(id)modes caption:(id)caption cameraCreationToolInfo:(id)info convertedReelPKsWithStoryMediaIds:(id)ids creationTemplate:(id)template effectTargetModel:(id)model entryPoint:(long long)point fanClubVideoType:(long long)type isAddSingleClipFlow:(BOOL)flow replaceSingleVideoClipInfo:(id)info loadAutoSavedDraft:(BOOL)draft loadedFromDraft:(BOOL)draft loadingAudioAssetContainer:(id)container openGalleryFirst:(BOOL)first pivotPageEntryPoint:(long long)point pivotPageSeededMediaId:(id)id pivotPageSessionId:(id)id preloadedMediaID:(id)id prepopulatedStickers:(id)stickers productName:(id)name remixedVideoContainer:(id)container remixClipInfoContainer:(id)container reuseTextInfosContainer:(id)container showPreloadingSettingsToast:(BOOL)toast shouldDisableUnfinishedDraftPrompt:(BOOL)prompt sourceMediaAuthorPk:(id)pk sourceMediaAuthorUsername:(id)username sourceMediaRankingInfoToken:(id)token startingMediaId:(id)id surface:(id)surface suggestingAudio:(id)audio suggestingEffect:(id)effect targetMode:(long long)mode welcomeVideoPublicChatMetadata:(id)metadata compositionContainer:(id)container preloadingPerfLogger:(id)logger isEffectPreloaded:(BOOL)preloaded initialAlbumTitle:(id)title acrAnalyticsSource:(long long)source promptStickerType:(long long)type stickerInsertSurface:(long long)surface isNewlyCreatedSticker:(BOOL)sticker lastGalleryPosition:(id)position creationPresenter:(id)presenter isCreationFromAudioPageFlow:(BOOL)flow mediaAudience:(long long)audience useAudioClickPerfLogger:(id)logger useAudioClickLoggerInstanceId:(unsigned long long)id highlightedTool:(id)tool galleryTitle:(id)title gallerySubtitle:(id)subtitle skipTrimScreen:(BOOL)screen shouldShowCollabEducationFlow:(BOOL)flow;
@end

#endif /* IGSundialCreationConfiguration_h */
