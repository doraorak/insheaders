//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNotificationSystemSettingsMegaphoneCell_h
#define IGNotificationSystemSettingsMegaphoneCell_h
@import Foundation;

#include "IGTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;
@protocol IGNotificationSystemSettingsMegaphoneDelegate;

@interface IGNotificationSystemSettingsMegaphoneCell : IGTableViewCell {
  /* instance variables */
  UIImageView *_iconImage;
  UIView *_roundedImageView;
  UILabel *_messageView;
  UIButton *_button;
}

@property (weak, nonatomic) NSObject<IGNotificationSystemSettingsMegaphoneDelegate> *delegate;

/* class methods */
+ (double)_textWidthForSize:(struct CGSize { double x0; double x1; })size;
+ (double)preferedHeightForSize:(struct CGSize { double x0; double x1; })size;
+ (id)_createMessageView;
+ (id)_localizedTurnOnNotifMessage;
+ (id)_localizedButtonLabel;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)_onButtonPress;
@end

#endif /* IGNotificationSystemSettingsMegaphoneCell_h */
