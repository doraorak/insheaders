//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialCreationViewController_h
#define IGSundialCreationViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGActionableConfirmationToastPresenting-Protocol.h"
#include "IGBugReportingRageShakeInterceptionProtocol-Protocol.h"
#include "IGCreationNavigationPresentable-Protocol.h"
#include "IGCreationViewControllerNavigationDelegate-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGSundialAudioPillPresenterProtocol-Protocol.h"
#include "IGSundialCameraViewControllerDelegate-Protocol.h"
#include "IGSundialCreationViewControllerNavigationDelegate-Protocol.h"

@class IGSundialCreationConfiguration, IGUserSession, NSString;
@protocol UIViewController<IGCreationViewControllerType;

@interface IGSundialCreationViewController : UIViewController<IGActionableConfirmationToastPresenting, IGSundialCreationViewControllerNavigationDelegate, IGCreationViewControllerNavigationDelegate, IGBugReportingRageShakeInterceptionProtocol, IGGestureHandler, IGSundialAudioPillPresenterProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  UIViewController<IGCreationViewControllerType> *_cameraViewController;
  long long _entryPoint;
}

@property (weak, nonatomic) NSObject<IGSundialCameraViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSObject<IGCreationNavigationPresentable> *creationPresenter;
@property (readonly, nonatomic) IGSundialCreationConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session configuration:(id)configuration;
- (void)viewDidLoad;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)presentEffectGallery;
- (void)presentSavedEffectGallery;
- (void)presentAudioBrowser;
- (void)presentAudioEditorForAudioTrackClip:(id)clip;
- (void)presentGreenScreenTool;
- (void)showSuggestedPillWithModel:(id)model;
- (void)resetSuggestedPill;
- (void)creationViewController:(id)controller didSaveSundialDraft:(id)draft;
- (void)creationViewController:(id)controller didShareSundialPost:(id)post toDestination:(long long)destination;
- (void)creationViewController:(id)controller didShareSundialPostWithExitPoint:(long long)point destination:(long long)destination storySendTarget:(long long)target toDirectRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array completion:(id /* block */)completion;
- (void)creationViewController:(id)controller didEnterState:(long long)state;
- (void)creationViewController:(id)controller willShareToDirectRecipients:(id)recipients;
- (void)creationViewController:(id)controller didFinishWithExitPoint:(long long)point shouldAnimateTransition:(BOOL)transition isNavigationHandledByPresenter:(BOOL)presenter;
- (void)creationViewControllerWillDismiss:(id)dismiss;
- (void)creationViewController:(id)controller didDismissWithExitPoint:(long long)point destination:(long long)destination storySendTarget:(long long)target toDirectRecipients:(id)recipients image:(id)image storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids completion:(id /* block */)completion;
- (long long)preferredTabBarBehavior;
- (double)actionableConfirmationToastBottomPadding;
- (double)actionableConfirmationToastTopPadding;
- (BOOL)shouldPerformActionInsteadOfReportingForRageShakeInterval:(double)interval;
- (id /* block */)actionToPerformOnRageShake;
@end

#endif /* IGSundialCreationViewController_h */
