//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedUpcomingEventViewController_h
#define IGFeedUpcomingEventViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGFeedUpcomingEventController.h"
#include "IGFeedUpcomingEventViewControllerDelegate-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGIntentNavigating-Protocol.h"
#include "IGSponsoredInfoProviding-Protocol.h"
#include "IGUpcomingEventMediaReference.h"
#include "IGUpcomingEventReference.h"
#include "IGUpcomingEventSheetConfig.h"

@class IGMedia, IGUpcomingEvent, IGUserSession, NSString;

@interface IGFeedUpcomingEventViewController : IGViewController<IGGestureHandler> {
  /* instance variables */
  IGUpcomingEvent *_upcomingEvent;
  NSString *_sourceOfAction;
  NSObject<IGSponsoredInfoProviding> *_sponsoredInfoProvider;
  IGUpcomingEventMediaReference *_mediaReference;
  IGFeedUpcomingEventController *_upcomingEventController;
  IGMedia *_media;
  unsigned long long _mediaIndex;
  IGUpcomingEventReference *_upcomingEventReference;
  IGUpcomingEventSheetConfig *_upcomingEventSheetConfig;
  NSObject<IGIntentNavigating> *_containerIntentNavigating;
  BOOL _shouldForceHideOffsiteLinkCTA;
  BOOL _isInSegmentedTab;
}

@property (weak, nonatomic) NSObject<IGFeedUpcomingEventViewControllerDelegate> *delegate;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) BOOL shouldShowViewPostButton;
@property (readonly, nonatomic) BOOL shouldShowReshareStickerToStoriesButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session upcomingEvent:(id)event analyticsModule:(id)module sourceOfAction:(id)action sponsoredInfoProvider:(id)provider mediaReference:(id)reference shoppingSessionTracker:(id)tracker media:(id)media mediaIndex:(unsigned long long)index upcomingEventReference:(id)reference upcomingEventSheetConfig:(id)config containerIntentNavigating:(id)navigating shouldForceHideOffsiteLinkCTA:(BOOL)cta;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)upcomingEventControllerDidTapViewPostButton:(id)button;
- (void)presentReminderToastWithText:(id)text;
- (void)upcomingEventControllerDidTapOpenSettings;
- (void)upcomingEventControllerDidTapOpenLiveNotificationSettings;
- (BOOL)upcomingEventController:(id)controller didHandleEditButtonTapWithUpcomingEvent:(id)event;
- (void)upcomingEventControllerDidShareSticker:(id)sticker;
- (void)upcomingEventController:(id)controller didUpdateSetReminder:(BOOL)reminder forUpcomingEvent:(id)event;
- (void)upcomingEventControllerDidTapViewShop:(id)shop;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGFeedUpcomingEventViewController_h */
