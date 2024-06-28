//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBProgressAnimator_h
#define FBProgressAnimator_h
@import Foundation;

@interface FBProgressAnimator : NSObject {
  /* instance variables */
  id /* block */ _updateBlock;
  struct CGPoint { double x; double y; } _c1;
  struct CGPoint { double x; double y; } _c2;
  double _startTime;
  double _previousAnimatedProgressDelta;
}

@property (readonly, nonatomic) double currentProgress;

/* instance methods */
- (id)initWithUpdateBlock:(id /* block */)block;
- (void)setInitialProgress:(double)progress;
- (void)animateToProgress:(double)progress completion:(id /* block */)completion;
- (void)reset;
@end

#endif /* FBProgressAnimator_h */