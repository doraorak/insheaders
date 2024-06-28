//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSignalsSundialPrefetchCommentThreadProductModel_h
#define IGSignalsSundialPrefetchCommentThreadProductModel_h
@import Foundation;

#include "IGSignalsModel.h"
#include "IGEmitCounterSignal.h"
#include "IGNumberSignal.h"
#include "IGSignal.h"
#include "IGSignalsSundialPrefetchCommentThreadProductExample.h"

@interface IGSignalsSundialPrefetchCommentThreadProductModel : IGSignalsModel {
  /* instance variables */
  IGSignalsSundialPrefetchCommentThreadProductExample *_modelExample;
}

@property (readonly, nonatomic) IGSignal *likeReel;
@property (readonly, nonatomic) IGSignal *saveReel;
@property (readonly, nonatomic) IGSignal *openReelCreatorProfile;
@property (readonly, nonatomic) IGSignal *openReelShareSheet;
@property (readonly, nonatomic) IGSignal *followReelCreator;
@property (readonly, nonatomic) IGEmitCounterSignal *reelPlayback;
@property (readonly, nonatomic) IGSignal *audioTrending;
@property (readonly, nonatomic) IGNumberSignal *activeL1;
@property (readonly, nonatomic) IGNumberSignal *activeL2;
@property (readonly, nonatomic) IGNumberSignal *activeL5;
@property (readonly, nonatomic) IGNumberSignal *activeL7;
@property (readonly, nonatomic) IGSignal *saveReelFix;
@property (readonly, nonatomic) IGNumberSignal *commentCount;
@property (readonly, nonatomic) IGNumberSignal *likeCount;
@property (readonly, nonatomic) IGNumberSignal *totalRelevantLikeCount;
@property (readonly, nonatomic) IGNumberSignal *commentsViewL0C100;
@property (readonly, nonatomic) IGNumberSignal *commentsViewL1C100;
@property (readonly, nonatomic) IGNumberSignal *commentsViewL2C100;
@property (readonly, nonatomic) IGNumberSignal *commentsViewL5C100;
@property (readonly, nonatomic) IGNumberSignal *commentsViewL7C100;
@property (readonly, nonatomic) IGNumberSignal *commentsViewEventCount;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL0C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL1C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL2C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL5C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL7C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewEventCount;
@property (readonly, nonatomic) IGSignal *tappedMoreText;
@property (readonly, nonatomic) IGNumberSignal *triggerEventHour;
@property (readonly, nonatomic) IGNumberSignal *triggerEventWeekDay;
@property (readonly, nonatomic) IGNumberSignal *shouldPrefetch;
@property (readonly, nonatomic) IGNumberSignal *prefetchProba;

/* instance methods */
- (id)initWithIdentifier:(id)identifier queueScheduler:(id)scheduler;
- (id)commit;
- (double)version;
@end

#endif /* IGSignalsSundialPrefetchCommentThreadProductModel_h */