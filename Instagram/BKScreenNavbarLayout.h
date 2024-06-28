//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKScreenNavbarLayout_h
#define BKScreenNavbarLayout_h
@import Foundation;

@class BKLayoutController, NSArray;

@interface BKScreenNavbarLayout : NSObject {
  /* instance variables */
  NSArray *_leadingButtons;
  NSArray *_trailingButtons;
}

@property (readonly, nonatomic) BKLayoutController *title;
@property (readonly, nonatomic) BKLayoutController *background;

/* instance methods */
@end

#endif /* BKScreenNavbarLayout_h */