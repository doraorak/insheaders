//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPanoramaNuxController_h
#define IGPanoramaNuxController_h
@import Foundation;

#include "FBCancelable-Protocol.h"
#include "IGNuxView.h"
#include "NSObject-Protocol.h"

@class IGMainAppSurfaceIntent, IGNotificationPresenter, IGTooltipView, IGUserSession, NSDate, NSString, UIViewController;

@interface IGPanoramaNuxController : NSObject<NSObject> {
  /* instance variables */
  IGNotificationPresenter *_notificationPresenter;
  IGNuxView *_nuxView;
  IGTooltipView *_tooltip;
  long long _ttl;
  long long _triggerTime;
  long long _impressionLimit;
  NSObject<FBCancelable> *_scheduledJob;
  IGMainAppSurfaceIntent *_currentTabBarSurface;
  UIViewController *_currentViewController;
  NSDate *_timeSwitchedToCurrentTab;
  long long _variant;
  BOOL _isCreateUnified;
  long long _currentTooltipType;
  IGUserSession *_userSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)didTapCloseButton:(id)button;
@end

#endif /* IGPanoramaNuxController_h */