//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksFoATouchExtensionController_h
#define BKBloksFoATouchExtensionController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class BKContext, BKLispyExpression, BKModel, NSArray, NSString, UIGestureRecognizer;

@interface BKBloksFoATouchExtensionController : NSObject<UIGestureRecognizerDelegate> {
  /* instance variables */
  UIGestureRecognizer *_gestureRecognizer;
  NSArray *_scrollViews;
  BKModel *_model;
  BKModel *_extensionModel;
  BKContext *_context;
  BKLispyExpression *_onTouchDown;
  BKLispyExpression *_onTouchUp;
  BKLispyExpression *_onTouchCancelled;
  BOOL _shouldNotifyUpAndCancelled;
  BOOL _pendingUnmount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)didTap:(id)tap;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
@end

#endif /* BKBloksFoATouchExtensionController_h */
