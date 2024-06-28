//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTabSwitcher_h
#define IGTabSwitcher_h
@import Foundation;

#include "UIView.h"

@class NSArray, NSMutableArray, UITapGestureRecognizer;
@protocol IGTabSwitcherDelegate;

@interface IGTabSwitcher : UIView {
  /* instance variables */
  NSArray *_tabTitles;
  NSMutableArray *_titleLabelViews;
  NSMutableArray *_lineViews;
  UITapGestureRecognizer *_gestureRecognizer;
}

@property (nonatomic) unsigned long long selectedIndex;
@property (weak, nonatomic) NSObject<IGTabSwitcherDelegate> *delegate;

/* instance methods */
- (id)initWithTabTitles:(id)titles preselectedTabIndex:(unsigned long long)index delegate:(id)delegate;
- (void)layoutSubviews;
- (void)_didTapOnSwithcer:(id)swithcer;
@end

#endif /* IGTabSwitcher_h */
