//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessNotificationView_h
#define FBPayBusinessNotificationView_h
@import Foundation;

#include "UIView.h"
#include "FBPayBusinessNotificationViewDelegate-Protocol.h"
#include "FBPayBusinessViewConfiguring-Protocol.h"
#include "FBPayMerchantServicesDynamicButton.h"

@class NSMutableArray, UIButton, UILabel, UIView;
@protocol FBPayBusinessContentConfiguring;

@interface FBPayBusinessNotificationView : UIView {
  /* instance variables */
  NSObject<FBPayBusinessViewConfiguring> *_viewConfig;
  NSObject<FBPayBusinessContentConfiguring> *_contentConfig;
  NSMutableArray *_constraints;
  UIView *_border;
  UIView *_icon;
  UIView *_iconBorder;
  UIButton *_exitButton;
  UILabel *_titleLabel;
  UILabel *_bodyLabel;
  FBPayMerchantServicesDynamicButton *_button;
}

@property (weak, nonatomic) NSObject<FBPayBusinessNotificationViewDelegate> *delegate;

/* instance methods */
- (id)initWithViewConfig:(id)config contentConfig:(id)config;
- (void)_exitButtonDidClick;
- (void)_actionButtonDidClick;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* FBPayBusinessNotificationView_h */