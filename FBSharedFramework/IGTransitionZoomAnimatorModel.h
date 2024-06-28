//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTransitionZoomAnimatorModel_h
#define IGTransitionZoomAnimatorModel_h
@import Foundation;

#include "IGIntentTransitionFocusItem-Protocol.h"
#include "IGTransitionZoomFromCapable-Protocol.h"
#include "IGTransitionZoomToCapable-Protocol.h"

@class NSArray, UIViewController;

@interface IGTransitionZoomAnimatorModel : NSObject {
  /* instance variables */
  BOOL _isForward;
  BOOL _shouldAnimateNavigationBar;
  NSObject<IGIntentTransitionFocusItem> *_focusItem;
  NSObject<IGIntentTransitionFocusItem> *_focusItemOverride;
  UIViewController *_toViewController;
  UIViewController *_fromViewController;
  UIViewController *_frontViewController;
  UIViewController *_backViewController;
  NSObject<IGTransitionZoomToCapable> *_frontZoomable;
  NSObject<IGTransitionZoomFromCapable> *_backZoomable;
}

@property (readonly, nonatomic) NSArray *magicMoveSubviews;

/* instance methods */
- (id)initWithIsForward:(BOOL)forward focusItem:(id)item focusItemOverride:(id)override toViewController:(id)controller fromViewController:(id)controller frontViewController:(id)controller backViewController:(id)controller frontZoomable:(id)zoomable backZoomable:(id)zoomable magicMoveSubviews:(id)subviews shouldAnimateNavigationBar:(BOOL)bar;
@end

#endif /* IGTransitionZoomAnimatorModel_h */