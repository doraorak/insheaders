//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FLAnimatedImageView_h
#define FLAnimatedImageView_h
@import Foundation;

#include "UIImageView.h"
#include "FLAnimatedImage.h"

@class CADisplayLink, NSString, UIImage;

@interface FLAnimatedImageView : UIImageView

@property (retain, nonatomic) UIImage *currentFrame;
@property (nonatomic) unsigned long long currentFrameIndex;
@property (nonatomic) unsigned long long loopCountdown;
@property (nonatomic) double accumulator;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL shouldAnimate;
@property (nonatomic) BOOL needsDisplayWhenImageBecomesAvailable;
@property (nonatomic) BOOL isUserPaused;
@property (nonatomic) BOOL invalidateDisplayLinkWhenRemoveFromSuperviewOrWindow;
@property (retain, nonatomic) FLAnimatedImage *animatedImage;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (copy, nonatomic) NSString *runLoopMode;

/* class methods */
+ (id)defaultRunLoopMode;

/* instance methods */
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image highlightedImage:(id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)commonInit;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)willMoveToWindow:(id)window;
- (void)didMoveToWindow;
- (void)setAlpha:(double)alpha;
- (void)setHidden:(BOOL)hidden;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)image;
- (void)setImage:(id)image;
- (void)play;
- (void)pause;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)setHighlighted:(BOOL)highlighted;
- (void)updateShouldAnimate;
- (void)displayDidRefresh:(id)refresh;
- (void)displayLayer:(id)layer;
@end

#endif /* FLAnimatedImageView_h */