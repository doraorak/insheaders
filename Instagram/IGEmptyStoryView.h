//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEmptyStoryView_h
#define IGEmptyStoryView_h
@import Foundation;

#include "UIView.h"

@class FBKVOController, IGTextButton, IGUser, IGUserSession, UILabel;

@interface IGEmptyStoryView : UIView {
  /* instance variables */
  IGUserSession *_userSession;
  UILabel *_titleLabel;
  UILabel *_descriptionLabel;
  IGTextButton *_subscribeButton;
  FBKVOController *_kvoController;
  IGUser *_currentItemOwner;
}

/* instance methods */
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithUserSession:(id)session;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_didTapSubscribeToggle;
@end

#endif /* IGEmptyStoryView_h */