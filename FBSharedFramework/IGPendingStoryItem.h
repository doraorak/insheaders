//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPendingStoryItem_h
#define IGPendingStoryItem_h
@import Foundation;

#include "IGDate.h"
#include "IGRingViewSpec.h"
#include "IGStoryImageProvider-Protocol.h"
#include "IGStoryItemType-Protocol.h"
#include "IGStoryQuickCaptionsModel.h"
#include "IGStoryRingBadgeSpec.h"
#include "IGStorySharedList.h"
#include "IGUnitItemInformationProviding-Protocol.h"
#include "IGUser.h"
#include "IGVideoURLProvider-Protocol.h"
#include "MSGEncryptedPayload.h"

@class NSArray, NSData, NSString, NSURL;
@protocol FNFDashVideoDrmHandler;

@interface IGPendingStoryItem : NSObject<IGVideoURLProvider, IGStoryItemType, IGUnitItemInformationProviding> {
  /* instance variables */
  NSObject<IGStoryImageProvider> *_pendingPhoto;
  NSObject<IGStoryImageProvider> *_pendingAssetManagerOverlay;
  IGDate *_takenAtDate;
  IGDate *_expiringAtDate;
  IGUser *_user;
  long long _mediaType;
  NSArray *_overlayTapModels;
  NSURL *_storyLinkUrl;
  double _totalDuration;
  NSString *_uploadId;
  long long _mediaAudience;
  NSURL *_videoDataFileURL;
  IGRingViewSpec *_customRingSpec;
  IGStoryRingBadgeSpec *_ringBadgeSpec;
  BOOL _isCandidMedia;
  IGStoryQuickCaptionsModel *_storyQuickCaption;
  BOOL _isReelReshareServerBurnInMedia;
  NSArray *_audienceLists;
  IGStorySharedList *_sharedList;
}

@property (readonly, nonatomic) NSData *dashManifestData;
@property (readonly, nonatomic) NSObject<FNFDashVideoDrmHandler> *drmHandler;
@property (readonly, nonatomic) MSGEncryptedPayload *encryptedPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTakenAtDate:(id)date user:(id)user image:(id)image overlayImage:(id)image mediaType:(long long)type overlayTapModels:(id)models storyLinkUrl:(id)url totalDuration:(double)duration uploadId:(id)id mediaAudience:(long long)audience videoDataFileURL:(id)url customRingSpec:(id)spec ringBadgeSpec:(id)spec isCandidMedia:(BOOL)media storyQuickCaption:(id)caption isReelReshareServerBurnInMedia:(BOOL)media audienceLists:(id)lists sharedList:(id)list;
- (id)expiringAtDate;
- (id)takenAtDate;
- (id)user;
- (id)photo;
- (id)video;
- (id)storyAssetManagerOverlay;
- (long long)mediaType;
- (id)mediaID;
- (id)productTypeString;
- (id)tapModelArray;
- (id)storyLinkUrlWithLauncherSet:(id)set;
- (id)arEffectStoryLink;
- (BOOL)hasShoppingStoryLink;
- (id)viewers;
- (id)totalViewerCount;
- (id)votersModels;
- (BOOL)shouldLoop;
- (double)totalDurationWithLauncherSetProvider:(id)provider withParameters:(id)parameters;
- (id)media;
- (id)pendingUploadId;
- (BOOL)hasPendingUpload;
- (BOOL)isSponsored;
- (long long)mediaAudience;
- (BOOL)supportsReelReactions;
- (BOOL)isIGInternal;
- (BOOL)isFBOnly;
- (BOOL)isFirstTakeGlimpse;
- (BOOL)isCandidMedia;
- (id)xpostDenyReason;
- (id)customRingSpec;
- (id)ringBadgeSpec;
- (id)storyQuickCaptionsModel;
- (id)audienceLists;
- (id)allVideoURLs;
- (id)videoURLForVideoVersion:(long long)version;
- (id)videoURLForCurrentNetworkConditions;
- (id)representationIdStringForVideoURL:(id)url;
- (id)isAudioDetected;
- (BOOL)isFacebookContent;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)unitItemId;
- (unsigned long long)unitItemType;
- (unsigned long long)serverViewStateItemType;
- (struct CGSize { double x0; double x1; })size;
- (id)username;
- (id)sharedList;
@end

#endif /* IGPendingStoryItem_h */
