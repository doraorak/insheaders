//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAudioMessageBubbleView_h
#define IGDirectAudioMessageBubbleView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectAudioMessageBubbleViewModel.h"
#include "IGDirectAudioMessageTimeAndSpeedView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGAudioProgressView, IGDirectGradientView, IGDirectMessageBubbleView, NSString, UIImage, UIPanGestureRecognizer;
@protocol IGDirectAudioMessageBubbleViewSeekGestureDelegate, IGDirectAudioMessageTimeAndSpeedDelegate;

@interface IGDirectAudioMessageBubbleView : UIView<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGAudioProgressView *_progressView;
  UIPanGestureRecognizer *_panGesture;
  UIImage *_playImage;
  UIImage *_pauseImage;
  IGDirectAudioMessageTimeAndSpeedView *_timeAndSpeedView;
  float _playbackSpeed;
  IGDirectAudioMessageBubbleViewModel *_viewModel;
  long long _messageDuration;
  NSObject<IGDirectAudioMessageBubbleViewSeekGestureDelegate> *_seekGestureDelegate;
  NSObject<IGDirectAudioMessageTimeAndSpeedDelegate> *_playbackSpeedDelegate;
  IGDirectGradientView *_playbackActionGradientImageView;
}

@property (nonatomic) double progress;
@property (nonatomic) BOOL playing;
@property (readonly, nonatomic) IGDirectMessageBubbleView *bubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)prepareForReuse;
- (void)setPlaybackSpeed:(float)speed;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (void)_didPanProgressView:(id)view;
- (void)didTapPlaybackSpeed;
- (void)_updateImage;
- (BOOL)isPlaying;
@end

#endif /* IGDirectAudioMessageBubbleView_h */
