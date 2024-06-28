//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPassthroughWindow_h
#define FBPassthroughWindow_h
@import Foundation;

#include "UIWindow.h"

@class NSHashTable;

@interface FBPassthroughWindow : UIWindow {
  /* instance variables */
  NSHashTable *_viewsToExclude;
}

/* instance methods */
- (void)setGestureRecognizers:(id)recognizers;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)setRootViewController:(id)controller;
@end

#endif /* FBPassthroughWindow_h */