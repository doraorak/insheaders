//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHashtagMainFeedSingleDataController_h
#define IGHashtagMainFeedSingleDataController_h
@import Foundation;

#include "IGHashtagNetworker.h"

@class IGHashtagFeedDataStore;

@interface IGHashtagMainFeedSingleDataController : NSObject

@property (readonly, nonatomic) IGHashtagFeedDataStore *dataStore;
@property (readonly, nonatomic) IGHashtagNetworker *networker;

/* instance methods */
- (id)initWithDataStore:(id)store networker:(id)networker;
@end

#endif /* IGHashtagMainFeedSingleDataController_h */