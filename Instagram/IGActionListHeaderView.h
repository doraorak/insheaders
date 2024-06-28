//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActionListHeaderView_h
#define IGActionListHeaderView_h
@import Foundation;

#include "UIView.h"
#include "IGActionListAction.h"

@class IGTapButton, UILabel;
@protocol IGActionListHeaderViewDelegate;

@interface IGActionListHeaderView : UIView {
  /* instance variables */
  UILabel *_titleLabel;
  IGActionListAction *_rightAction;
  IGTapButton *_rightButton;
  IGActionListAction *_leftAction;
  IGTapButton *_leftButton;
}

@property (weak, nonatomic) NSObject<IGActionListHeaderViewDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_buttonTapped:(id)tapped;
@end

#endif /* IGActionListHeaderView_h */
