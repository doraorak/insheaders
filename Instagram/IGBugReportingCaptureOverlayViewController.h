//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBugReportingCaptureOverlayViewController_h
#define IGBugReportingCaptureOverlayViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGBugReportingCaptureStatusBarWindow.h"
#include "NSObject-Protocol.h"

@class NSString, UIButton;
@protocol IGBugReportingCaptureOverlayDelegate;

@interface IGBugReportingCaptureOverlayViewController : UIViewController<NSObject> {
  /* instance variables */
  UIButton *_captureButton;
  IGBugReportingCaptureStatusBarWindow *_statusBarWindow;
}

@property (weak, nonatomic) NSObject<IGBugReportingCaptureOverlayDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onBugReportCaptureStatusBarTap;
- (void)_actionButtonAction:(id)action;
@end

#endif /* IGBugReportingCaptureOverlayViewController_h */