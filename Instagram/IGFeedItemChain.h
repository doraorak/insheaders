//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemChain_h
#define IGFeedItemChain_h
@import Foundation;

#include "IGChainingFeedDataSource.h"
#include "IGListDiffable-Protocol.h"
#include "NSObject-Protocol.h"

@class IGMedia, NSMutableOrderedSet, NSString;

@interface IGFeedItemChain : NSObject<IGListDiffable, NSObject> {
  /* instance variables */
  NSMutableOrderedSet *_chainedItems;
  IGChainingFeedDataSource *_dataSource;
  IGMedia *_firstFeedItem;
  IGMedia *_mediaBeforeAd;
  NSString *_analyticsModule;
  BOOL _hasAppendedItems;
  NSString *_singleChainPaginationToken;
}

@property (copy, nonatomic) NSString *maxId;
@property (nonatomic) BOOL hasMoreAvailable;
@property (nonatomic) BOOL hideSeedMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAd:(id)ad mediaBeforeAd:(id)ad;
- (id)initWithMedia:(id)media;
- (id)initWithMedias:(id)medias;
- (id)feedItems;
- (id)allItems;
- (void)appendItems:(id)items;
- (void)setItems:(id)items;
- (void)removeFeedItem:(id)item;
- (id)media;
- (id)adItem;
- (id)adItems;
- (long long)indexOfItemContainingFeedItem:(id)item;
- (id)allChainItems;
- (BOOL)isEqual:(id)equal;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGFeedItemChain_h */
