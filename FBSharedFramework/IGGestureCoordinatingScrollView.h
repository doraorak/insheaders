//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGestureCoordinatingScrollView_h
#define IGGestureCoordinatingScrollView_h
@import Foundation;

#include "UIScrollView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@protocol IGGestureCoordinatingScrollViewTouchCancellationDelegate;

@interface IGGestureCoordinatingScrollView : UIScrollView {
  /* instance variables */
  NSObject<IGGestureCoordinatingScrollViewTouchCancellationDelegate> *_touchCancellationDelegate;
}

@property (weak, nonatomic) NSObject<UIGestureRecognizerDelegate> *gestureDelegate;

/* instance methods */
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceivePress:(id)press;
- (BOOL)touchesShouldCancelInContentView:(id)view;
@end

#endif /* IGGestureCoordinatingScrollView_h */
