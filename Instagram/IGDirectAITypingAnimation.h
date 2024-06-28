//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAITypingAnimation_h
#define IGDirectAITypingAnimation_h
@import Foundation;

@class CAKeyframeAnimation, CAShapeLayer;

@interface IGDirectAITypingAnimation : NSObject {
  /* instance variables */
  CAKeyframeAnimation *_translationAnimation;
  CAKeyframeAnimation *_shrinkAnimation;
  CAKeyframeAnimation *_growAnimation;
  CAKeyframeAnimation *_rotationAnimation;
}

@property (retain, nonatomic) CAShapeLayer *dotLayer;
@property (retain, nonatomic) CAShapeLayer *starBlinkLayer;
@property (readonly, nonatomic) BOOL isAnimating;

/* instance methods */
- (void)startAnimation;
- (void)stopAnimation;
@end

#endif /* IGDirectAITypingAnimation_h */
