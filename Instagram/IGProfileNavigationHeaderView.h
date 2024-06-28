//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileNavigationHeaderView_h
#define IGProfileNavigationHeaderView_h
@import Foundation;

#include "IGCustomHeaderView.h"

@class IGStackLayout, UIView;

@interface IGProfileNavigationHeaderView : IGCustomHeaderView {
  /* instance variables */
  UIView *_sideTrayButton;
  UIView *_addButton;
  UIView *_additionalButton;
  UIView *_wonderwallButton;
  UIView *_directButton;
  UIView *_discoverAccountsButton;
  UIView *_backButton;
  IGStackLayout *_rightButtonsLayout;
}

@property (retain, nonatomic) UIView *titleView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame titleView:(id)view sideTrayButton:(id)button addButton:(id)button additionalButton:(id)button wonderwallButton:(id)button discoverAccountsButton:(id)button directButton:(id)button backButton:(id)button;
- (void)layoutSubviews;
@end

#endif /* IGProfileNavigationHeaderView_h */