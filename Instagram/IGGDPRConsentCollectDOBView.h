//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGDPRConsentCollectDOBView_h
#define IGGDPRConsentCollectDOBView_h
@import Foundation;

#include "UIView.h"
#include "IGGDPRConsentBottomButtonView.h"
#include "IGGDPRConsentDOBTextField.h"
#include "IGGDPRConsentMultiTextView.h"
#include "NSObject-Protocol.h"

@class IGCoreTextView, NSString, UIDatePicker, UILabel, UIScrollView;
@protocol IGGDPRConsentCollectDOBViewDelegate;

@interface IGGDPRConsentCollectDOBView : UIView<NSObject> {
  /* instance variables */
  UIScrollView *_contentView;
  UILabel *_upperSeparatorLineLabel;
  UILabel *_lowerSeparatorLineLabel;
  IGCoreTextView *_contentTitle;
  IGGDPRConsentMultiTextView *_contentTextView;
  IGGDPRConsentDOBTextField *_DOBtextField;
  UIDatePicker *_datePicker;
  IGGDPRConsentBottomButtonView *_submitButtonView;
  NSObject<IGGDPRConsentCollectDOBViewDelegate> *_collectDOBViewDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame defaultAge:(id)age maximumAgeRange:(id)range layoutSpec:(id)spec collectDOBViewDelegate:(id)delegate;
- (void)layoutSubviews;
- (id)currentDate;
- (id)selectedDate;
- (void)_didChangeDateOnDatePicker;
- (void)GDPRConsentBottomButtonViewDidTapPrimaryBottomButton:(BOOL)button;
- (void)GDPRConsentBottomButtonViewDidTapSecondaryBottomButton;
@end

#endif /* IGGDPRConsentCollectDOBView_h */
