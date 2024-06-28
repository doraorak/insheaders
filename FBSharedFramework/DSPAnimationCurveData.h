//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef DSPAnimationCurveData_h
#define DSPAnimationCurveData_h
@import Foundation;

@interface DSPAnimationCurveData : NSObject

@property (readonly, nonatomic) double p0;
@property (readonly, nonatomic) double p1;
@property (readonly, nonatomic) double p2;
@property (readonly, nonatomic) double p3;

/* instance methods */
- (id)initWithP0:(double)p0 p1:(double)p1 p2:(double)p2 p3:(double)p3;
@end

#endif /* DSPAnimationCurveData_h */