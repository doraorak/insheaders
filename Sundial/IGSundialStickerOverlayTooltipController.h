//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialStickerOverlayTooltipController_h
#define IGSundialStickerOverlayTooltipController_h
@import Foundation;

#include "IGStoryTappableOverlayTooltipContentView.h"
#include "NSObject-Protocol.h"

@class IGPanGestureRecognizer, IGTooltipView, IGUserSession, NSString;
@protocol IGSundialStickerOverlayTooltipControllerDelegate;

@interface IGSundialStickerOverlayTooltipController : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  IGStoryTappableOverlayTooltipContentView *_tappableOverlayTooltipContentView;
  IGPanGestureRecognizer *_tappableOverlayTooltipTouchGesture;
  IGTooltipView *_tappableOverlayTooltip;
}

@property (weak, nonatomic) NSObject<IGSundialStickerOverlayTooltipControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (void)displayTooltipForTapTarget:(id)target atPoint:(struct CGPoint { double x0; double x1; })point containerView:(id)view;
- (void)removeTappableOverlayTooltipAnimated:(BOOL)animated;
- (id)contentView;
- (void)storyTappableOverlayTooltipHandleTapActionForTapModel:(id)model atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)_didTouchTappableOverlayTooltip:(id)tooltip;
- (void)_configureTooltipForTapTarget:(id)target;
- (void)_positionAndDisplayTooltipAtPoint:(struct CGPoint { double x0; double x1; })point containerView:(id)view;
@end

#endif /* IGSundialStickerOverlayTooltipController_h */
