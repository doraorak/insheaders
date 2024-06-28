//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBottomSwipeableScrollManager_h
#define IGDirectBottomSwipeableScrollManager_h
@import Foundation;

@class CHHapticEngine, IGKeyboardObserver;
@protocol IGDirectBottomSwipeableScrollManagerDelegate;

@interface IGDirectBottomSwipeableScrollManager : NSObject {
  /* instance variables */
  double _keyboardVisibleSwipeThreshold;
  double _keyboardHiddenSwipeThreshold;
  IGKeyboardObserver *_keyboardObserver;
  CHHapticEngine *_hapticEngine;
  double _distanceSwiped;
}

@property (readonly, nonatomic) double progress;
@property (weak, nonatomic) NSObject<IGDirectBottomSwipeableScrollManagerDelegate> *delegate;

/* instance methods */
- (id)initWithKeyboardVisibleSwipeThreshold:(double)threshold keyboardHiddenSwipeThreshold:(double)threshold keyboardObserver:(id)observer enableHapticFeedback:(BOOL)feedback;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
@end

#endif /* IGDirectBottomSwipeableScrollManager_h */
