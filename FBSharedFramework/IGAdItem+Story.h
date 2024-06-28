//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdItem_Story_h
#define IGAdItem_Story_h
@import Foundation;

@interface IGAdItem (Story) <IGStoryItemType>
/* instance methods */
- (id)arEffectStoryLink;
- (id)customRingSpec;
- (id)ringBadgeSpec;
- (id)xpostDenyReason;
- (id)expiringAtDate;
- (BOOL)hasShoppingStoryLink;
- (BOOL)isFBOnly;
- (BOOL)isIGInternal;
- (BOOL)isFirstTakeGlimpse;
- (BOOL)isCandidMedia;
- (BOOL)isSponsored;
- (long long)mediaAudience;
- (id)mediaID;
- (id)productTypeString;
- (id)storyAssetManagerOverlay;
- (long long)mediaType;
- (id)pendingUploadId;
- (BOOL)hasPendingUpload;
- (id)photo;
- (BOOL)shouldLoop;
- (id)storyLinkUrlWithLauncherSet:(id)set;
- (BOOL)supportsReelReactions;
- (id)takenAtDate;
- (id)tapModelArray;
- (double)totalDurationWithLauncherSetProvider:(id)provider withParameters:(id)parameters;
- (id)user;
- (id)video;
- (id)totalViewerCount;
- (id)viewers;
- (id)votersModels;
- (id)storyQuickCaptionsModel;
- (id)audienceLists;
- (id)sharedList;
@end

#endif /* IGAdItem_Story_h */