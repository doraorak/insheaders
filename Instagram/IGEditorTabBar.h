//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEditorTabBar_h
#define IGEditorTabBar_h
@import Foundation;

#include "UIView.h"

@class NSArray;
@protocol IGEditorTabBarDelegate;

@interface IGEditorTabBar : UIView {
  /* instance variables */
  NSArray *_tabViews;
}

@property (nonatomic) unsigned long long selectedIndex;
@property (weak, nonatomic) NSObject<IGEditorTabBarDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isBottomBar:(BOOL)bar;
- (void)layoutSubviews;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

#endif /* IGEditorTabBar_h */