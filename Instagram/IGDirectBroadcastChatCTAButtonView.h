//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBroadcastChatCTAButtonView_h
#define IGDirectBroadcastChatCTAButtonView_h
@import Foundation;

#include "UIView.h"

@class IGCoreTextView, IGDirectBroadcastChannelJoinFlowPerformanceLogger, IGDirectThreadTheme, IGStyledString, IGTapButton, NSString, UIActivityIndicatorView, UIView;
@protocol IGDirectBroadcastChatCTAButtonDelegate;

@interface IGDirectBroadcastChatCTAButtonView : UIView {
  /* instance variables */
  UIView *_topDividerView;
  IGTapButton *_primaryButton;
  IGTapButton *_secondaryButton;
  IGCoreTextView *_subtitleTextView;
  NSString *_primaryButtonText;
  NSString *_secondaryButtonText;
  IGStyledString *_subtitleText;
  IGDirectThreadTheme *_threadTheme;
  UIActivityIndicatorView *_primaryButtonSpinner;
  UIActivityIndicatorView *_secondaryButtonSpinner;
  unsigned long long _viewType;
  IGDirectBroadcastChannelJoinFlowPerformanceLogger *_performanceLogger;
  int _prismButtonDesignType;
  BOOL _isDesignTokensEnabled;
}

@property (weak, nonatomic) NSObject<IGDirectBroadcastChatCTAButtonDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame primaryButtonText:(id)text secondaryButtonText:(id)text subtitleText:(id)text threadTheme:(id)theme viewType:(unsigned long long)type userSession:(id)session;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapPrimaryButton;
- (void)_didTapSecondaryButton;
@end

#endif /* IGDirectBroadcastChatCTAButtonView_h */