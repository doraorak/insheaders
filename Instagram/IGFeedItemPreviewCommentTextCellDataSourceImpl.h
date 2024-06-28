//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemPreviewCommentTextCellDataSourceImpl_h
#define IGFeedItemPreviewCommentTextCellDataSourceImpl_h
@import Foundation;

#include "IGCarouselIndexProviding-Protocol.h"
#include "IGFeedItemTextCellDataSourceProtocol-Protocol.h"
#include "IGSponsoredInfoProviding-Protocol.h"

@class IGMedia, NSString;

@interface IGFeedItemPreviewCommentTextCellDataSourceImpl : NSObject<IGFeedItemTextCellDataSourceProtocol> {
  /* instance variables */
  IGMedia *_media;
  NSObject<IGSponsoredInfoProviding> *_sponsoredPostInfo;
  NSObject<IGCarouselIndexProviding> *_carouselIndexProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMedia:(id)media sponsoredPostInfo:(id)info carouselIndexProvider:(id)provider;
- (id)feedItemForFeedItemTextCell:(id)cell;
- (id)carouselIndexForFeedItemTextCell:(id)cell;
- (id)commentModelPKForFeedItemTextCell:(id)cell;
@end

#endif /* IGFeedItemPreviewCommentTextCellDataSourceImpl_h */
