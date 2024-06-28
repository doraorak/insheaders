//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTrustedFriendsNotificationFooterView_h
#define IGTrustedFriendsNotificationFooterView_h
@import Foundation;

#include "UIView.h"
#include "IGTextButton.h"

@class UIImageView, UILabel, UIView;
@protocol IGTrustedFriendsNotificationFooterViewDelegate;

@interface IGTrustedFriendsNotificationFooterView : UIView {
  /* instance variables */
  UIView *_separatorView;
  UIView *_iconView;
  UIImageView *_iconImageView;
  UILabel *_titleLabel;
  UILabel *_descriptionLabel;
  IGTextButton *_viewButton;
}

@property (weak, nonatomic) NSObject<IGTrustedFriendsNotificationFooterViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_viewButtonTapped;
@end

#endif /* IGTrustedFriendsNotificationFooterView_h */