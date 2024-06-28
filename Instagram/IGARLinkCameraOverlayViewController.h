//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARLinkCameraOverlayViewController_h
#define IGARLinkCameraOverlayViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGARLinkCameraViewController.h"
#include "IGARLinkDetectedCardViewController.h"
#include "IGARLinkManager.h"
#include "IGCameraViewControllerSampleBufferObserver-Protocol.h"
#include "IGNametagConfiguration.h"
#include "IGNametagLoggingContext.h"
#include "IGNametagScanViewController.h"
#include "IGNametagViewController.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGQRCodeBufferStreamProcessor.h"
#include "IGQRCodeURLDialogController.h"
#include "IGStoryCameraPermissionViewController.h"

@class IGNavigationController, IGUser, IGUserSession, NSString, UIView, UIViewController;
@protocol IGARLinkCameraOverlayViewControllerDelegate;

@interface IGARLinkCameraOverlayViewController : UIViewController<IGPartialModalSheetListener, IGCameraViewControllerSampleBufferObserver> {
  /* instance variables */
  IGStoryCameraPermissionViewController *_cameraPermissionViewController;
  IGNametagViewController *_nametagViewController;
  IGARLinkDetectedCardViewController *_detectedCardViewController;
  IGNametagScanViewController *_scanViewController;
  UIView *_IGNametagView;
  IGARLinkManager *_linkManager;
  IGQRCodeBufferStreamProcessor *_qrCodeStreamProcessor;
  IGUserSession *_userSession;
  IGUser *_currentProfileUser;
  IGNametagConfiguration *_cardConfig;
  long long _overlayState;
  UIViewController *_cardPresentViewController;
  BOOL _mediaPermission;
  IGQRCodeURLDialogController *_qrCodeURLDialogController;
  IGNavigationController *_navigationController;
  BOOL _isSelfProfile;
}

@property (weak, nonatomic) NSObject<IGARLinkCameraOverlayViewControllerDelegate> *actionDelegate;
@property (weak, nonatomic) IGARLinkCameraViewController *cameraViewController;
@property (retain, nonatomic) IGNametagLoggingContext *loggingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCardConfiguration:(id)configuration linkManager:(id)manager userSession:(id)session currentProfileUser:(id)user navigationController:(id)controller isEntryPointEligibleForDownload:(BOOL)download;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)permissionViewControllerDidAuthorizeVideo:(id)video;
- (void)permissionViewControllerDidAuthorizeAudio:(id)audio;
- (void)permissionViewControllerDidAuthorizeAudioAndVideo:(id)video;
- (void)permissionVideoControlleDidDetermineAudioAndVideoAuthorization:(id)authorization;
- (void)permissionViewControllerDidTapEnableVideo:(id)video;
- (void)permissionViewControllerDidTapEnableAudio:(id)audio;
- (void)permissionViewControllerDidCancel:(id)cancel;
- (void)permissionViewControllerWillOpenSettings:(id)settings;
- (void)_didTapDismissPermissionView;
- (void)ARLinkDetectedCardViewControllerDidDismiss:(id)dismiss;
- (void)ARLinkDetectedCardViewControllerDidTapTryEffect:(id)effect withEffectID:(id)id recognizedUsername:(id)username deeplinkCode:(unsigned long long)code;
- (void)didTapCloseButton:(id)button;
- (void)didTapCameraButton:(id)button;
- (void)didTapShareButton:(id)button;
- (void)didTapDownloadButton:(id)button;
- (void)shouldUpdateStatusBarStyle:(long long)style;
- (void)didTapSaveImageWithBackground:(BOOL)background;
- (void)didTapDownloadAsPDFWithBackground:(BOOL)background;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)cameraViewController:(id)controller willProcessVideoBuffer:(struct opaqueCMSampleBuffer *)buffer metadata:(id)metadata;
- (void)cameraViewController:(id)controller didReceiveProcessedVideoBuffer:(struct opaqueCMSampleBuffer *)buffer metadata:(id)metadata;
- (void)cameraViewController:(id)controller didReceiveAudioBuffer:(struct opaqueCMSampleBuffer *)buffer withVolumeLevel:(float)level;
- (void)scanViewController:(id)controller didTapCancelButton:(id)button;
- (void)scanViewController:(id)controller didTapGalleryButton:(id)button;
- (void)qrCodeBufferStreamProcessor:(id)processor didDetectUser:(id)user;
- (void)qrCodeBufferStreamProcessor:(id)processor didDetectEffectWithId:(id)id;
- (void)qrCodeBufferStreamProcessor:(id)processor didDetectInternalURL:(id)url;
- (void)qrCodeBufferStreamProcessor:(id)processor didDetectAllowedExternalURL:(id)url;
- (void)qrCodeBufferStreamProcessor:(id)processor didFailWithError:(id)error;
- (void)qrCodeURLDialogController:(id)controller willLaunchURL:(id)url completion:(id /* block */)completion;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
- (void)_didTakeScreenshot;
@end

#endif /* IGARLinkCameraOverlayViewController_h */
