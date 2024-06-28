//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveRoomAutoAcceptCountdownView_h
#define IGLiveRoomAutoAcceptCountdownView_h
@import Foundation;

#include "UIView.h"

@class CAShapeLayer, IGTapButton, UILabel, UIView, UIVisualEffectView;
@protocol IGLiveRoomAutoAcceptCountdownViewDelegate;

@interface IGLiveRoomAutoAcceptCountdownView : UIView {
  /* instance variables */
  CAShapeLayer *_ringLayer;
  CAShapeLayer *_backgroundRingLayer;
  UIVisualEffectView *_backgroundView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  UIView *_userView;
  IGTapButton *_cancelButton;
  CAShapeLayer *_userViewMask;
}

@property (weak, nonatomic) NSObject<IGLiveRoomAutoAcceptCountdownViewDelegate> *delegate;

/* instance methods */
- (id)initWithBroadcastOwnerUsername:(id)username;
- (void)layoutSubviews;
- (void)_cancelButtonTapped:(id)tapped;
@end

#endif /* IGLiveRoomAutoAcceptCountdownView_h */
