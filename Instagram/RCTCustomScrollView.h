//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTCustomScrollView_h
#define RCTCustomScrollView_h
@import Foundation;

#include "UIScrollView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol UIView<RCTCustomRefreshControlProtocol;

@interface RCTCustomScrollView : UIScrollView<UIGestureRecognizerDelegate>

@property (nonatomic) BOOL centerContent;
@property (retain, nonatomic) UIView<RCTCustomRefreshControlProtocol> *customRefreshControl;
@property (nonatomic) BOOL pinchGestureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)contentView;
- (BOOL)_shouldDisableScrollInteraction;
- (void)handleCustomPan:(id)pan;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible animated:(BOOL)animated;
- (BOOL)touchesShouldCancelInContentView:(id)view;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didMoveToWindow;
- (BOOL)shouldGroupAccessibilityChildren;
@end

#endif /* RCTCustomScrollView_h */
