//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBShimmeringLayer_h
#define FBShimmeringLayer_h
@import Foundation;

#include "CALayer.h"
#include "CAAnimationDelegate-Protocol.h"
#include "CALayerDelegate-Protocol.h"
#include "FBShimmering-Protocol.h"
#include "FBShimmeringMaskLayer.h"

@class CALayer, NSString;

@interface FBShimmeringLayer : CALayer<CALayerDelegate, CAAnimationDelegate, FBShimmering> {
  /* instance variables */
  BOOL _shouldPreventForceLayout;
}

@property (retain, nonatomic) FBShimmeringMaskLayer *maskLayer;
@property (retain, nonatomic) CALayer *contentLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shimmering;
@property (nonatomic) double shimmeringPauseDuration;
@property (nonatomic) double shimmeringAnimationOpacity;
@property (nonatomic) double shimmeringOpacity;
@property (nonatomic) double shimmeringSpeed;
@property (nonatomic) double shimmerDuration;
@property (nonatomic) double shimmeringHighlightLength;
@property (@dynamic, nonatomic) double shimmeringHighlightWidth;
@property (nonatomic) long long shimmeringDirection;
@property (nonatomic) long long shimmeringGradientType;
@property (nonatomic) double shimmeringBeginFadeDuration;
@property (nonatomic) double shimmeringEndFadeDuration;
@property (readonly, nonatomic) double shimmeringFadeTime;
@property (nonatomic) double shimmeringBeginTime;

/* instance methods */
- (id)init;
- (void)setShimmeringWithoutForcedLayout:(BOOL)layout;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_clearMask;
- (void)_createMaskIfNeeded;
- (void)_updateMaskColors;
- (void)_updateMaskLayout;
- (void)_updateShimmering;
- (id)actionForLayer:(id)layer forKey:(id)key;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (BOOL)isShimmering;
@end

#endif /* FBShimmeringLayer_h */