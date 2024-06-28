//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFVideoExponentialMovingAverageEstimatorConfig_h
#define FNFVideoExponentialMovingAverageEstimatorConfig_h
@import Foundation;

@interface FNFVideoExponentialMovingAverageEstimatorConfig : NSObject

@property (readonly, nonatomic) double decayConstant;
@property (readonly, nonatomic) long long minBytesForValidSample;
@property (readonly, nonatomic) long long maxSampleValidityTimeInSeconds;

/* instance methods */
- (id)initWithDecayConstant:(double)constant minBytesForValidSample:(long long)sample maxSampleValidityTimeInSeconds:(long long)seconds;
@end

#endif /* FNFVideoExponentialMovingAverageEstimatorConfig_h */