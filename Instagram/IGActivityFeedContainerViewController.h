//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityFeedContainerViewController_h
#define IGActivityFeedContainerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGActivityFeedContext.h"
#include "IGActivityFeedTabPageViewController.h"
#include "IGActivityNavigationHeaderView.h"
#include "IGNewsPresentationDelegate-Protocol.h"
#include "IGProFlowCompletionRefreshDelegate-Protocol.h"
#include "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"

@class IGCollapsibleNavigationCoordinator, IGUserSession, NSString, UIButton, UIView;

@interface IGActivityFeedContainerViewController : IGViewController<IGProFlowCompletionRefreshDelegate, IGStoryPostCaptureEditingViewControllerDelegate> {
  /* instance variables */
  IGActivityNavigationHeaderView *_navigationHeaderView;
  IGUserSession *_userSession;
  IGActivityFeedTabPageViewController *_tabViewController;
  UIButton *_eventsNavigationBarButton;
  UIButton *_tempUpdatesHubBarButton;
  IGActivityFeedContext *_context;
  IGCollapsibleNavigationCoordinator *_collapsibleNavigationCoordinator;
  BOOL _enableCollapsiblePills;
  UIView *_settingsUpsell;
  BOOL _collapsiblePillsSetupDone;
  NSObject<IGNewsPresentationDelegate> *_presentationDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session presentationDelegate:(id)delegate;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)headerDidTapBack:(id)back;
- (void)_eventsButtonDidTapped;
- (BOOL)prefersNavigationBarHidden;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)proConversionFlowDidConvertToPro:(id)pro;
- (void)prefetch;
- (void)didPopActivityFeed;
- (void)activityFeedTabPageViewController:(id)controller applyNavigationBarSeparatorAlpha:(double)alpha;
- (void)activityFeedTabPageViewController:(id)controller updateCollapsibleNavCoordinatorWithConnectedViewController:(id)controller;
- (void)storyPostCaptureEditingViewController:(id)controller didShareToStory:(long long)story andDirectRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids exitPoint:(long long)point completion:(id /* block */)completion;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)cancel;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendRollCallWithDirectRecipients:(id)recipients;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendPermanentMediaWithAsset:(id)asset entryPoint:(long long)point;
- (void)storyPostCaptureEditingViewController:(id)controller didTapConfirmNotesPogVideoWithComposition:(id)composition;
- (void)_setupNotificationSettingsUpsell;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_hiddenUpsellFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleUpsellFrame;
- (void)_removeNotificationSettingsUpsell;
- (void)_checkSettingsAndShowOrHideUpsell;
- (void)_openNotificationSettings;
- (void)_layoutSettingsUpsell;
- (BOOL)_hasPassedCooldownAfterDismissingSettingsUpsell;
- (BOOL)_impressionCountIsBelowLimitForUpsell;
- (unsigned long long)_fibonacci:(unsigned long long)_fibonacci;
- (void)_updateSettingsUpsellDismissTime;
- (long long)_numTimesSettingsUpsellDismissed;
- (id)impressionTimestamps;
- (void)_addUpsellImpression;
- (long long)_upsellIsWithin24HourImpressionLimit;
- (void)applicationWillEnterForegroundListener;
@end

#endif /* IGActivityFeedContainerViewController_h */