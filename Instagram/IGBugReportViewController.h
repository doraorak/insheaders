//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBugReportViewController_h
#define IGBugReportViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGBugReport.h"
#include "IGBugReportEventLogger.h"
#include "IGBugReportProductArea.h"
#include "IGBugReportUploader.h"
#include "IGBugReportUserFlowLoggerV2.h"
#include "IGBugReportView.h"
#include "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"

@class IGKeyboardObserver, IGUserSession, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString;
@protocol IGBugReportCaptureDelegate, OS_dispatch_queue;

@interface IGBugReportViewController : IGViewController<IGKeyboardObserverFrameChangeDelegate, IGKeyboardObserverHideDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGBugReportCaptureDelegate> *_captureDelegate;
  IGBugReportUploader *_uploader;
  IGBugReportEventLogger *_logger;
  NSObject<OS_dispatch_queue> *_collectAttachmentsQueue;
  NSObject<OS_dispatch_queue> *_uploadBugReportQueue;
  IGKeyboardObserver *_keyboardObserver;
  IGBugReportView *_popoverView;
  long long _currentEditIndex;
  IGBugReport *_report;
  long long _bugReportType;
  NSString *_navChain;
  NSString *_endpoint;
  NSString *_source;
  NSMutableArray *_scaledImageAttachments;
  NSMutableArray *_orderedAttachments;
  NSMutableDictionary *_additionalMetadata;
  NSArray *_stringAttachments;
  IGBugReportProductArea *_productArea;
  BOOL _completeLogsEnabled;
  BOOL _attachmentsTrayEnabled;
  BOOL _shouldSendBugReportAfterKeyboardDismissed;
  IGBugReportUserFlowLoggerV2 *_userFlowLoggerV2;
  NSLayoutConstraint *_bottomLayoutConstraint;
  BOOL _photoLibraryEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session bugReportType:(long long)type navChain:(id)chain endpoint:(id)endpoint source:(id)source stringAttachments:(id)attachments metaData:(id)data attachmentsTrayEnabled:(BOOL)enabled photoLibraryEnabled:(BOOL)enabled completeLogsEnabled:(BOOL)enabled captureDelegate:(id)delegate userFlowLoggerV2:(id)v2;
- (void)viewDidLoad;
- (BOOL)prefersNavigationBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)_onSendButton;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)bugReportView:(id)view didSelectCaptureButton:(id)button;
- (void)bugReportView:(id)view didSelectPhotoLibraryButton:(id)button;
- (void)bugReportView:(id)view didSelectImageAtIndex:(long long)index;
- (void)bugReportViewDidTapSevereInfoIconButton:(id)button;
- (void)bugReportView:(id)view didFlipSevereSwitchTo:(BOOL)to;
- (void)bugReportView:(id)view didSelectProductArea:(id)area;
- (void)bugReportView:(id)view didDeleteImageAtIndex:(long long)index;
- (void)bugReportViewReportDescriptionChange:(id)change;
- (void)bugReportConfirmationViewController:(id)controller confirmedWithCompleteLogsEnabled:(BOOL)enabled;
- (void)bugReportConfirmationViewControllerCancelled:(id)cancelled;
- (BOOL)isAttachmentVideoAtIndex:(long long)index;
@end

#endif /* IGBugReportViewController_h */