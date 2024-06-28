//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC6IGOpal24IGOpalFeedViewController_IGOpal1_h
#define _TtC6IGOpal24IGOpalFeedViewController_IGOpal1_h
@import Foundation;

@interface _TtC6IGOpal24IGOpalFeedViewController (IGOpal1) <IGFeedNetworkSourceDelegate>
/* instance methods */
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
@end

#endif /* _TtC6IGOpal24IGOpalFeedViewController_IGOpal1_h */