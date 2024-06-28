//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCameraARLinkCoordinator_h
#define IGStoryCameraARLinkCoordinator_h
@import Foundation;

#include "IGARLinkManager.h"
#include "IGCameraViewController.h"
#include "IGNametagLoggingContext.h"
#include "IGQRCodeBufferStreamProcessor.h"
#include "IGQRCodeURLDialogController.h"
#include "NSObject-Protocol.h"

@class FBTimer, IGUserSession, NSString, UIViewController;

@interface IGStoryCameraARLinkCoordinator : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGCameraViewController *_cameraViewController;
  UIViewController *_presentingViewController;
  id /* block */ _presentVCBlock;
  id /* block */ _didLaunchQRCodeURLBlock;
  id /* block */ _setTargetBlock;
  IGARLinkManager *_ARLinkManager;
  IGQRCodeBufferStreamProcessor *_qrCodeBufferProcessor;
  FBTimer *_ARLinkScanTimer;
  IGQRCodeURLDialogController *_qrCodeURLDialogController;
  IGNametagLoggingContext *_nametagLoggingContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session cameraViewController:(id)controller presentingViewController:(id)controller presentVCBlock:(id /* block */)vcblock didLaunchQRCodeURLBlock:(id /* block */)urlblock setTargetBlock:(id /* block */)block;
- (void)stop;
- (void)qrCodeBufferStreamProcessor:(id)processor didDetectUser:(id)user;
- (void)qrCodeBufferStreamProcessor:(id)processor didDetectEffectWithId:(id)id;
- (void)qrCodeBufferStreamProcessor:(id)processor didDetectInternalURL:(id)url;
- (void)qrCodeBufferStreamProcessor:(id)processor didDetectAllowedExternalURL:(id)url;
- (void)qrCodeBufferStreamProcessor:(id)processor didFailWithError:(id)error;
- (void)ARLinkDetectedCardViewControllerDidDismiss:(id)dismiss;
- (void)ARLinkDetectedCardViewControllerDidTapTryEffect:(id)effect withEffectID:(id)id recognizedUsername:(id)username deeplinkCode:(unsigned long long)code;
@end

#endif /* IGStoryCameraARLinkCoordinator_h */