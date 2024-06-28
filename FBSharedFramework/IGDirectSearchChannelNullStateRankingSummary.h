//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSearchChannelNullStateRankingSummary_h
#define IGDirectSearchChannelNullStateRankingSummary_h
@import Foundation;

@class NSString;

@interface IGDirectSearchChannelNullStateRankingSummary : NSObject

@property (readonly, nonatomic) long long rankingResultCount;
@property (readonly, nonatomic) NSString *rankingRequestId;

/* instance methods */
- (id)initWithRankingResultCount:(long long)count rankingRequestId:(id)id;
@end

#endif /* IGDirectSearchChannelNullStateRankingSummary_h */