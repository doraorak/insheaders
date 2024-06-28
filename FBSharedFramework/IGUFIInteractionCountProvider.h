//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUFIInteractionCountProvider_h
#define IGUFIInteractionCountProvider_h
@import Foundation;

#include "IGMedia.h"
#include "IGUFIInteractionCountProviderType-Protocol.h"

@class NSString;

@interface IGUFIInteractionCountProvider : NSObject<IGUFIInteractionCountProviderType> {
  /* instance variables */
  BOOL _showLikeCount;
  BOOL _showCommentCount;
  BOOL _shouldShowReshareCount;
}

@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) BOOL mediaHasDelayedInteractionCounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMedia:(id)media itemConfiguration:(id)configuration likeAndViewCountHelper:(id)helper mediaHasDelayedMetadata:(BOOL)metadata;
- (id)likeCountString;
- (id)commentCountString;
- (id)reshareCountString;
@end

#endif /* IGUFIInteractionCountProvider_h */
