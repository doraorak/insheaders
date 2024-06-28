//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDSSectionHeaderView_h
#define IGDSSectionHeaderView_h
@import Foundation;

#include "UIView.h"
#include "IGDSSectionHeaderViewDelegate-Protocol.h"
#include "IGTextButton.h"

@class NSString, UILabel;

@interface IGDSSectionHeaderView : UIView {
  /* instance variables */
  UILabel *_textLabel;
  IGTextButton *_button;
}

@property (weak, nonatomic) NSObject<IGDSSectionHeaderViewDelegate> *delegate;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *buttonText;
@property (nonatomic) unsigned long long style;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)_didTapButton;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)isAccessibilityElement;
@end

#endif /* IGDSSectionHeaderView_h */
