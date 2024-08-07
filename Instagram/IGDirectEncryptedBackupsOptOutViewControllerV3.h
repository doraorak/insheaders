//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectEncryptedBackupsOptOutViewControllerV3_h
#define IGDirectEncryptedBackupsOptOutViewControllerV3_h
@import Foundation;

#include "IGViewController.h"
#include "IGScopedListener-Protocol.h"

@class IGBottomButtonsView, IGDSHeadlineView, IGUserSession, NSString;
@protocol IGDirectEncryptedBackupsOptOutViewControllerV3Delegate;

@interface IGDirectEncryptedBackupsOptOutViewControllerV3 : IGViewController<IGScopedListener> {
  /* instance variables */
  NSObject<IGDirectEncryptedBackupsOptOutViewControllerV3Delegate> *_delegate;
  IGUserSession *_userSession;
  IGDSHeadlineView *_headlineView;
  IGBottomButtonsView *_bottomButtonsView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)_didTapBackButton;
- (void)bottomSheetDidDismiss;
@end

#endif /* IGDirectEncryptedBackupsOptOutViewControllerV3_h */
