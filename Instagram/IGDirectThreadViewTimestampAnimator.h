//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadViewTimestampAnimator_h
#define IGDirectThreadViewTimestampAnimator_h
@import Foundation;

#include "IGDirectThreadAnalyticsLogger.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UICollectionView, UIPanGestureRecognizer;
@protocol IGDirectThreadViewTimestampAnimatorDelegate;

@interface IGDirectThreadViewTimestampAnimator : NSObject<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGDirectThreadAnalyticsLogger *_analyticsLogger;
  BOOL _didLogSwipeToTimestampEvent;
  BOOL _shouldIgnorePan;
  UIPanGestureRecognizer *_panGesture;
}

@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) NSObject<IGDirectThreadViewTimestampAnimatorDelegate> *delegate;
@property (nonatomic) BOOL isDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCollectionView:(id)view analyticsLogger:(id)logger;
- (void)dealloc;
- (void)_didReceivePan:(id)pan;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
@end

#endif /* IGDirectThreadViewTimestampAnimator_h */
