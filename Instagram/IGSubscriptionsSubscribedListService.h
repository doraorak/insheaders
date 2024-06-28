//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSubscriptionsSubscribedListService_h
#define IGSubscriptionsSubscribedListService_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGAsyncTask, NSArray;

@interface IGSubscriptionsSubscribedListService : NSObject {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  IGAsyncTask *_fetchTask;
  NSArray *_subscribedFanClubIDs;
}

/* instance methods */
- (id)initWithNetworker:(id)networker featureSets:(id)sets;
@end

#endif /* IGSubscriptionsSubscribedListService_h */