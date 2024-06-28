//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentNotesActionHandler_h
#define IGContentNotesActionHandler_h
@import Foundation;

#include "IGContentNoteDetailsViewControllerDelegate-Protocol.h"
#include "IGContentNotesActionHandlerDelegate-Protocol.h"
#include "IGContentNotesFloatingViewControllerDelegate-Protocol.h"
#include "IGContentNotesImmersiveReplyViewControllerDelegate-Protocol.h"
#include "IGContentNotesNUXModalViewControllerDelegate-Protocol.h"
#include "IGContentNotesOverflowViewControllerDelegate-Protocol.h"
#include "IGDirectNotesComposerViewControllerDelegate-Protocol.h"
#include "IGDirectReplyToAuthorSendDelegate-Protocol.h"
#include "IGDirectReplyToAuthorViewControllerPresenting-Protocol.h"
#include "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"

@class IGContentNotesDefaultLoggingInfo, IGUserSession, NSString, UIViewController;

@interface IGContentNotesActionHandler : NSObject<IGContentNotesImmersiveReplyViewControllerDelegate, IGContentNotesNUXModalViewControllerDelegate, IGContentNotesOverflowViewControllerDelegate, IGDirectNotesComposerViewControllerDelegate, IGContentNoteDetailsViewControllerDelegate, IGDirectReplyToAuthorSendDelegate, IGContentNotesFloatingViewControllerDelegate, IGStoryPostCaptureEditingViewControllerDelegate> {
  /* instance variables */
  NSObject<IGDirectReplyToAuthorViewControllerPresenting> *_directReplyToAuthorPresenter;
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  UIViewController *_viewController;
  IGContentNotesDefaultLoggingInfo *_defaultLoggingInfo;
  long long _eventSource;
  NSObject<IGContentNotesActionHandlerDelegate> *_delegate;
  BOOL _enableImmersiveComposer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module viewController:(id)controller delegate:(id)delegate;
- (void)handleDidTapContentNotesNUXWithDelegate:(id)delegate mediaPK:(id)pk defaultLoggingInfo:(id)info;
- (void)_handleTapOnShareToStoryForMedia:(id)media carouselIndex:(unsigned long long)index;
- (void)_handleReplyToContentNoteWithNoteModel:(id)model mediaPK:(id)pk defaultLoggingInfo:(id)info presentationContext:(id)context;
- (void)_handleCreateContentNoteOnMedia:(id)media eventSource:(long long)source presentationContext:(id)context defaultLoggingInfo:(id)info;
- (void)_handleOpenOverflowListWithSeenNoteID:(id)id media:(id)media defaultLoggingInfo:(id)info;
- (void)didTapNoteWithNoteModel:(id)model media:(id)media defaultLoggingInfo:(id)info presentationContext:(id)context;
- (void)didTapAddNoteWithMediaPK:(id)pk defaultLoggingInfo:(id)info;
- (void)didTapContextMenuWithAction:(long long)action noteModel:(id)model media:(id)media defaultLoggingInfo:(id)info;
- (void)immersiveReplyViewController:(id)controller didTapNoteTimeStampLabelForUser:(id)user;
- (void)immersiveReplyViewController:(id)controller didTapNoteProfileImageFor:(id)for;
- (void)immersiveReplyViewControllerIsPresenting:(id)presenting;
- (void)immersiveReplyViewControllerIsDismissing:(id)dismissing;
- (void)immersiveReplyViewController:(id)controller didTapAddNoteForMedia:(id)media defaultLoggingInfo:(id)info;
- (void)_navigateToProfileWithUserModel:(id)model;
- (void)contentNotesNUXModalViewController:(id)controller didTapTryItWithMediaPK:(id)pk defaultLoggingInfo:(id)info;
- (void)contentNotesNUXModalViewController:(id)controller didTapGotItWithMediaPK:(id)pk noteID:(id)id defaultLoggingInfo:(id)info;
- (void)contentNotesNUXModalViewController:(id)controller didTapGotItFromPogWithMediaPK:(id)pk seenNoteID:(id)id defaultLoggingInfo:(id)info;
- (void)directReplyControllerWillSendMessageToUser:(id)user;
- (void)directReplyControllerDidSendMessageToUser:(id)user noteItemLoggingModel:(id)model;
- (void)detailsViewController:(id)controller didTapLeaveNewNoteWithMediaPk:(id)pk defaultLoggingInfo:(id)info;
- (void)noteComposerViewControllerDidCreateNote:(id)note tapTarget:(long long)target destination:(id)destination;
- (void)noteComposerViewControllerDidAttemptFailedNoteMentionWithUsername:(id)username;
- (void)noteComposerViewControllerWillAppear;
- (void)noteComposerViewControllerWillDismissShouldShowBubble:(BOOL)bubble;
- (void)noteComposerViewControllerDidDismiss;
- (void)noteComposerViewControllerDidCompleteUploadForNote:(id)note;
- (void)contentNotesFloatingViewController:(id)controller didTapNoteWithNoteModel:(id)model media:(id)media defaultLoggingInfo:(id)info presentationContext:(id)context;
- (void)contentNotesFloatingViewController:(id)controller didTapContextMenuWithAction:(long long)action noteModel:(id)model media:(id)media defaultLoggingInfo:(id)info;
- (void)contentNotesFloatingViewControllerDidTapAddNote:(id)note media:(id)media defaultLoggingInfo:(id)info;
- (void)storyPostCaptureEditingViewController:(id)controller didShareToStory:(long long)story andDirectRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids exitPoint:(long long)point completion:(id /* block */)completion;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)cancel;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendRollCallWithDirectRecipients:(id)recipients;
- (void)storyPostCaptureEditingViewController:(id)controller didTapSendPermanentMediaWithAsset:(id)asset entryPoint:(long long)point;
- (void)storyPostCaptureEditingViewController:(id)controller didTapConfirmNotesPogVideoWithComposition:(id)composition;
@end

#endif /* IGContentNotesActionHandler_h */
