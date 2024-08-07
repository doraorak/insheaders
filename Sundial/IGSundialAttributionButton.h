//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAttributionButton_h
#define IGSundialAttributionButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGSundialAttributionButtonModel.h"

@class NSString, UILabel;

@interface IGSundialAttributionButton : IGBouncyButton {
  /* instance variables */
  IGSundialAttributionButtonModel *_viewModel;
  UILabel *_label;
  BOOL _isEligibleForMaxWidthProfilePadding;
  BOOL _followButtonHiddenStatus;
}

@property (readonly, nonatomic) NSString *titleLabel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)configureWithViewModel:(id)model;
@end

#endif /* IGSundialAttributionButton_h */
