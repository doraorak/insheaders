//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBaseUpcomingEvent_h
#define IGBaseUpcomingEvent_h
@import Foundation;

#include "IGAPIStorableObject.h"
#include "FBBoxedBoolean-Protocol.h"
#include "FBBoxedInteger-Protocol.h"
#include "IGAPIEventPageNavigationMetadata.h"
#include "IGAPIUpcomingDropCampaignEventMetadata.h"
#include "IGAPIUpcomingEventLiveMetadataDict.h"
#include "IGAPIUpcomingEventMedia.h"
#include "IGUser.h"

@class NSString;

@interface IGBaseUpcomingEvent : IGAPIStorableObject

@property (retain, nonatomic) IGAPIUpcomingDropCampaignEventMetadata *dropsCampaignMetadata;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_endTime;
@property (retain, nonatomic) IGAPIEventPageNavigationMetadata *_private_eventPageMetadata;
@property (retain, nonatomic) NSString *_private_graphQLID;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_lastNotificationTime;
@property (retain, nonatomic) IGAPIUpcomingEventLiveMetadataDict *liveMetadata;
@property (retain, nonatomic) IGAPIUpcomingEventMedia *media;
@property (retain, nonatomic) IGUser *owner;
@property (retain, nonatomic) NSObject<FBBoxedInteger> *_private_startTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *upcomingEventIdType;
@property (retain, nonatomic) NSObject<FBBoxedBoolean> *reminderEnabled;

/* instance methods */
- (id)GraphQLName;
- (struct vector<long long, std::allocator<long long>> { long long * x0; long long * x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long * x0; } x2; })collectFieldsToObserve;
- (struct vector<std::string_view, std::allocator<std::string_view>> { void * x0; void * x1; struct __compressed_pair<std::string_view *, std::allocator<std::string_view>> { void * x0; } x2; })collectFieldKeysToObserve;
- (BOOL)updateWithTree:(id)tree;
- (BOOL)updateWithStaleTree:(id)tree;
@end

#endif /* IGBaseUpcomingEvent_h */
