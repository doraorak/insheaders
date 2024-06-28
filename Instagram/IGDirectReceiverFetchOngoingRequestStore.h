//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectReceiverFetchOngoingRequestStore_h
#define IGDirectReceiverFetchOngoingRequestStore_h
@import Foundation;

@class NSMutableDictionary;

@interface IGDirectReceiverFetchOngoingRequestStore : NSObject {
  /* instance variables */
  NSMutableDictionary *_fetchesInProgress;
  NSMutableDictionary *_quoteeMessageMap;
}

/* instance methods */
- (id)init;
- (long long)count;
@end

#endif /* IGDirectReceiverFetchOngoingRequestStore_h */