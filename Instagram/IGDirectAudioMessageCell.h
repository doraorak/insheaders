//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAudioMessageCell_h
#define IGDirectAudioMessageCell_h
@import Foundation;

#include "IGDirectMessageCell.h"
#include "IGDirectAudioMessageBubbleView.h"
#include "IGDirectAudioMessageViewModel.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol IGDirectAudioMessageCellSeekGestureDelegate, IGDirectAudioMessageTimeAndSpeedDelegate;

@interface IGDirectAudioMessageCell : IGDirectMessageCell<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGDirectAudioMessageBubbleView *_audioMessageBubbleView;
  IGDirectAudioMessageViewModel *_audioMessageViewModel;
  NSObject<IGDirectAudioMessageCellSeekGestureDelegate> *_seekGestureDelegate;
  NSObject<IGDirectAudioMessageTimeAndSpeedDelegate> *_playbackSpeedDelegate;
}

@property (nonatomic) double progress;
@property (nonatomic) BOOL playing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory launcherSet:(id)set;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)audioMessageBubbleView:(id)view didBeginSeekGestureWithProgress:(double)progress;
- (void)audioMessageBubbleView:(id)view didUpdateSeekGestureWithProgress:(double)progress;
- (void)audioMessageBubbleView:(id)view didFinishSeekGestureWithProgress:(double)progress;
- (void)didTapPlaybackSpeed;
- (struct CGSize { double x0; double x1; })messageContentSize;
- (void)layoutGradientIfNecessaryWithGradientBubbleTracker:(id)tracker;
- (id)staticGradientView;
- (void)configureAccessibility;
- (BOOL)isPlaying;
@end

#endif /* IGDirectAudioMessageCell_h */