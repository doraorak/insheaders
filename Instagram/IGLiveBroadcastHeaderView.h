//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcastHeaderView_h
#define IGLiveBroadcastHeaderView_h
@import Foundation;

#include "UIView.h"
#include "IGLiveBroadcastPromptView.h"
#include "IGLiveImageUsernameView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGLiveIndicatorView, IGLiveViewerCountView, IGTapButton, IGUser, NSArray, NSString, UITapGestureRecognizer;
@protocol IGLiveBroadcastHeaderViewDelegate;

@interface IGLiveBroadcastHeaderView : UIView<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGTapButton *_optionsButton;
  IGLiveViewerCountView *_viewerCountView;
  UITapGestureRecognizer *_unifiedTapRecognizer;
  IGUser *_avatarUser;
  BOOL _showDurationInLiveIndicator;
  BOOL _useUpdatedPromptsView;
  BOOL _showOptionViewInHeader;
  IGLiveImageUsernameView *_userView;
  IGTapButton *_closeButton;
  IGLiveIndicatorView *_liveIndicatorView;
  IGLiveBroadcastPromptView *_promptView;
  double _broadcastDuration;
  long long _indicatorMode;
}

@property (weak, nonatomic) NSObject<IGLiveBroadcastHeaderViewDelegate> *delegate;
@property (retain, @dynamic, nonatomic) IGUser *hostUser;
@property (copy, @dynamic, nonatomic) NSArray *guests;
@property (copy, @dynamic, nonatomic) NSString *title;
@property (copy, @dynamic, nonatomic) NSString *prompt;
@property (copy, @dynamic, nonatomic) NSArray *sponsorTags;
@property (copy, @dynamic, nonatomic) NSArray *partners;
@property (@dynamic, nonatomic) long long viewerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame userSession:(id)session useMarqueeViewForTitle:(BOOL)title;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)prepareForReuse;
- (void)_viewTapped:(id)tapped;
- (void)_userViewTapped:(id)tapped;
- (void)_viewerCountButtonTapped:(id)tapped;
- (void)_liveIndicatorTapped:(id)tapped;
- (void)_closeButtonTapped:(id)tapped;
- (void)_optionButtonTapped:(id)tapped;
@end

#endif /* IGLiveBroadcastHeaderView_h */
