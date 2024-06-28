//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoConfiguration_h
#define IGVideoConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface IGVideoConfiguration : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) double fastVideoBitrateMultiplier;
@property (readonly, nonatomic) double minDownscaleForHQResize;
@property (readonly, nonatomic) double minWidth;
@property (readonly, nonatomic) double maxWidth;
@property (readonly, nonatomic) double maxWidthForHiResLandscape;
@property (readonly, nonatomic) double aspectThresholdForHiResLandscape;
@property (readonly, nonatomic) BOOL isEligibleForUpscaling;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUUID:(id)uuid fastVideoBitrateMultiplier:(double)multiplier minDownscaleForHQResize:(double)hqresize minWidth:(double)width maxWidth:(double)width maxWidthForHiResLandscape:(double)landscape aspectThresholdForHiResLandscape:(double)landscape isEligibleForUpscaling:(BOOL)upscaling;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGVideoConfiguration_h */
