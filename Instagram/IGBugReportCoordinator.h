//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBugReportCoordinator_h
#define IGBugReportCoordinator_h
@import Foundation;

#include "IGBugReportPresenter-Protocol.h"
#include "IGBugReportPresenterDelegate-Protocol.h"
#include "IGBugReportUserFlowLoggerV2.h"
#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class IGNavigationController, IGUserSession, NSArray, NSData, NSDictionary, NSString, UIImage, UIWindow;

@interface IGBugReportCoordinator : NSObject<UIImagePickerControllerDelegate, UINavigationControllerDelegate, IGBugReportPresenter> {
  /* instance variables */
  UIWindow *_overlayWindow;
  IGNavigationController *_bugReportNavController;
  IGUserSession *_userSession;
  long long _bugReportType;
  NSString *_bugReportNavChain;
  NSString *_bugReportEndpoint;
  NSString *_source;
  NSArray *_additionalAttachments;
  NSDictionary *_metaData;
  UIImage *_initialScreenshot;
  NSData *_initialScreenshotWindowData;
  IGBugReportUserFlowLoggerV2 *_userFlowLoggerV2;
}

@property (weak, nonatomic) NSObject<IGBugReportPresenterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)presentBugReportFlowWithType:(long long)type userSession:(id)session source:(id)source additionalAttachments:(id)attachments metaData:(id)data overrideNavChain:(id)chain overrideEndpoint:(id)endpoint;
- (void)dismissBugReportViewController:(id)controller didSendReport:(BOOL)report;
- (void)hideAndShowEditorForImage:(id)image;
- (void)hideAndShowCaptureForBugReportViewController:(id)controller;
- (void)showPhotoLibraryForBugReportViewController:(id)controller;
- (void)hideAndShowVideoURL:(id)url;
- (void)onBugReportCaptureImage:(id)image;
- (void)onBugReportCaptureCancel:(id)cancel;
- (void)bugReportAnnotationViewController:(id)controller didDismissWithChange:(BOOL)change image:(id)image;
- (void)bugReportConfirmationViewController:(id)controller confirmedWithCompleteLogsEnabled:(BOOL)enabled;
- (void)bugReportConfirmationViewControllerCancelled:(id)cancelled;
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
@end

#endif /* IGBugReportCoordinator_h */