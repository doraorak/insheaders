//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBReliabilityStatisticsCounter_h
#define FBReliabilityStatisticsCounter_h
@import Foundation;

@interface FBReliabilityStatisticsCounter : NSObject

@property (readonly, nonatomic) int primaryId;
@property (readonly, nonatomic) int secondaryId;
@property (readonly, nonatomic) int value;

/* instance methods */
- (id)initWithPrimaryId:(int)id secondaryId:(int)id value:(int)value;
@end

#endif /* FBReliabilityStatisticsCounter_h */