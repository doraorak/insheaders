//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPEligibilityPersistedStateV2_Protocol_h
#define QPEligibilityPersistedStateV2_Protocol_h
@import Foundation;

@protocol QPEligibilityPersistedStateV2 <NSObject>

@property (readonly, copy, nonatomic) NSString *nuxID;

/* instance methods */
- (id)lastOccurrenceTimeForEvent:(long long)event qpID:(id)id;
- (id)lastGlobalQpImpressionTime;
- (id)lastOccurrenceTimeOnSurfaceForEvent:(long long)event;
- (id)lastOccurrenceQPIdOnSurfaceForEvent:(long long)event;
- (long long)countForEvent:(long long)event qpID:(id)id;
- (void)incrementCountForEvent:(long long)event qpID:(id)id;
- (void)setEligibilityDurationStartTimeForQpID:(id)id;
- (id)eligibilityDurationStartTimeForQpID:(id)id;
@end

#endif /* QPEligibilityPersistedStateV2_Protocol_h */
