//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainFeedFeedItemCache_h
#define IGMainFeedFeedItemCache_h
@import Foundation;

#include "IGMainFeedCacheConfiguration.h"
#include "IGMainFeedResponseStore.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "NSObject-Protocol.h"

@class IGFeedItemDeliveryMethod, NSArray, NSMutableArray, NSNumber, NSString;
@protocol IGFlashFeedMediaSeenStateProviding;

@interface IGMainFeedFeedItemCache : NSObject<NSObject> {
  /* instance variables */
  NSString *_userPk;
  NSObject<IGFlashFeedMediaSeenStateProviding> *_seenStateProvider;
  IGMainFeedResponseStore *_cachedItemsStore;
  NSArray *_cachedItems;
  IGFeedItemDeliveryMethod *_deliveryMethod;
  id /* block */ _mediaFilterPredicate;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  NSArray *_ifrIndexesInFeedSession;
  NSMutableArray *_currentSessionItems;
  NSMutableArray *_currentPageItems;
  BOOL _shouldReverseSessionPageOrder;
  NSArray *_archivedItems;
  NSString *_archivedNextMaxId;
}

@property (readonly, nonatomic) IGMainFeedCacheConfiguration *config;
@property (readonly, nonatomic) long long itemCount;
@property (readonly, nonatomic) NSString *nextMaxId;
@property (readonly, nonatomic) NSString *lastFetchReasonForRefresh;
@property (readonly, nonatomic) NSNumber *lastCacheRefreshTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserPk:(id)pk config:(id)config mediaFilterPredicate:(id /* block */)predicate seenStateProvider:(id)provider objectCacheConsolidator:(id)consolidator isQuickCache:(BOOL)cache sortByRankingWeight:(BOOL)weight featureSets:(id)sets lastInvalidatedDate:(id)date sessionUserDefaults:(id)defaults reverseSessionPageOrder:(BOOL)order pendingUpdates:(id)updates deliveryConfig:(id)config preProcessor:(id)processor;
- (id)initWithUserPk:(id)pk mediaFilterPredicate:(id /* block */)predicate seenStateProvider:(id)provider configuration:(id)configuration responseStore:(id)store featureSets:(id)sets;
- (id)itemsForPrivacyRecheckUpToMaximumCount:(long long)count excludingItems:(id)items;
- (id)allItems;
@end

#endif /* IGMainFeedFeedItemCache_h */
