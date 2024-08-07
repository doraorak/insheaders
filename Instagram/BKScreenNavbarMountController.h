//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKScreenNavbarMountController_h
#define BKScreenNavbarMountController_h
@import Foundation;

#include "BKScreenNavbarMountableView.h"

@class NSArray;

@interface BKScreenNavbarMountController : NSObject {
  /* instance variables */
  BKScreenNavbarMountableView *_title;
  NSArray *_leadingButtons;
  NSArray *_trailingButtons;
  BKScreenNavbarMountableView *_background;
}

/* instance methods */
- (void)dealloc;
- (id)title;
- (id)background;
- (void)unmount;
@end

#endif /* BKScreenNavbarMountController_h */
