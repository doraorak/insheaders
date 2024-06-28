//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxSplitViewController_h
#define IGDirectInboxSplitViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDirectInboxControllingSplitView-Protocol.h"
#include "IGDirectInboxViewController.h"
#include "IGDirectNewMessageCoordinator.h"
#include "UISplitViewControllerDelegate-Protocol.h"

@class IGDirectMainInboxAnalyticsLogger, IGNavigationController, IGUserSession, IGViewController, NSString, UISplitViewController;

@interface IGDirectInboxSplitViewController : IGViewController<UISplitViewControllerDelegate, IGDirectInboxControllingSplitView> {
  /* instance variables */
  IGUserSession *_userSession;
  unsigned long long _primaryNavDepthAtCollapse;
  IGNavigationController *_inboxNavController;
  IGNavigationController *_secondaryNavController;
  IGViewController *_threadViewController;
  IGDirectNewMessageCoordinator *_messageCoordinator;
}

@property (retain, nonatomic) IGDirectInboxViewController *inboxViewController;
@property (retain, nonatomic) UISplitViewController *splitViewController;
@property (retain, nonatomic) IGDirectMainInboxAnalyticsLogger *analyticsLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session inboxViewController:(id)controller analyticsModule:(id)module;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)showThreadView:(id)view;
- (long long)splitViewController:(id)controller topColumnForCollapsingToProposedTopColumn:(long long)column;
- (long long)splitViewController:(id)controller displayModeForExpandingToProposedDisplayMode:(long long)mode;
- (void)scrollToTopAnimated:(BOOL)animated;
- (void)pushToPendingInboxAnimated:(BOOL)animated;
- (void)pushThreadComposerWithEntryPoint:(unsigned long long)point;
- (void)presentNewMessageCameraWithEntryPoint:(long long)point customNavigationDelegate:(id)delegate sundialNavigationDelegate:(id)delegate;
- (id)animatableCellsForRecipients:(id)recipients;
- (void)willPresentFromStoryCreationAfterSendingMessage;
- (void)willPresentWithEntryPoint:(id)point;
- (void)clearOverlays;
- (void)setSelectedFilter:(long long)filter;
- (void)setSelectedFolder:(long long)folder;
- (void)storyCameraDidEndWithResetToFeed;
- (void)navigateToPublicTab;
- (void)pushDirectNoteWithNotePk:(id)pk promptId:(id)id isSelfNote:(BOOL)note;
- (void)pushReplySheetForPromptId:(id)id notePk:(id)pk;
- (void)tryShowQuickSnapPeek;
- (void)startWarmStartLogging;
- (void)scrollingChildWillBeginDragging;
- (void)threadViewControllerDidTapBack;
- (void)headerDidTapBack:(id)back;
- (void)headerDidTapMultiSelect:(id)select;
- (void)headerDidTapMessage:(id)message;
- (void)headerDidTapCancel:(id)cancel;
- (void)headerDidTapEdit:(id)edit;
- (void)headerDidTapSearch:(id)search;
- (void)headerDidTapStatus;
- (void)headerDidTapTools;
- (void)headerDidTapAdsEntryPoint;
- (void)headerDidTapManageFoldersEntryPoint;
- (void)headerDidLongPressTitle:(id)title;
- (void)headerDidTapManageChannelsDirectory;
- (void)headerDidTapAIChatsEntrypoint;
@end

#endif /* IGDirectInboxSplitViewController_h */