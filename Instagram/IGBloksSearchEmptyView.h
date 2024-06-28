//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksSearchEmptyView_h
#define IGBloksSearchEmptyView_h
@import Foundation;

#include "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface IGBloksSearchEmptyView : UIView {
  /* instance variables */
  UILabel *_placeholderLabel;
  UIActivityIndicatorView *_activityIndicator;
}

/* instance methods */
- (id)initWithPlaceholderText:(id)text showActivityIndicator:(BOOL)indicator;
- (void)layoutSubviews;
@end

#endif /* IGBloksSearchEmptyView_h */
