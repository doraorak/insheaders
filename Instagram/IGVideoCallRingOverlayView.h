//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallRingOverlayView_h
#define IGVideoCallRingOverlayView_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGVideoCallProfileImageContainerView.h"

@class IGTapButton, IGTextButton, NSString, UIButton, UILabel, UIVisualEffectView;
@protocol IGVideoCallRingOverlayViewDelegate;

@interface IGVideoCallRingOverlayView : IGPassthroughView {
  /* instance variables */
  IGVideoCallProfileImageContainerView *_profileImageView;
  NSString *_threadName;
  NSString *_currentAppliedAREffect;
  BOOL _isGroupThread;
  BOOL _animated;
  BOOL _shouldAnimate;
  BOOL _isAudioCall;
  UILabel *_threadNameLabel;
  UILabel *_ringLabel;
  UILabel *_messageTitleLabel;
  UILabel *_messageDescriptionLabel;
  UILabel *_cancelButtonLabel;
  UILabel *_callAgainButtonLabel;
  IGTapButton *_cancelButton;
  IGTapButton *_callAgainButton;
  UIButton *_closeButton;
  long long _overlayMessageType;
  UIVisualEffectView *_blurOverlay;
  IGTextButton *_bugReportButton;
}

@property (weak, nonatomic) NSObject<IGVideoCallRingOverlayViewDelegate> *delegate;

/* instance methods */
- (id)initWithThreadName:(id)name userProfileImages:(id)images ringViewSpecFactory:(id)factory module:(id)module messageType:(long long)type isAudioCall:(BOOL)call shouldAnimate:(BOOL)animate;
- (void)layoutSubviews;
- (void)_cancelButtonTapped:(id)tapped;
- (void)_callAgainButtonTapped:(id)tapped;
- (void)_closeButtonTapped:(id)tapped;
- (void)_bugReportButtonTapped;
@end

#endif /* IGVideoCallRingOverlayView_h */
