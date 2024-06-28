//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHashtagMainFeedDataControllerDelegate_Protocol_h
#define IGHashtagMainFeedDataControllerDelegate_Protocol_h
@import Foundation;

@protocol IGHashtagMainFeedDataControllerDelegate <NSObject>
/* instance methods */
- (void)hashtagMainFeedDataController:(id)controller didStartLoadingWithConfig:(id)config networkRequestType:(long long)type;
- (void)hashtagMainFeedDataController:(id)controller didCompleteInfoRequest:(id)request;
- (void)hashtagMainFeedDataController:(id)controller didCompleteMainFeedRequest:(id)request persistentDataStore:(id)store requestConfig:(id)config hashtagContentAdvisoryModel:(id)model hashtagNullStateModel:(id)model hashtagAvailableFilters:(id)filters;
- (void)hashtagMainFeedDataController:(id)controller didFailDataRequest:(id)request requestConfig:(id)config requestType:(long long)type hashtagFeedType:(long long)type;
@end

#endif /* IGHashtagMainFeedDataControllerDelegate_Protocol_h */
