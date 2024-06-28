//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBackgroundFetchPredictiveTasksRequestProviderConfig_h
#define IGBackgroundFetchPredictiveTasksRequestProviderConfig_h
@import Foundation;

@class NSArray;

@interface IGBackgroundFetchPredictiveTasksRequestProviderConfig : NSObject

@property (readonly, nonatomic) NSArray *taskIntervals;
@property (readonly, nonatomic) BOOL shouldUseCasper;
@property (readonly, nonatomic) long long casperMinValue;
@property (readonly, nonatomic) BOOL shouldUseStoriesBTP;

/* instance methods */
- (id)initWithTaskIntervals:(id)intervals shouldUseCasper:(BOOL)casper casperMinValue:(long long)value shouldUseStoriesBTP:(BOOL)btp;
@end

#endif /* IGBackgroundFetchPredictiveTasksRequestProviderConfig_h */