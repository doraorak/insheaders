//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARLinkViewController_h
#define IGARLinkViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGARLinkCameraOverlayViewController.h"
#include "IGARLinkCameraViewController.h"
#include "IGARLinkCombinedProcessor.h"
#include "IGARLinkManager.h"
#include "IGNametagConfiguration.h"
#include "IGNametagLoggingContext.h"
#include "IGQRCodeURLDialogController.h"
#include "IGStoryGalleryViewControllerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGDirectionalPanGestureRecognizer, IGNavigationController, IGStoryDrawerViewController, IGStoryGalleryViewController, IGUser, IGUserSession, NSString, UIView;

@interface IGARLinkViewController : IGViewController<IGStoryGalleryViewControllerDelegate, UIGestureRecognizerDelegate> {
  /* instance variables */
  IGARLinkCameraViewController *_cameraViewController;
  IGStoryGalleryViewController *_storyGalleryViewController;
  IGUserSession *_userSession;
  IGUser *_currentProfileUser;
  IGNametagConfiguration *_cardConfig;
  NSString *_entryPoint;
  IGARLinkManager *_linkManager;
  IGARLinkCombinedProcessor *_processor;
  IGDirectionalPanGestureRecognizer *_galleryVerticalPanGesture;
  UIView *_contentView;
  UIView *_IGNametagView;
  IGStoryDrawerViewController *_galleryDrawerViewController;
  long long _statusBarStyle;
  long long _initialOverlayState;
  IGQRCodeURLDialogController *_qrCodeURLDialogController;
  IGNavigationController *_navigationController;
}

@property (readonly, nonatomic) IGARLinkCameraOverlayViewController *overlayViewController;
@property (readonly, nonatomic) IGNametagLoggingContext *loggingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session currentProfileUser:(id)user navigationController:(id)controller initialOverylayState:(long long)state entrypoint:(id)entrypoint;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)viewDidAppear:(BOOL)appear;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (void)_didPanVertically:(id)vertically;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)ARLinkCombinedProcessor:(id)processor didDetectUser:(id)user effect:(id)effect;
- (void)ARLinkCombinedProcessor:(id)processor didDetectEffectWithId:(id)id;
- (void)ARLinkCombinedProcessor:(id)processor didDetectInternalURL:(id)url;
- (void)ARLinkCombinedProcessor:(id)processor didDetectAllowedExternalURL:(id)url;
- (void)ARLinkCombinedProcessor:(id)processor didFailWithError:(id)error;
- (void)ARLinkCameraOverlayViewController:(id)controller didTapDismissButton:(id)button;
- (void)ARLinkCameraOverlayViewController:(id)controller didTapGalleryButton:(id)button;
- (void)ARLinkCameraOverlayViewController:(id)controller didTapTryEffectWithEffectID:(id)id recognizedUsername:(id)username deeplinkCode:(unsigned long long)code;
- (void)mediaPermissionAcquired:(id)acquired;
- (void)ARLinkCameraOverlayViewController:(id)controller shouldChangeStatsBarStyle:(long long)style;
- (void)storyGalleryViewController:(id)controller didSelectAssets:(id)assets;
- (void)storyGalleryViewController:(id)controller didSelectCameraCell:(id)cell;
- (void)storyGalleryViewController:(id)controller didSetMultiSelectEnabled:(BOOL)enabled animated:(BOOL)animated;
- (void)storyGalleryViewController:(id)controller didSelectDraft:(id)draft withDraftGallery:(id)gallery;
- (void)storyGalleryViewControllerDidUpdateGalleryPermissions:(id)permissions;
- (void)storyGalleryViewController:(id)controller didShareToStory:(long long)story exitPoint:(long long)point directRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array;
- (void)storyGalleryViewControllerDidChangeAlbum:(id)album;
- (void)storyGalleryViewController:(id)controller didSelectImage:(id)image;
- (void)ARLinkDetectedCardViewControllerDidDismiss:(id)dismiss;
- (void)ARLinkDetectedCardViewControllerDidTapTryEffect:(id)effect withEffectID:(id)id recognizedUsername:(id)username deeplinkCode:(unsigned long long)code;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
- (void)qrCodeURLDialogController:(id)controller willLaunchURL:(id)url completion:(id /* block */)completion;
@end

#endif /* IGARLinkViewController_h */
