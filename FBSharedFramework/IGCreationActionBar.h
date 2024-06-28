//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreationActionBar_h
#define IGCreationActionBar_h
@import Foundation;

#include "UIToolbar.h"
#include "IGUserSession.h"

@class NSArray;

@interface IGCreationActionBar : UIToolbar {
  /* instance variables */
  double _intrinsicStaticContentWidth;
  double _spacerWidth;
  double _padding;
  BOOL _expandButtonsToFillContentWidth;
  BOOL _useLargestPossibleButtonWidth;
  IGUserSession *_userSession;
  NSArray *_buttonItems;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame userSession:(id)session;
- (void)setActionBarPadding:(double)padding;
- (void)setItems:(id)items animated:(BOOL)animated;
- (id)_staticWidthItems;
- (id)_sizedToFitItems;
- (id)_inflexibleSizedToFitItems;
- (id)_flexibleSizedBarButtonItems;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
@end

#endif /* IGCreationActionBar_h */
