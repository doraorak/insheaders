//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNavigationEventListener_Protocol_h
#define IGNavigationEventListener_Protocol_h
@import Foundation;

@protocol IGNavigationEventListener <NSObject>
/* instance methods */
- (void)viewControllerWillAppear:(id)appear;
- (void)viewControllerDidAppear:(id)appear withEventData:(id)data;
- (void)viewControllerWillDisappear:(id)disappear;
- (void)viewControllerDidDisappear:(id)disappear withEventData:(id)data;
- (void)viewControllerDidDeallocWithAnalyticsModule:(id)module;
- (void)viewControllerDidUpdate:(id)update updateExtras:(id)extras;
@optional
/* instance methods */
- (void)viewControllerStackDidAppear:(id)appear;
@end

#endif /* IGNavigationEventListener_Protocol_h */
