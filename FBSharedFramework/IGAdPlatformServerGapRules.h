//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdPlatformServerGapRules_h
#define IGAdPlatformServerGapRules_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGAdPlatformServerGapRules : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long containerGapToPreviousAd;
@property (readonly, nonatomic) long long containerGapToPreviousNetego;
@property (readonly, nonatomic) long long consumedMediaGapToPreviousAd;
@property (readonly, nonatomic) long long consumedMediaGapToPreviousNetego;
@property (readonly, nonatomic) long long highestPositionRule;
@property (readonly, nonatomic) long long highestPositionRuleForCarryOver;
@property (readonly, nonatomic) long long minContainerGapToPreviousAd;
@property (readonly, nonatomic) long long minContainerGapToPreviousNetego;
@property (readonly, nonatomic) long long minServerPushUpGap;
@property (readonly, nonatomic) long long minContainerGapToPreviousAdInTBIPushUp;
@property (readonly, nonatomic) long long minContainerGapToPreviousNetegoInTBIPushUp;
@property (readonly, nonatomic) long long maxContainerGapToPreviousItem;
@property (readonly, nonatomic) long long minMediaGapToPreviousItem;
@property (readonly, nonatomic) double timeGapToPreviousItemInSec;
@property (readonly, nonatomic) double timeGapToPreviousItemInSecInTBIPushUp;
@property (readonly, nonatomic) long long targetInsertionPosition;
@property (readonly, nonatomic) long long globalPosition;
@property (readonly, nonatomic) BOOL isMediaBasedHPEnabled;
@property (readonly, nonatomic) long long minContainerGapToPreviousOverlayAd;
@property (readonly, copy, nonatomic) NSArray *eligibleIntentGapRules;
@property (readonly, copy, nonatomic) NSString *intentSignalForTBIPushUpUpdate;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithContainerGapToPreviousAd:(long long)ad containerGapToPreviousNetego:(long long)netego consumedMediaGapToPreviousAd:(long long)ad consumedMediaGapToPreviousNetego:(long long)netego highestPositionRule:(long long)rule highestPositionRuleForCarryOver:(long long)over minContainerGapToPreviousAd:(long long)ad minContainerGapToPreviousNetego:(long long)netego minServerPushUpGap:(long long)gap minContainerGapToPreviousAdInTBIPushUp:(long long)up minContainerGapToPreviousNetegoInTBIPushUp:(long long)up maxContainerGapToPreviousItem:(long long)item minMediaGapToPreviousItem:(long long)item timeGapToPreviousItemInSec:(double)sec timeGapToPreviousItemInSecInTBIPushUp:(double)up targetInsertionPosition:(long long)position globalPosition:(long long)position isMediaBasedHPEnabled:(BOOL)hpenabled minContainerGapToPreviousOverlayAd:(long long)ad eligibleIntentGapRules:(id)rules intentSignalForTBIPushUpUpdate:(id)update;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGAdPlatformServerGapRules_h */