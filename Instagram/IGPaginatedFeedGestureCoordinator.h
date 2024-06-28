//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPaginatedFeedGestureCoordinator_h
#define IGPaginatedFeedGestureCoordinator_h
@import Foundation;

#include "IGPaginatedFeedFocusCoordinator.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UICollectionView, UITapGestureRecognizer;
@protocol IGPaginatedFeedGestureCoordinatorDelegate;

@interface IGPaginatedFeedGestureCoordinator : NSObject<UIGestureRecognizerDelegate> {
  /* instance variables */
  UITapGestureRecognizer *_tapRecognizer;
  UICollectionView *_collectionView;
  IGPaginatedFeedFocusCoordinator *_focusCoordinator;
}

@property (weak, nonatomic) NSObject<IGPaginatedFeedGestureCoordinatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCollectionView:(id)view focusCoordinator:(id)coordinator;
- (void)tapGestureReceived:(id)received;
- (BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
@end

#endif /* IGPaginatedFeedGestureCoordinator_h */