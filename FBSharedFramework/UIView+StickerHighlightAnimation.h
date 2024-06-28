//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UIView_StickerHighlightAnimation_h
#define UIView_StickerHighlightAnimation_h
@import Foundation;

@interface UIView (StickerHighlightAnimation)
/* instance methods */
- (void)animateStickerHighlighted:(BOOL)highlighted;
- (void)animateStickerBounce;
- (void)animateStickerBounceForAnchorPoint:(struct CGPoint { double x0; double x1; })point;
- (void)animateStickerEaseOutInBounceWithDelay:(double)delay scaleUpDuration:(double)duration scaleDownDuration:(double)duration concurrentAnimations:(id /* block */)animations completionBlock:(id /* block */)block;
- (void)animateStickerEaseOutInBounceWithDelay:(double)delay concurrentAnimations:(id /* block */)animations completionBlock:(id /* block */)block;
- (void)animateStickerEaseOutInBounceWithDelay:(double)delay completionBlock:(id /* block */)block;
- (void)animateStickerShake;
- (void)animateStickerShakeWithInitialRotation:(double)rotation shakeDegrees:(double)degrees duration:(double)duration rate:(double)rate repeatForever:(BOOL)forever;
- (void)_wiggleAnimationFromRadians:(double)radians toRadians:(double)radians autoreverses:(BOOL)autoreverses duration:(double)duration repeatCount:(long long)count repeatForever:(BOOL)forever completion:(id /* block */)completion;
- (void)startGlowing;
- (void)stopGlowing;
@end

#endif /* UIView_StickerHighlightAnimation_h */
