//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UIViewController_IGModalSheetViewController_h
#define UIViewController_IGModalSheetViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGALLogContextGNVProvider-Protocol.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGDirectionalPanGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerContextTransitioning-Protocol.h"
#include "UIViewControllerInteractiveTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class CAShapeLayer, NSMutableSet, NSString, UIColor, UIPanGestureRecognizer, UIView;
@protocol IGModalSheetPresentationCoordinator, UIViewController<IGGestureHandler;

@interface UIViewController (IGModalSheetViewController)
/* instance methods */
- (id)modalSheetViewController;
@end

#endif /* UIViewController_IGModalSheetViewController_h */
