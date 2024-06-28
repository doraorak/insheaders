//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemMediaCollectionThumbnailViewModel_h
#define IGFeedItemMediaCollectionThumbnailViewModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class IGMedia, IGUserSession, NSArray, NSString;

@interface IGFeedItemMediaCollectionThumbnailViewModel : NSObject<IGListDiffable>

@property (readonly, copy, nonatomic) NSString *analyticModule;
@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) NSArray *thumbnailMediaItems;
@property (readonly, nonatomic) IGUserSession *userSession;

/* instance methods */
- (id)initWithThumbnailMediaItems:(id)items analyticModule:(id)module media:(id)media userSession:(id)session;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGFeedItemMediaCollectionThumbnailViewModel_h */
