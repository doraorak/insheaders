//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGDirectChannelRefresher24IGDirectChannelRefresher_h
#define _TtC24IGDirectChannelRefresher24IGDirectChannelRefresher_h
@import Foundation;

@interface _TtC24IGDirectChannelRefresher24IGDirectChannelRefresher : NSObject { // (Swift)
  /* instance variables */
   inboxSubscriptionService;
   threadSubscriptionService;
   octaneThreadPersister;
   persistOnFetch;
   nonCriticalFetchEnabled;
   nonCriticalFetcher;
   userSession;
   threadId;
   threadPerfComponents;
   threadFetchInProgress;
   shouldLogThreadFetch;
}

/* instance methods */
- (id)initWithThreadId:(id)id threadPerfComponents:(id)components inboxSubscriptionService:(id)service threadSubscriptionService:(id)service octaneThreadPersister:(id)persister userSession:(id)session;
- (void)dealloc;
- (void)loadChannelToCreateViewControllerWithSuccess:(id /* block */)success failure:(id /* block */)failure;
- (void)refreshChannelWithThreadSubtype:(unsigned long long)subtype fetchReason:(id)reason completionHandler:(id /* block */)handler;
- (void)markBroadcastChannelAsOpened;
- (id)init;
@end

#endif /* _TtC24IGDirectChannelRefresher24IGDirectChannelRefresher_h */