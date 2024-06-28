//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextualFeedItemConfigurationType_Protocol_h
#define IGContextualFeedItemConfigurationType_Protocol_h
@import Foundation;

@protocol IGContextualFeedItemConfigurationType <IGFeedItemConfigurationType>

@property (readonly, nonatomic) BOOL showExploreContext;
@property (readonly, nonatomic) BOOL showPreviewComments;
@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) NSString *entityId;
@property (readonly, nonatomic) NSString *productId;
@property (readonly, nonatomic) id /* block */ emptyStateButtonTapBlock;
@property (readonly, nonatomic) IGFeedItemShoppingConfiguration *shoppingConfiguration;
@property (readonly, nonatomic) BOOL hideUFIBar;
@property (readonly, nonatomic) NSString *authorId;
@property (readonly, nonatomic) BOOL showTaggedMediaPreview;
@property (readonly, nonatomic) NSString *originalCarouselMediaId;
@property (readonly, nonatomic) IGMedia *originalCarouselMedia;
@property (readonly, nonatomic) NSURL *originalCarouselThumbnailURL;

@end

#endif /* IGContextualFeedItemConfigurationType_Protocol_h */