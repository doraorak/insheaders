//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BCNFeedSectionContext_h
#define BCNFeedSectionContext_h
@import Foundation;

#include "IGFeedTheme-Protocol.h"

@class BCNThreadItem, IGListAdapterScrollingContext, IGPlaybackCoordinator, NSString;

@interface BCNFeedSectionContext : NSObject

@property (readonly, nonatomic) IGPlaybackCoordinator *playbackCoordinator;
@property (readonly, nonatomic) NSObject<IGFeedTheme> *theme;
@property (readonly, nonatomic) long long feedType;
@property (readonly, nonatomic) IGListAdapterScrollingContext *scrollingContext;
@property (readonly, nonatomic) BCNThreadItem *permalinkBillboardPost;
@property (readonly, nonatomic) NSString *currentProfileUserPk;

/* instance methods */
- (id)initWithPlaybackCoordinator:(id)coordinator theme:(id)theme feedType:(long long)type scrollingContext:(id)context permalinkBillboardPost:(id)post currentProfileUserPk:(id)pk;
@end

#endif /* BCNFeedSectionContext_h */
