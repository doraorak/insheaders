//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOnboardingChecklistViewController_h
#define IGOnboardingChecklistViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDismissableViewController-Protocol.h"
#include "IGEmbeddedListViewControllerDelegate-Protocol.h"
#include "IGProOnboardingChecklistCompletedStepsController.h"
#include "IGProOnboardingChecklistLogger.h"
#include "IGProOnboardingChecklistViewModel.h"

@class IG4BLogger, IGBottomButtonsView, IGDSHeadlineView, IGEmbeddedListViewController, IGStoryConfettiAnimationController, IGUserSession, NSString, UIActivityIndicatorView;
@protocol IGOnboardingChecklistViewControllerDelegate;

@interface IGOnboardingChecklistViewController : IGViewController<IGDismissableViewController, IGEmbeddedListViewControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IG4BLogger *_logger;
  IGEmbeddedListViewController *_embeddedListViewController;
  UIActivityIndicatorView *_emptyView;
  IGStoryConfettiAnimationController *_confettiAnimationController;
  IGProOnboardingChecklistViewModel *_viewModel;
  IGProOnboardingChecklistLogger *_proOnboardingChecklistLogger;
  IGProOnboardingChecklistCompletedStepsController *_proOnboardingChecklistCompletedStepsController;
  IGBottomButtonsView *_bottomButtonView;
  BOOL _didCancelModal;
  BOOL _didStartFromRenewActivation;
  IGDSHeadlineView *_headlineView;
}

@property (weak, nonatomic) NSObject<IGOnboardingChecklistViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session logger:(id)logger viewModel:(id)model didStartFromRenewActivation:(BOOL)activation proOnboardingChecklistCompletedStepsController:(id)controller;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)embeddedListViewController:(id)controller sectionControllerForViewModel:(id)model;
- (void)embeddedListViewController:(id)controller scrollReachedEnd:(id)end;
- (void)embeddedListViewController:(id)controller willDisplayObject:(id)object atIndex:(long long)index;
- (void)proAccountOnboardingChecklistController:(id)controller didTapViewModel:(id)model;
- (void)onCancelModal;
- (void)didDismissViewController;
- (void)proOnboardingChecklistStepControllerDidUpdateShouldShowConfetti:(BOOL)confetti;
@end

#endif /* IGOnboardingChecklistViewController_h */
