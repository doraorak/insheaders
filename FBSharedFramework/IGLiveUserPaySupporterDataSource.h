//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveUserPaySupporterDataSource_h
#define IGLiveUserPaySupporterDataSource_h
@import Foundation;

#include "IGAsyncTask.h"
#include "IGLiveBroadcastUserPayUpdate.h"
#include "IGUserSession.h"

@class NSMutableOrderedSet, NSString;
@protocol IGLiveUserPaySupporterDataSourceAnnouncer;

@interface IGLiveUserPaySupporterDataSource : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSMutableOrderedSet *_supportersOrderedSet;
  IGLiveBroadcastUserPayUpdate *_latestUpdate;
  NSObject<IGLiveUserPaySupporterDataSourceAnnouncer> *_announcer;
  IGAsyncTask *_listRequest;
  NSString *_maxId;
  NSString *_entityId;
  long long _supporterListSortingType;
}

@property (readonly, nonatomic) BOOL useInsightsID;
@property (readonly, nonatomic) BOOL isMatchMaxedOut;
@property (readonly, nonatomic) BOOL canCreateThankYouStory;
@property (readonly, nonatomic) long long numberOfBadges;
@property (readonly, nonatomic) long long numberOfSupporters;
@property (readonly, nonatomic) NSString *formattedAmountRaised;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) double creationDate;
@property (readonly, nonatomic) NSString *formattedIncentiveMatch;

/* instance methods */
- (id)initWithUserSession:(id)session useInsightsID:(BOOL)id supporterListSortingType:(long long)type title:(id)title creationDate:(double)date canCreateThankYouStory:(BOOL)story;
- (id)supporters;
- (void)addListener:(id)listener;
- (BOOL)isLoading;
@end

#endif /* IGLiveUserPaySupporterDataSource_h */