//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchAnalyticsLogger_h
#define IGSearchAnalyticsLogger_h
@import Foundation;

#include "IGSearchSession.h"
#include "IGSessionTracker.h"
#include "IGUserSession.h"

@class NSMutableArray, NSString;

@interface IGSearchAnalyticsLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSMutableArray *_recommendationIds;
  NSMutableArray *_recommendationNames;
  NSMutableArray *_recommendationTypes;
  IGSessionTracker *_shoppingSearchSessionTracker;
  IGSessionTracker *_serpSessionTracker;
}

@property (readonly, nonatomic) IGSearchSession *searchSession;
@property (readonly, nonatomic) NSString *priorSerpSessionId;
@property (readonly, nonatomic) NSString *priorQuery;
@property (readonly, nonatomic) NSString *serpSource;
@property (readonly, nonatomic) NSString *followAttributionEntryTrigger;

/* instance methods */
- (id)initWithSearchSession:(id)session shoppingSearchSessionTracker:(id)tracker serpSessionTracker:(id)tracker userSession:(id)session;
- (id)initWithSearchSession:(id)session shoppingSearchSessionTracker:(id)tracker serpSessionTracker:(id)tracker serpSource:(id)source userSession:(id)session priorSerpSessionId:(id)id priorQuery:(id)query followAttributionEntryTrigger:(id)trigger;
- (void)logKeywordRecommendationItem:(id)item;
@end

#endif /* IGSearchAnalyticsLogger_h */