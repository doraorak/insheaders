//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBandwidthEstimator_h
#define IGBandwidthEstimator_h
@import Foundation;

@protocol {unique_ptr<facebook::xplat::bandwidth_estimator::BandwidthEstimator, std::default_delete<facebook::xplat::bandwidth_estimator::BandwidthEstimator>>="__ptr_"{__compressed_pair<facebook::xplat::bandwidth_estimator::BandwidthEstimator *, std::default_delete<facebook::xplat::bandwidth_estimator::BandwidthEstimator>>="__value_"^{BandwidthEstimator}}};

@interface IGBandwidthEstimator : NSObject {
  /* instance variables */
  struct unique_ptr<facebook::xplat::bandwidth_estimator::BandwidthEstimator, std::default_delete<facebook::xplat::bandwidth_estimator::BandwidthEstimator>> { struct __compressed_pair<facebook::xplat::bandwidth_estimator::BandwidthEstimator *, std::default_delete<facebook::xplat::bandwidth_estimator::BandwidthEstimator>> { struct BandwidthEstimator *__value_; } __ptr_; } _bandwidthEstimator;
}

/* instance methods */
- (id)initWithUploadStrategy:(long long)strategy downloadStrategy:(long long)strategy;
- (void)addUploadSampleWithTimeMs:(long long)ms withBytes:(long long)bytes;
- (void)addDownloadSampleWithTimeMs:(long long)ms withBytes:(long long)bytes;
- (long long)uploadBandwidthEstimateKilobytesPerSecond;
- (long long)downloadBandwidthEstimateKilobytesPerSecond;
- (struct unique_ptr<facebook::xplat::bandwidth_estimator::EstimationStrategy, std::default_delete<facebook::xplat::bandwidth_estimator::EstimationStrategy>> { struct __compressed_pair<facebook::xplat::bandwidth_estimator::EstimationStrategy *, std::default_delete<facebook::xplat::bandwidth_estimator::EstimationStrategy>> { struct EstimationStrategy * x0; } x0; })_estimationStrategyForUploadStrategy:(long long)strategy;
- (struct unique_ptr<facebook::xplat::bandwidth_estimator::EstimationStrategy, std::default_delete<facebook::xplat::bandwidth_estimator::EstimationStrategy>> { struct __compressed_pair<facebook::xplat::bandwidth_estimator::EstimationStrategy *, std::default_delete<facebook::xplat::bandwidth_estimator::EstimationStrategy>> { struct EstimationStrategy * x0; } x0; })_estimationStrategyForDownloadStrategy:(long long)strategy;
@end

#endif /* IGBandwidthEstimator_h */
