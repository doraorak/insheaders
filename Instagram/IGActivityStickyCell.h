//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityStickyCell_h
#define IGActivityStickyCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGActivityStickyView.h"
#include "NSObject-Protocol.h"

@class IGCellSwipeActionManager, NSString, UIButton, UIColor;
@protocol IGActivityStickyCellDelegate;

@interface IGActivityStickyCell : UICollectionViewCell<NSObject> {
  /* instance variables */
  UIButton *_hideButton;
  IGCellSwipeActionManager *_cellSwipeActionManager;
  IGActivityStickyView *_stickView;
  UIColor *_unhighlightedBackgroundColor;
}

@property (weak, nonatomic) NSObject<IGActivityStickyCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)_didTapHideButton:(id)button;
- (BOOL)cellSwipeActionManagerShouldShowActions:(id)actions panGestureRecognizer:(id)recognizer;
- (void)cellSwipeActionManagerDidShowActions:(id)actions;
- (void)cellSwipeActionManagerDidHideActions:(id)actions;
@end

#endif /* IGActivityStickyCell_h */
