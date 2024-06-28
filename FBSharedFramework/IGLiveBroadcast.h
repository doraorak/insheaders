//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcast_h
#define IGLiveBroadcast_h
@import Foundation;

#include "FBValueObject.h"
#include "IGAPIMediaOverlayPayloadSchema.h"
#include "IGGating.h"
#include "IGListDiffable-Protocol.h"
#include "IGLiveBroadcastCharityInfo.h"
#include "IGLiveBroadcastCharityUpdate.h"
#include "IGLiveBroadcastExperimentConfig.h"
#include "IGLiveBroadcastResourceUpdate.h"
#include "IGLiveBroadcastUserPayUpdate.h"
#include "IGLiveViewerUserPayConfig.h"
#include "IGUser.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSArray, NSData, NSDate, NSNumber, NSString, NSURL;

@interface IGLiveBroadcast : FBValueObject<IGListDiffable, NSCopying, NSCoding, NSObject>

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *mediaId;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSURL *adaptiveBitrateUrl;
@property (readonly, copy, nonatomic) NSData *inlinedPlaylist;
@property (readonly, copy, nonatomic) NSData *dashManifest;
@property (readonly, nonatomic) long long numberOfQualities;
@property (readonly, copy, nonatomic) NSString *encodingTag;
@property (readonly, copy, nonatomic) NSURL *coverFrameUrl;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) IGUser *owner;
@property (readonly, copy, nonatomic) NSArray *guests;
@property (readonly, nonatomic) long long initialViewerCount;
@property (readonly, copy, nonatomic) NSNumber *currentViewerCount;
@property (readonly, copy, nonatomic) NSNumber *totalViewerCount;
@property (readonly, copy, nonatomic) NSArray *viewerCountAvatars;
@property (readonly, copy, nonatomic) NSArray *connectedViewingUsers;
@property (readonly, copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) long long startPlaybackAtOffset;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) long long rankedPosition;
@property (readonly, nonatomic) long long seenRankedPosition;
@property (readonly, copy, nonatomic) NSString *organicTrackingToken;
@property (readonly, nonatomic) unsigned long long audienceType;
@property (readonly, copy, nonatomic) NSArray *cobroadcasterIds;
@property (readonly, nonatomic) BOOL hasCopyrightViolation;
@property (readonly, copy, nonatomic) NSString *questionId;
@property (readonly, nonatomic) BOOL isGamingContent;
@property (readonly, nonatomic) BOOL isViewerCommentAllowed;
@property (readonly, copy, nonatomic) IGGating *sensitivityGating;
@property (readonly, copy, nonatomic) IGAPIMediaOverlayPayloadSchema *mediaOverlayInfo;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *prompt;
@property (readonly, copy, nonatomic) NSArray *sponsorTags;
@property (readonly, copy, nonatomic) IGLiveBroadcastCharityInfo *charityInfo;
@property (readonly, copy, nonatomic) IGLiveBroadcastCharityUpdate *charityUpdate;
@property (readonly, copy, nonatomic) IGLiveViewerUserPayConfig *userPayViewerConfig;
@property (readonly, copy, nonatomic) IGLiveBroadcastUserPayUpdate *userPayUpdate;
@property (readonly, copy, nonatomic) NSString *fbSimulcastBroadcastId;
@property (readonly, copy, nonatomic) NSString *postId;
@property (readonly, copy, nonatomic) NSDate *responseTimeStamp;
@property (readonly, nonatomic) BOOL isPolicyViolation;
@property (readonly, copy, nonatomic) NSString *policyViolationReason;
@property (readonly, nonatomic) BOOL requestToJoinEnabled;
@property (readonly, nonatomic) BOOL isUserPayMaxAmountReached;
@property (readonly, copy, nonatomic) IGLiveBroadcastResourceUpdate *ssiResourceUpdate;
@property (readonly, copy, nonatomic) IGLiveBroadcastExperimentConfig *experimentConfig;
@property (readonly, copy, nonatomic) NSURL *progressivePlaybackURL;
@property (readonly, nonatomic) double progressivePlaybackDuration;
@property (readonly, copy, nonatomic) NSString *liveArchivePk;
@property (readonly, nonatomic) BOOL archiveCanShareToIGTV;
@property (readonly, nonatomic) unsigned long long viewStateItemType;
@property (readonly, nonatomic) BOOL isScheduledLive;
@property (readonly, nonatomic) BOOL isFanClubEnabled;
@property (readonly, copy, nonatomic) NSArray *chatInfo;
@property (readonly, nonatomic) BOOL supActive;
@property (readonly, nonatomic) BOOL showBFFUpsell;
@property (readonly, copy, nonatomic) NSString *gameStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPk:(id)pk mediaId:(id)id url:(id)url adaptiveBitrateUrl:(id)url inlinedPlaylist:(id)playlist dashManifest:(id)manifest numberOfQualities:(long long)qualities encodingTag:(id)tag coverFrameUrl:(id)url status:(long long)status owner:(id)owner guests:(id)guests initialViewerCount:(long long)count currentViewerCount:(id)count totalViewerCount:(id)count viewerCountAvatars:(id)avatars connectedViewingUsers:(id)users startTime:(id)time startPlaybackAtOffset:(long long)offset isMuted:(BOOL)muted rankedPosition:(long long)position seenRankedPosition:(long long)position organicTrackingToken:(id)token audienceType:(unsigned long long)type cobroadcasterIds:(id)ids hasCopyrightViolation:(BOOL)violation questionId:(id)id isGamingContent:(BOOL)content isViewerCommentAllowed:(BOOL)allowed sensitivityGating:(id)gating mediaOverlayInfo:(id)info title:(id)title prompt:(id)prompt sponsorTags:(id)tags charityInfo:(id)info charityUpdate:(id)update userPayViewerConfig:(id)config userPayUpdate:(id)update fbSimulcastBroadcastId:(id)id postId:(id)id responseTimeStamp:(id)stamp isPolicyViolation:(BOOL)violation policyViolationReason:(id)reason requestToJoinEnabled:(BOOL)enabled isUserPayMaxAmountReached:(BOOL)reached ssiResourceUpdate:(id)update experimentConfig:(id)config progressivePlaybackURL:(id)url progressivePlaybackDuration:(double)duration liveArchivePk:(id)pk archiveCanShareToIGTV:(BOOL)igtv viewStateItemType:(unsigned long long)type isScheduledLive:(BOOL)live isFanClubEnabled:(BOOL)enabled chatInfo:(id)info supActive:(BOOL)active showBFFUpsell:(BOOL)bffupsell gameStatus:(id)status;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)valueIdentifier;
@end

#endif /* IGLiveBroadcast_h */
