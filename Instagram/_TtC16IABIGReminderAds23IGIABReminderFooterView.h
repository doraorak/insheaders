//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC16IABIGReminderAds23IGIABReminderFooterView_h
#define _TtC16IABIGReminderAds23IGIABReminderFooterView_h
@import Foundation;

#include "IGBaseView.h"

@interface _TtC16IABIGReminderAds23IGIABReminderFooterView : IGBaseView { // (Swift)
  /* instance variables */
   profilePictureView;
   titleLabel;
   subtitleLabel;
   $__lazy_storage_$_textButton;
   reminderFooterDisplayModel;
   delegate;
}

/* instance methods */
- (void)layoutSubviews;
- (void)textButtonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC16IABIGReminderAds23IGIABReminderFooterView_h */