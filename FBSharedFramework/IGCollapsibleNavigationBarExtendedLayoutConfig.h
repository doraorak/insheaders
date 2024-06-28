//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCollapsibleNavigationBarExtendedLayoutConfig_h
#define IGCollapsibleNavigationBarExtendedLayoutConfig_h
@import Foundation;

@interface IGCollapsibleNavigationBarExtendedLayoutConfig : NSObject

@property (readonly, nonatomic) BOOL extendBelowStatusBar;
@property (readonly, nonatomic) BOOL enableLegibilityGradient;
@property (readonly, nonatomic) BOOL enableLegibilityBlurView;
@property (readonly, nonatomic) BOOL forceDarkModeLegibilityGradient;
@property (readonly, nonatomic) double legibilityGradientAlpha;
@property (readonly, nonatomic) double legibilityGradientExtraHeight;
@property (readonly, nonatomic) double legibilityBlurViewAmount;
@property (readonly, nonatomic) BOOL enableStaticLegibilityGradient;

/* instance methods */
- (id)initWithExtendBelowStatusBar:(BOOL)bar enableLegibilityGradient:(BOOL)gradient enableLegibilityBlurView:(BOOL)view forceDarkModeLegibilityGradient:(BOOL)gradient legibilityGradientAlpha:(double)alpha legibilityGradientExtraHeight:(double)height legibilityBlurViewAmount:(double)amount enableStaticLegibilityGradient:(BOOL)gradient;
@end

#endif /* IGCollapsibleNavigationBarExtendedLayoutConfig_h */
