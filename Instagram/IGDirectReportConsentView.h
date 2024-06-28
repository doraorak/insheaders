//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectReportConsentView_h
#define IGDirectReportConsentView_h
@import Foundation;

#include "UIView.h"

@class IGBottomButtonsView, IGFixedFrameLayout, IGInsetLayout, IGStackLayout, UIImageView, UILabel;

@interface IGDirectReportConsentView : UIView {
  /* instance variables */
  IGStackLayout *_layout;
  UIImageView *_questionmarkImageView;
  UILabel *_headerLabel;
  UILabel *_paragraphLabel;
  IGInsetLayout *_paragraphInsetLayout;
  IGBottomButtonsView *_bottomButtonView;
  IGFixedFrameLayout *_bottomButtonHorizontalLayout;
  IGStackLayout *_bottomButtonVerticalLayout;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* IGDirectReportConsentView_h */