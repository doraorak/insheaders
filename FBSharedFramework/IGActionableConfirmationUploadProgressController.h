//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActionableConfirmationUploadProgressController_h
#define IGActionableConfirmationUploadProgressController_h
@import Foundation;

#include "IGActionableConfirmationToastPersistentListViewController.h"
#include "IGActionableConfirmationToastPresenter.h"
#include "IGActionableConfirmationToastViewModel.h"
#include "IGActiveUserSessions.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGPartialModalSheetViewController.h"
#include "IGUser.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface IGActionableConfirmationUploadProgressController : NSObject<IGPartialModalSheetListener> {
  /* instance variables */
  IGUser *_user;
  IGActiveUserSessions *_activeUserSessions;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  IGActionableConfirmationToastPresenter *_toastPresenter;
  IGPartialModalSheetViewController *_partialModalSheetController;
  IGActionableConfirmationToastPersistentListViewController *_listViewController;
  NSMutableDictionary *_identifierToUploadsMap;
  IGActionableConfirmationToastViewModel *_currentlyQueuedMultiProgressViewModel;
  BOOL _toastNeedsUpdateForBottomSheet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUser:(id)user activeUserSessions:(id)sessions launcherSetProvider:(id)provider;
- (void)actionableConfirmationProgressToastHandler:(id)handler didUpdateProgress:(double)progress;
- (void)actionableConfirmationProgressToastHandler:(id)handler didUpdateTitle:(id)title;
- (void)actionableConfirmationProgressToastHandlerDidSucceed:(id)succeed title:(id)title customToastViewModel:(id)model presentationDuration:(double)duration tapActionBlock:(id /* block */)block presentedHandler:(id /* block */)handler dismissedHandler:(id /* block */)handler;
- (void)actionableConfirmationProgressToastHandlerDidSucceedQuietly:(id)quietly;
- (void)actionableConfirmationProgressToastHandlerDidFail:(id)fail title:(id)title subtitle:(id)subtitle retryHandler:(id /* block */)handler;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)actionableConfirmationToastPersistentListViewController:(id)controller didTapRightButtonForIdentifier:(id)identifier;
- (void)_updateMultiUploadPendingToastCount;
@end

#endif /* IGActionableConfirmationUploadProgressController_h */