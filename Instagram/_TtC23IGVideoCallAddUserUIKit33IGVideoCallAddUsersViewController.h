//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23IGVideoCallAddUserUIKit33IGVideoCallAddUsersViewController_h
#define _TtC23IGVideoCallAddUserUIKit33IGVideoCallAddUsersViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGDirectRecipientListViewControllerDelegate-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"

@interface _TtC23IGVideoCallAddUserUIKit33IGVideoCallAddUsersViewController : UIViewController<IGAnalyticsModule, IGGestureHandler, IGDirectRecipientListViewControllerDelegate, IGListAdapterDataSource> { // (Swift)
  /* instance variables */
   $__lazy_storage_$_addUsersView;
   userSession;
   videoCallSession;
   delegate;
   headerViewDataSource;
   $__lazy_storage_$_headerViewListAdapter;
   recipientListWrapper;
   directThreadService;
   recipientsManuallyMarkedAsAdded;
   groupExpansionSubscriptionToken;
   groupExpansionState;
}

/* instance methods */
- (id)initWithUserSession:(id)session videoCallSession:(id)session delegate:(id)delegate;
- (id)initWithCoder:(id)coder;
- (void)addUsersToVideoCall:(id)call;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)analyticsModule;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)selectRecipientViewController:(id)controller didOneTapSendToStoryTarget:(long long)target willShareToFbWithYourStoryButton:(BOOL)button;
- (void)selectRecipientViewController:(id)controller didOneTapSendToExternalService:(long long)service willShareToFbWithYourStoryButton:(BOOL)button;
- (void)selectRecipientViewController:(id)controller didOneTapSendToDirectRecipient:(id)recipient messageText:(id)text;
- (void)selectRecipientViewController:(id)controller didOneTapSendToBlastList:(id)list;
- (void)selectRecipientViewControllerDidTapAddToHighlight:(id)highlight;
- (void)selectRecipientViewControllerDidTapPromote:(id)promote;
- (void)selectRecipientViewController:(id)controller;
- (id)selectedRecipientsSoFarFromOneTapping:(id)tapping;
- (void)selectRecipientViewControllerDidTapFinishButton:(id)button storySendTarget:(long long)target sender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text fromOneTap:(BOOL)tap storyViewerViewModel:(id)model storyViewerLoggingContext:(id)context currentStoryItem:(id)item loggingProvider:(id)provider media:(id)media selectedPost:(id)post sharedAttachments:(id)attachments;
- (void)selectRecipientViewControllerDidTapFinishButtonWithDirectSendForSender:(id)sender directRecipients:(id)recipients externalServices:(id)services text:(id)text selectedPostPk:(id)pk sharedAttachments:(id)attachments;
- (void)selectRecipientViewControllerDidDismissRecipientList:(id)list recipientsFromSearch:(id)search bumpedRecipients:(id)recipients;
- (void)selectRecipientViewControllerDidTapBackButton:(id)button;
- (void)selectRecipientViewController:(id)controller didUpdateSelectedRecipients:(id)recipients;
- (void)selectRecipientViewController:(id)controller didTapRecipient:(id)recipient selected:(BOOL)selected;
- (void)selectRecipientViewController:(id)controller willToggleFullScreenOn:(BOOL)on;
- (void)selectRecipientViewController:(id)controller willShowPrivacyBanner:(BOOL)banner;
- (void)selectRecipientViewController:(id)controller didTapSendToGroupButtonWithSelectedRecipients:(id)recipients sender:(id)sender text:(id)text externalServices:(id)services storyViewerViewModel:(id)model storyViewerLoggingContext:(id)context currentStoryItem:(id)item loggingProvider:(id)provider media:(id)media selectedPost:(id)post;
- (void)selectRecipientViewControllerDidTapSave:(id)save;
- (void)didPostStory;
- (void)didTapFavoritesSubtitle;
- (id)initWithNibName:(id)name bundle:(id)bundle;
@end

#endif /* _TtC23IGVideoCallAddUserUIKit33IGVideoCallAddUsersViewController_h */