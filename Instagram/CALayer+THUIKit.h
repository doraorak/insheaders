//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CALayer_THUIKit_h
#define CALayer_THUIKit_h
@import Foundation;

@interface CALayer (THUIKit)
/* instance methods */
- (void)th_applyContinuousCurveCornerRadius:(double)radius;
- (void)th_applyBorderWithColor:(id)color width:(double)width;
- (void)th_applyDefaultShadow;
- (void)th_applySmallShadow;
- (void)th_applyBigShadow;
- (void)th_applyRaisedShadowSettings;
- (void)th_removeShadow;
@end

#endif /* CALayer_THUIKit_h */
