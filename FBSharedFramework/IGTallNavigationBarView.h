//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTallNavigationBarView_h
#define IGTallNavigationBarView_h
@import Foundation;

#include "UIView.h"
#include "IGNavigationBar.h"
#include "IGNavigationBarBackgroundView.h"
#include "IGTallNavigationBarActionBarView.h"
#include "IGTallNavigationBarViewDisplayConfig.h"
#include "IGTallNavigationBarViewLayoutConfig.h"

@class UINavigationItem, UIView;

@interface IGTallNavigationBarView : UIView {
  /* instance variables */
  IGNavigationBar *_navigationBar;
  UINavigationItem *_navigationItem;
  UIView *_bottomBorderView;
  IGNavigationBarBackgroundView *_backgroundView;
  IGTallNavigationBarActionBarView *_actionBarView;
}

@property (readonly, nonatomic) IGTallNavigationBarViewLayoutConfig *layoutConfig;
@property (readonly, nonatomic) IGTallNavigationBarViewDisplayConfig *displayConfig;

/* instance methods */
- (id)initWithNavigationItem:(id)item layoutConfig:(id)config;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)setTitle:(id)title;
- (void)setTitleView:(id)view;
- (void)setRightBarButtonItems:(id)items;
- (void)setLeftBarButtonItem:(id)item;
@end

#endif /* IGTallNavigationBarView_h */
