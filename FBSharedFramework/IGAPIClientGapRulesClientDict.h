//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIClientGapRulesClientDict_h
#define IGAPIClientGapRulesClientDict_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIClientGapRulesClientDict : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithCarryOverHighestPositionRule:(id)rule consumedMediaGapToPreviousAd:(id)ad consumedMediaGapToPreviousNetego:(id)netego dnf:(id)dnf highestPositionRule:(id)rule isMediaBasedHpEnabled:(id)enabled maxReelGapToPreviousItem:(id)item minContainerGapToPreviousAd:(id)ad minContainerGapToPreviousOverlayAd:(id)ad minMediaGapToPreviousItem:(id)item poolRefreshTtlInSec:(id)sec pushUpClientGapRules:(id)rules reelGapToPreviousAd:(id)ad reelGapToPreviousNetego:(id)netego targetInsertionPosition:(id)position timeGapToPreviousItemInSec:(id)sec;
@end

#endif /* IGAPIClientGapRulesClientDict_h */