//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAAnimationCurve_h
#define METAAnimationCurve_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableArray;

@interface METAAnimationCurve : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSArray *keyFrames;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)kMETAAnimationCurveConstantStep;

/* instance methods */
- (id)init;
- (id)initWithKeyFrames:(id)frames;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)addKeyFrameAtTime:(double)time value:(double)value withInterpolationMode:(long long)mode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* METAAnimationCurve_h */
