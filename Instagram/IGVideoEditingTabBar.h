//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoEditingTabBar_h
#define IGVideoEditingTabBar_h
@import Foundation;

#include "UIControl.h"

@class NSArray;
@protocol IGVideoEditingTabBarDelegate;

@interface IGVideoEditingTabBar : UIControl {
  /* instance variables */
  NSObject<IGVideoEditingTabBarDelegate> *_delegate;
  NSArray *_tabBarButtons;
  NSArray *_tabTitles;
  long long _selectedToolType;
}

/* instance methods */
- (id)initWithTabTitles:(id)titles delegate:(id)delegate;
- (void)layoutSubviews;
- (void)_didTapTabBarButton:(id)button;
@end

#endif /* IGVideoEditingTabBar_h */
