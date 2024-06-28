//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoTranscodeOptions_h
#define IGVideoTranscodeOptions_h
@import Foundation;

#include "FBValueObject.h"
#include "IGVideoDynamicConfigurationStrategy.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGVideoTranscodeOptions : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) double maxKeyFrameIntervalDuration;
@property (readonly, nonatomic) double maxKeyFrameIntervalDurationForHighFrameRate;
@property (readonly, nonatomic) double squarePerPixelBitrate;
@property (readonly, nonatomic) double sixteenByNinePerPixelBitrate;
@property (readonly, nonatomic) double nineBySixteenPerPixelBitrate;
@property (readonly, nonatomic) long long fixedBitrateBitsPerSecond;
@property (readonly, copy, nonatomic) NSString *preferredVideoCodec;
@property (readonly, nonatomic) long long audioCodec;
@property (readonly, nonatomic) long long audioSampleRate;
@property (readonly, nonatomic) BOOL serverPassthrough;
@property (readonly, copy, nonatomic) IGVideoDynamicConfigurationStrategy *dynamicConfigurationStrategy;
@property (readonly, nonatomic) BOOL writeFragmentedMP4;
@property (readonly, nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) long long maximumFrameRate;
@property (readonly, nonatomic) long long highFrameRateThreshold;
@property (readonly, nonatomic) double bitrateMultiplierForHighFrameRate;
@property (readonly, nonatomic) long long audioPerChannelBitrate;
@property (readonly, nonatomic) long long segmentDuration;
@property (readonly, nonatomic) BOOL preserveHDR;
@property (readonly, nonatomic) double maxPortraitWidth;
@property (readonly, nonatomic) double maxLandscapeWidth;
@property (readonly, nonatomic) BOOL enableUploadMosClientSideCalculation;
@property (readonly, nonatomic) BOOL enableUploadMosClientSideUploadHeader;
@property (readonly, nonatomic) BOOL shouldCalculateUnifiedUploadMosClientSideUseV2;
@property (readonly, nonatomic) double passthroughBitrateIncreaseAllowancePct;
@property (readonly, nonatomic) BOOL highQuality;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithMaxKeyFrameIntervalDuration:(double)duration maxKeyFrameIntervalDurationForHighFrameRate:(double)rate squarePerPixelBitrate:(double)bitrate sixteenByNinePerPixelBitrate:(double)bitrate nineBySixteenPerPixelBitrate:(double)bitrate fixedBitrateBitsPerSecond:(long long)second preferredVideoCodec:(id)codec audioCodec:(long long)codec audioSampleRate:(long long)rate serverPassthrough:(BOOL)passthrough dynamicConfigurationStrategy:(id)strategy writeFragmentedMP4:(BOOL)mp4 pixelFormat:(unsigned int)format maximumFrameRate:(long long)rate highFrameRateThreshold:(long long)threshold bitrateMultiplierForHighFrameRate:(double)rate audioPerChannelBitrate:(long long)bitrate segmentDuration:(long long)duration preserveHDR:(BOOL)hdr maxPortraitWidth:(double)width maxLandscapeWidth:(double)width enableUploadMosClientSideCalculation:(BOOL)calculation enableUploadMosClientSideUploadHeader:(BOOL)header shouldCalculateUnifiedUploadMosClientSideUseV2:(BOOL)v2 passthroughBitrateIncreaseAllowancePct:(double)pct highQuality:(BOOL)quality;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGVideoTranscodeOptions_h */