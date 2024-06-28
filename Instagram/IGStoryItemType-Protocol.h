//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryItemType_Protocol_h
#define IGStoryItemType_Protocol_h
@import Foundation;

@protocol IGStoryItemType <NSObject, IGListDiffable>
/* instance methods */
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
- (id)storyLinkUrlWithLauncherSet:(id)set;
- (id)arEffectStoryLink;
- (BOOL)hasShoppingStoryLink;
- (id)viewers;
- (id)totalViewerCount;
- (id)votersModels;
- (BOOL)shouldLoop;
- (double)totalDurationWithLauncherSetProvider:(id)provider withParameters:(id)parameters;
- (double)totalDurationWithLauncherSetProvider:(id)provider withParameters:(id)parameters;
- (id)media;
- (id)pendingUploadId;
- (BOOL)hasPendingUpload;
- (BOOL)isSponsored;
- (long long)mediaAudience;
- (BOOL)supportsReelReactions;
- (BOOL)isIGInternal;
- (BOOL)isFBOnly;
- (id)xpostDenyReason;
- (id)customRingSpec;
- (id)ringBadgeSpec;
- (BOOL)isFirstTakeGlimpse;
- (BOOL)isCandidMedia;
- (id)storyQuickCaptionsModel;
- (id)audienceLists;
- (id)sharedList;
@end

#endif /* IGStoryItemType_Protocol_h */