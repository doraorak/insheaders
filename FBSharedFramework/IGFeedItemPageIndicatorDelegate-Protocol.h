//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemPageIndicatorDelegate_Protocol_h
#define IGFeedItemPageIndicatorDelegate_Protocol_h
@import Foundation;

@protocol IGFeedItemPageIndicatorDelegate <NSObject>
/* instance methods */
- (void)feedItemPageIndicator:(id)indicator didScrubToIndex:(long long)index;
- (void)feedItemPageIndicatorDidRequestSidecarToDisplay:(id)display index:(long long)index;
@end

#endif /* IGFeedItemPageIndicatorDelegate_Protocol_h */
