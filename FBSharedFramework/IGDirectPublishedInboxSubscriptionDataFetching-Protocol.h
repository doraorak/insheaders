//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPublishedInboxSubscriptionDataFetching_Protocol_h
#define IGDirectPublishedInboxSubscriptionDataFetching_Protocol_h
@import Foundation;

@protocol IGDirectPublishedInboxSubscriptionDataFetching 
/* instance methods */
- (void)ensureMinimumNumberOfThreads:(long long)threads forTab:(id)tab threadsFilter:(long long)filter;
- (void)loadNextPageOfThreadsForTab:(id)tab threadsFilter:(long long)filter;
- (void)ensureMinimumNumberOfPublishedMessages:(long long)messages forThreadId:(id)id;
- (void)loadPreviousPageOfMessagesForThreadId:(id)id tailLoadLogger:(id)logger;
- (void)loadMessageIslandForThreadId:(id)id anchorMessageId:(id)id;
- (void)fetchThreadForThreadId:(id)id;
- (void)fetchThreadForThreadId:(id)id withCompletionHandler:(id /* block */)handler;
- (void)fetchThreadForThreadId:(id)id fetchAttribution:(id)attribution withCompletionHandler:(id /* block */)handler;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGDirectPublishedInboxSubscriptionDataFetching_Protocol_h */
