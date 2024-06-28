//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFVideoObservedThroughputInfo_h
#define FNFVideoObservedThroughputInfo_h
@import Foundation;

@interface FNFVideoObservedThroughputInfo : NSObject

@property (readonly, nonatomic) long long numberOfBytesDownloaded;
@property (readonly, nonatomic) double timeToDownloadInSeconds;
@property (readonly, nonatomic) double numberOfCompetingRequests;
@property (readonly, nonatomic) double networkQueueTimeInSeconds;
@property (readonly, nonatomic) double ttfbInSeconds;

/* instance methods */
- (id)initWithNumberOfBytesDownloaded:(long long)downloaded timeToDownloadInSeconds:(double)seconds numberOfCompetingRequests:(double)requests networkQueueTimeInSeconds:(double)seconds ttfbInSeconds:(double)seconds;
- (id)throughputInfoWithNetworkQueueTime:(double)time;
@end

#endif /* FNFVideoObservedThroughputInfo_h */