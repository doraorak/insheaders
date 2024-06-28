//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadOutgoingMessagesSortingInfoCache_h
#define IGDirectThreadOutgoingMessagesSortingInfoCache_h
@import Foundation;

@class NSMutableDictionary;
@protocol IGDirectThreadOutgoingMessagesSortingInfoCacheDelegate, OS_dispatch_queue;

@interface IGDirectThreadOutgoingMessagesSortingInfoCache : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableDictionary *_sortingInfoByClientContext;
}

@property (weak, nonatomic) NSObject<IGDirectThreadOutgoingMessagesSortingInfoCacheDelegate> *delegate;

/* instance methods */
- (id)initWithQueue:(id)queue;
@end

#endif /* IGDirectThreadOutgoingMessagesSortingInfoCache_h */
