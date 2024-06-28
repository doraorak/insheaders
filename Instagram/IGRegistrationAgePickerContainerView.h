//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationAgePickerContainerView_h
#define IGRegistrationAgePickerContainerView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGRegistrationAgePickerTextField.h"

@class IGCoreTextView, IGTextButton, NSString, UIDatePicker, UIImageView, UILabel, UIView;
@protocol IGRegistrationAgePickerContainerViewDelegate;

@interface IGRegistrationAgePickerContainerView : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  UIImageView *_imageView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGCoreTextView *_infoTextView;
  IGRegistrationAgePickerTextField *_textField;
  UILabel *_feedbackHintLabel;
  UILabel *_footerLabel;
  UIView *_separatorView;
  IGTextButton *_nextButton;
  UIDatePicker *_datePicker;
}

@property (weak, nonatomic) NSObject<IGRegistrationAgePickerContainerViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)updateWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)_didTapNextButton;
- (void)_didChangeDateOnDatePicker;
@end

#endif /* IGRegistrationAgePickerContainerView_h */