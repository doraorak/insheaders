//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGExternalShareButton_h
#define IGExternalShareButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGExternalShareCircleView.h"

@class IGUserSession, UILabel, UIView;

@interface IGExternalShareButton : IGBouncyButton {
  /* instance variables */
  IGExternalShareCircleView *_circleView;
  UILabel *_label;
  BOOL _visualHScrollIsEnabled;
  BOOL _visualHScrollAvatarAddToStoryIsEnabled;
  BOOL _isGridViewEligible;
  IGUserSession *_userSession;
  BOOL _copyClicked;
  UIView *_centerLoggingView;
}

@property (nonatomic) long long style;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame shareOption:(long long)option userSession:(id)session isGridViewEligible:(BOOL)eligible visualHScrollIsEnabled:(BOOL)enabled visualHScrollAvatarAddToStoryIsEnabled:(BOOL)enabled;
- (void)setBackgroundColor:(id)color;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGExternalShareButton_h */
