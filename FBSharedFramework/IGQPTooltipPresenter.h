//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPTooltipPresenter_h
#define IGQPTooltipPresenter_h
@import Foundation;

#include "IGQPBasePresenter.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGQuickPromotionCoordinator.h"
#include "IGTooltipView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSString, UIGestureRecognizer, UIView;
@protocol IGQPTooltipDisplayDelegate;

@interface IGQPTooltipPresenter : IGQPBasePresenter<UIGestureRecognizerDelegate> {
  /* instance variables */
  IGQuickPromotionCoordinator *_quickPromotionCoordinator;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  BOOL _isHidingTooltip;
  IGTooltipView *_currentTooltipView;
  UIView *_viewWithGestures;
  UIGestureRecognizer *_dismissGestureRecognizer;
  NSDictionary *_tooltipInfoDict;
}

@property (weak, nonatomic) NSObject<IGQPTooltipDisplayDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQuickPromotionCoordinator:(id)coordinator analyticsLogger:(id)logger launcherSet:(id)set;
- (BOOL)presentForTriggerID:(id)id fromViewController:(id)controller;
- (id)bestPromotionForTriggerID:(id)id triggerContext:(id)context;
- (void)hideTooltip;
- (int)qpType;
- (id)qpSurfaceID;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
@end

#endif /* IGQPTooltipPresenter_h */
