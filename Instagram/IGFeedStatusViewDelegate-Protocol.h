//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedStatusViewDelegate_Protocol_h
#define IGFeedStatusViewDelegate_Protocol_h
@import Foundation;

@protocol IGFeedStatusViewDelegate <NSObject>
/* instance methods */
- (void)feedStatusViewDidTap:(id)tap;
- (void)feedStatusEmptyStateButtonWasTapped:(id)tapped;
@optional
/* instance methods */
- (void)feedStatusView:(id)view didChangeComputedHeight:(double)height;
- (double)visibleContentHeight;
@end

#endif /* IGFeedStatusViewDelegate_Protocol_h */