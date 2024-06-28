//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioBrowserPlayPauseButton_h
#define IGAudioBrowserPlayPauseButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGAudioPlayPauseButtonRing.h"

@class CAShapeLayer, UIColor;

@interface IGAudioBrowserPlayPauseButton : IGBouncyButton {
  /* instance variables */
  IGAudioPlayPauseButtonRing *_outlineRing;
  CAShapeLayer *_playIconLayer;
  CAShapeLayer *_pauseIconLayer;
}

@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) struct CGColor * shadowColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL playing;
@property (nonatomic) double playbackProgress;
@property (nonatomic) BOOL loading;

/* class methods */
+ (id)newWithDefaultDiameter;

/* instance methods */
- (id)initWithDiameter:(double)diameter;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)isLoading;
- (void)endLoadingAnimationInstantly;
- (BOOL)isPlaying;
- (id)accessibilityLabel;
@end

#endif /* IGAudioBrowserPlayPauseButton_h */