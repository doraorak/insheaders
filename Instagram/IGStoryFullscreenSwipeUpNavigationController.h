//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenSwipeUpNavigationController_h
#define IGStoryFullscreenSwipeUpNavigationController_h
@import Foundation;

#include "IGNavigationController.h"
#include "IGALLogContextGNVProvider-Protocol.h"
#include "IGGestureHandler-Protocol.h"

@class NSDate, NSString;
@protocol IGStoryFullscreenSwipeUpNavigationControllerDelegate, IGStoryFullscreenSwipeUpTimeSpentLogger;

@interface IGStoryFullscreenSwipeUpNavigationController : IGNavigationController<IGALLogContextGNVProvider, IGGestureHandler> {
  /* instance variables */
  NSString *_analyticsModule;
  NSObject<IGStoryFullscreenSwipeUpTimeSpentLogger> *_logger;
  NSDate *_firstAppearDate;
  NSObject<IGStoryFullscreenSwipeUpNavigationControllerDelegate> *_fullscreenSwipeUpNavigationControllerDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIntentTarget:(id)target timeSpentLogger:(id)logger userSession:(id)session analyticsModule:(id)module;
- (void)viewDidAppear:(BOOL)appear;
- (void)pushViewController:(id)controller animated:(BOOL)animated navExtras:(id)extras transitionFocusItem:(id)item;
- (void)dealloc;
- (void)_didTapCloseButton;
- (void)_dismiss;
- (id)analyticsModule;
- (BOOL)canRespondToGesture:(id)gesture;
- (BOOL)disableGNVNavigationEvent;
@end

#endif /* IGStoryFullscreenSwipeUpNavigationController_h */