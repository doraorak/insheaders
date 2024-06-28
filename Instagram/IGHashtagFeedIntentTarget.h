//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHashtagFeedIntentTarget_h
#define IGHashtagFeedIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class IGFollowAttributionModel, IGHashtagModel, NSArray, NSString;

@interface IGHashtagFeedIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGHashtagModel *hashtag;
@property (readonly, nonatomic) NSString *sourceMediaPk;
@property (readonly, nonatomic) IGFollowAttributionModel *followAttributionModel;
@property (readonly, nonatomic) NSString *searchQueryText;
@property (readonly, nonatomic) BOOL isChallenge;
@property (readonly, nonatomic) NSArray *topMediaIds;
@property (readonly, nonatomic) NSString *searchSessionId;
@property (readonly, nonatomic) NSString *priorSerpSessionId;
@property (readonly, nonatomic) NSString *pivotPageEntryPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHashtag:(id)hashtag sourceMediaPk:(id)pk followAttributionModel:(id)model searchQueryText:(id)text isChallenge:(BOOL)challenge topMediaIds:(id)ids searchSessionId:(id)id priorSerpSessionId:(id)id pivotPageEntryPoint:(id)point;
@end

#endif /* IGHashtagFeedIntentTarget_h */
