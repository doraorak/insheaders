//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationPickerErrorCell_h
#define IGLocationPickerErrorCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "IGCustomAlertAction.h"
#include "IGTextButton.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface IGLocationPickerErrorCell : UITableViewCell {
  /* instance variables */
  UIImageView *_circleImageView;
  UILabel *_headlineView;
}

@property (retain, nonatomic) UILabel *textView;
@property (retain, nonatomic) IGTextButton *actionButton;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *headline;
@property (retain, nonatomic) IGCustomAlertAction *action;
@property (retain, nonatomic) UIImage *image;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)_handleActionClick:(id)click;
- (void)layoutSubviews;
@end

#endif /* IGLocationPickerErrorCell_h */
