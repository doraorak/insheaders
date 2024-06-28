//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCountdownFollowSheetViewController_h
#define IGStoryCountdownFollowSheetViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAPIStoryCountdownTappableData.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGStoryCountdownFollowSheetContentView.h"
#include "IGUser.h"
#include "IGUserSession.h"

@class NSString;
@protocol IGStoryCountdownFollowSheetViewControllerDelegate;

@interface IGStoryCountdownFollowSheetViewController : UIViewController<IGGestureHandler, IGAnalyticsModule> {
  /* instance variables */
  IGAPIStoryCountdownTappableData *_model;
  IGUserSession *_userSesion;
  IGUser *_countdownOwner;
  BOOL _isFromSponsoredMedia;
  IGStoryCountdownFollowSheetContentView *_contentView;
}

@property (weak, nonatomic) NSObject<IGStoryCountdownFollowSheetViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCountdownModel:(id)model countdownOwner:(id)owner isFromSponsoredMedia:(BOOL)media userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)countdownFollowSheetContentView:(id)view didTurnReminderOn:(BOOL)on;
- (void)countdownFollowSheetContentViewDidShareCountdown:(id)countdown;
- (void)countdownFollowSheetContentViewDidTapOwnerUsername:(id)username;
- (void)countdownFollowSheetContentViewDidTapSaveToCalendar:(id)calendar;
- (id)analyticsModule;
@end

#endif /* IGStoryCountdownFollowSheetViewController_h */
