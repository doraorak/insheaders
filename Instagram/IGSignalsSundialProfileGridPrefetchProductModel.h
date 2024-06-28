//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSignalsSundialProfileGridPrefetchProductModel_h
#define IGSignalsSundialProfileGridPrefetchProductModel_h
@import Foundation;

#include "IGSignalsModel.h"
#include "IGEmitCounterSignal.h"
#include "IGNumberSignal.h"
#include "IGSignal.h"
#include "IGSignalsSundialProfileGridPrefetchProductExample.h"

@interface IGSignalsSundialProfileGridPrefetchProductModel : IGSignalsModel {
  /* instance variables */
  IGSignalsSundialProfileGridPrefetchProductExample *_modelExample;
}

@property (readonly, nonatomic) IGSignal *likeReel;
@property (readonly, nonatomic) IGSignal *saveReel;
@property (readonly, nonatomic) IGSignal *openReelShareSheet;
@property (readonly, nonatomic) IGSignal *openReelComments;
@property (readonly, nonatomic) IGSignal *followReelCreator;
@property (readonly, nonatomic) IGEmitCounterSignal *reelPlayback;
@property (readonly, nonatomic) IGSignal *audioTrending;
@property (readonly, nonatomic) IGNumberSignal *commentCount;
@property (readonly, nonatomic) IGNumberSignal *likeCount;
@property (readonly, nonatomic) IGNumberSignal *totalRelevantLikeCount;
@property (readonly, nonatomic) IGNumberSignal *profileViewL0C100;
@property (readonly, nonatomic) IGNumberSignal *profileViewL1C100;
@property (readonly, nonatomic) IGNumberSignal *profileViewL2C100;
@property (readonly, nonatomic) IGNumberSignal *profileViewL5C100;
@property (readonly, nonatomic) IGNumberSignal *profileViewL7C100;
@property (readonly, nonatomic) IGNumberSignal *profileViewEventCount;
@property (readonly, nonatomic) IGNumberSignal *commentViewL0C100;
@property (readonly, nonatomic) IGNumberSignal *commentViewL1C100;
@property (readonly, nonatomic) IGNumberSignal *commentViewL2C100;
@property (readonly, nonatomic) IGNumberSignal *commentViewL5C100;
@property (readonly, nonatomic) IGNumberSignal *commentViewL7C100;
@property (readonly, nonatomic) IGNumberSignal *commentViewEventCount;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL0C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL1C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL2C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL5C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewL7C100;
@property (readonly, nonatomic) IGNumberSignal *reelsViewEventCount;
@property (readonly, nonatomic) IGSignal *tappedMoreText;
@property (readonly, nonatomic) IGNumberSignal *triggerEventHour;
@property (readonly, nonatomic) IGNumberSignal *triggerEventWeekDay;

/* instance methods */
- (id)initWithIdentifier:(id)identifier queueScheduler:(id)scheduler;
- (id)commit;
- (double)version;
@end

#endif /* IGSignalsSundialProfileGridPrefetchProductModel_h */
