//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryDataControllerBroadcastItemListener_Protocol_h
#define IGStoryDataControllerBroadcastItemListener_Protocol_h
@import Foundation;

@protocol IGStoryDataControllerBroadcastItemListener <NSObject>
/* instance methods */
- (void)storyDataController:(id)controller didUpdateBroadcast:(id)broadcast updateDuration:(double)duration;
- (void)storyDataController:(id)controller didDeleteBroadcast:(id)broadcast updateDuration:(double)duration;
- (void)storyDataController:(id)controller fetchBroadcastItemsDidFailWithError:(id)error refreshType:(long long)type updateDuration:(double)duration;
- (void)storyDataController:(id)controller didReturnNoBroadcastItemResultsForUserPK:(id)pk refreshType:(long long)type updateDuration:(double)duration;
@end

#endif /* IGStoryDataControllerBroadcastItemListener_Protocol_h */
