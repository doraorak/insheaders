//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTimeSpentNetworkSource_h
#define IGTimeSpentNetworkSource_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGRequestToken-Protocol.h"

@interface IGTimeSpentNetworkSource : NSObject {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  NSObject<IGRequestToken> *_requestToken;
}

/* instance methods */
- (id)initWithNetworker:(id)networker;
- (id)updateScreenTimeTaskWithScreenTimeStorageID:(id)id dailyTimeSpentForWeek:(id)week dailyTimeSpentByScreenForDay:(id)day includeSupervisionScreenTimeLimitInfo:(BOOL)info;
- (id)dailyLimitSettings;
- (id)updateScreenTimeSettingHelper:(id)helper apiPath:(id)path timeIntervalParam:(id)param;
- (id)updateScreenTimeSetting:(id)setting;
@end

#endif /* IGTimeSpentNetworkSource_h */
