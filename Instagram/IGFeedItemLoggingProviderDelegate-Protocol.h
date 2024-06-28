//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemLoggingProviderDelegate_Protocol_h
#define IGFeedItemLoggingProviderDelegate_Protocol_h
@import Foundation;

@protocol IGFeedItemLoggingProviderDelegate <NSObject>

@property (nonatomic, readonly) NSString *sessionId;
@property (nonatomic, readonly) NSString *initialSessionId;

/* instance methods */
- (id)extraDictionaryForMedia:(id)media;
- (id)extraDictionaryForMedia:(id)media;
- (id)customModuleForMedia:(id)media;
- (id)customModuleForMedia:(id)media;
- (id)followControllerContextStringForMedia:(id)media;
- (id)followControllerContextStringForMedia:(id)media;
- (id)mediaIndexForMedia:(id)media;
- (id)mediaIndexForMedia:(id)media;
- (id)recIndexForMedia:(id)media;
- (id)recIndexForMedia:(id)media;
- (id)mediaIndexForMultiAd:(id)ad;
- (id)mediaIndexForMultiAd:(id)ad;
- (id)carouselInfoForMedia:(id)media;
- (id)carouselInfoForMedia:(id)media;
- (id)chainingInfoForMedia:(id)media;
- (id)chainingInfoForMedia:(id)media;
- (id)surfaceCategoryId;
- (id)rankingInfoTokenForMedia:(id)media;
- (id)rankingInfoTokenForMedia:(id)media;
- (id)mediaSectionForMedia:(id)media;
- (id)mediaSectionForMedia:(id)media;
@end

#endif /* IGFeedItemLoggingProviderDelegate_Protocol_h */
