//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGConsentDialogContainerView_h
#define IGConsentDialogContainerView_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface IGConsentDialogContainerView : UIView {
  /* instance variables */
  UIView *_contentView;
  double _widthMargin;
  double _minHeight;
  double _maxHeight;
  UIView *_dialogView;
}

/* instance methods */
- (id)initWithCornerRadius:(double)radius widthMargin:(double)margin minHeight:(double)height maxHeight:(double)height contentView:(id)view;
- (void)layoutSubviews;
@end

#endif /* IGConsentDialogContainerView_h */
