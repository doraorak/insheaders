//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStory_h
#define IGStory_h
@import Foundation;

#include "IGBaseReel.h"
#include "FBBoxedBoolean-Protocol.h"
#include "IGAdGapRuleEnforceable-Protocol.h"
#include "IGAdPlatformGapRules.h"
#include "IGAppStickerAppDetails.h"
#include "IGBrandLiftSurvey.h"
#include "IGEmptyStateStoryData.h"
#include "IGListDiffable-Protocol.h"
#include "IGMusicInfo.h"
#include "IGRingViewSpec.h"
#include "IGStoryCarouselModel.h"
#include "IGStoryFetching-Protocol.h"
#include "IGStoryNetegoModel.h"
#include "IGStoryOwnerType-Protocol.h"
#include "IGStoryRequiredObjectStores.h"
#include "IGStoryRingBadgeSpec.h"
#include "IGUnitItemInformationProviding-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSObject, NSString;
@protocol NSArray<IGStoryItemType><IGUnitItemInformationProviding;

@interface IGStory : IGBaseReel<IGUnitItemInformationProviding, IGAdGapRuleEnforceable, IGStoryFetching, IGListDiffable> {
  /* instance variables */
  IGStoryRequiredObjectStores *_reelRequiredObjectStores;
  NSArray<IGStoryItemType><IGUnitItemInformationProviding> *_clientGeneratedFanClubAppendedItems;
  NSObject<IGUserLauncherSet> *_launcherSet;
  NSObject *_lock;
  unsigned long long _viewStateItemType;
  long long _adExpiryMaxTTLInSecs;
  BOOL _hasSkipped;
  BOOL _isMyWeekHighlight;
  BOOL _isPartiallyPopulatedFromCache;
  double _ptap;
  NSDate *_mediaPreviewPhotoCreationDate;
  NSData *_mediaPreviewData;
  IGStoryNetegoModel *_storyNetegoModel;
  IGBrandLiftSurvey *_storyResearchPollModel;
  IGAppStickerAppDetails *_appStickerInfo;
  IGMusicInfo *_adMusicInfo;
  IGStoryCarouselModel *_carouselModel;
  IGEmptyStateStoryData *_emptyStoryStateData;
  NSArray *_bestiesMediaIds;
  NSArray *_seenMediaIds;
  NSArray *_pendingItems;
  NSDictionary *_broadcastDict;
}

@property (retain, nonatomic) NSObject<IGStoryOwnerType> *owner;
@property (nonatomic) BOOL isClientGenerated;
@property (retain, nonatomic) NSArray *storyUnitItems;
@property (readonly, nonatomic) NSNumber *rankerScores_ClientSideRankingInfoToken;
@property (readonly, nonatomic) BOOL muted;
@property (readonly, nonatomic) NSDate *instantiatedAtDate;
@property (readonly, nonatomic) NSDate *latestReelMedia;
@property (readonly, nonatomic) NSDate *expiringAtDate;
@property (readonly, nonatomic) BOOL needsFetch;
@property (readonly, nonatomic) BOOL isSponsored;
@property (readonly, nonatomic) NSObject<FBBoxedBoolean> *isPinnedHighlight;
@property (readonly, nonatomic) BOOL isExclusiveHighlight;
@property (readonly, nonatomic) BOOL isExclusiveWelcomeStoryHighlight;
@property (readonly, nonatomic) IGRingViewSpec *ringSpec;
@property (readonly, nonatomic) IGStoryRingBadgeSpec *ringGlyph;
@property (readonly, copy, nonatomic) NSString *trayContext;
@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, nonatomic) BOOL containsStitchedMediaBlockedByRm;
@property (readonly, nonatomic) NSDate *adExpiryTimestampInMillis;
@property (readonly, nonatomic) NSDate *adRefreshThresholdTimestamp;
@property (readonly, nonatomic) long long adRefreshTTLInSecs;
@property (readonly, nonatomic) NSArray *adItems;
@property (retain, nonatomic) NSString *trackingToken;
@property (readonly, nonatomic) BOOL hasRecentlyPostedTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGAdPlatformGapRules *gapRules;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithPk:(id)pk reelRequiredObjectStores:(id)stores launcherSet:(id)set;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_updateWithBlock:(id /* block */)block data:(id)data;
- (BOOL)updateWithTreeIfFresh:(id)fresh;
- (BOOL)updateWithTree:(id)tree;
- (BOOL)updateWithStaleTree:(id)tree;
- (void)removeFeedItem:(id)item;
- (id)sortedItems;
- (id)_currentClientGeneratedFanClubAppendedItems;
- (id)_currentClientGeneratedFanClubHighlightStoriesAppendedItems;
- (id)_currentClientGeneratedFanClubIndividualStoriesAppendedItems;
- (id)unitItemId;
- (unsigned long long)unitItemType;
- (unsigned long long)serverViewStateItemType;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)diffIdentifier;
- (long long)_netegoType;
@end

#endif /* IGStory_h */
